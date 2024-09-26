.. Copyright (C) 2021 - 2023 MariaDB plc. All rights reserved.
   ID: 0MMJXRPWX5N5GQ2

.. page::
   :silos: columnstore, server, skysql-previous-release, xpand

.. include-once:: ~/misc.inc

.. _connector-c-connect:

# Connect with MariaDB Connector/C
---
~ Connect

MariaDB Connector/C enables C and C++ applications to establish client connections to MariaDB database products over TLS.

Additional information on MariaDB Connector/C is available in the «ext-uri»«https://mariadb.com/kb/en/mariadb-connector-c/»«MariaDB Knowledge Base».

.. silo:: AllSky ===================================================================================

## Connection Info
---

The connection is configured via the information that is initially acquired from the SkySQL Portal pages:

.. list-table::
   :widths: 20 30 50
   :header-rows: 1

   * - **Function**
     - **Option/Argument**
     - **Where to find it**
   * - ``mysql_optionsv()``
     - ``MYSQL_OPT_SSL_CA`` option
     - The path to the ``skysql_chain.pem`` file containing the «slug»«sky-connection-parameters-certificate-authority-chain»«"Certificate Authority Chain"»
       * «ext-uri»«https://supplychain.mariadb.com/skysql_chain.pem»«Download For GCP services»
       * «ext-uri»«https://supplychain.mariadb.com/aws_skysql_chain.pem»«Download For AWS services»
   * - ``mysql_real_connect()``
     - ``host`` argument
     - The fully Qualified Domain Name in the «slug»«sky-connection-parameters»«Service Details view»
   * - ``mysql_real_connect()``
     - ``user`` argument
     - The desired username, which might be the default username in the Service Credentials view
   * - ``mysql_real_connect()``
     - ``passwd`` argument
     - The user's password, which might be the default password in the Service Credentials view if it was not yet customized
   * - ``mysql_real_connect()``
     - ``port`` argument
     - The Read-Write Port or Read-Only Port in the «slug»«sky-connection-parameters»«Service Details view»

.. end-silo:: ======================================================================================

.. _connector-c-establishing-connections: 

## Code Example: Connect
---
~ Example: Connect

The following code demonstrates how to use MariaDB Connector/C to connect to MariaDB database products. This example uses the «slug»«connector-c-example-setup»«example database and user account»:

.. rst-assign:: code_block #########################################################################

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>
   #include <mysql.h>

   int main (int argc, char* argv[])
   {

      // Initialize Connection
      MYSQL *conn;
      if (!(conn = mysql_init(0)))
      {
         fprintf(stderr, "unable to initialize connection struct\n");
         exit(1);
      }
      !SILO=sky!

      char* cafile = "/path/to/skysql_chain.pem";

      // Configure the TLS Certificate Authority. This may vary by hosting provider!
      mysql_optionsv(conn, MYSQL_OPT_SSL_CA, cafile);
      !END-SILO!

      // Connect to the database
      if (!mysql_real_connect(
            conn,                 // Connection
            !SILO=ent!
            "mariadb.example.net",// Host
            !SILO=sky!
            "example.skysql.net", // Host
            !END-SILO!
            "db_user",            // User account
            "db_user_password",   // User password
            "test",               // Default database
            !SILO=ent!
            3306,                 // Port number
            !SILO=sky!
            5009,                 // Port number
            !END-SILO!
            NULL,                 // Path to socket file
            0                     // Additional options
         ))
      {
         // Report the failed-connection error & close the handle
         fprintf(stderr, "Error connecting to Server: %s\n", mysql_error(conn));
         mysql_close(conn);
         exit(1);
      }

      // Use the Connection
      // ...

      // Close the Connection
      mysql_close(conn);

      return 0;
   }

.. end-rst:: #######################################################################################

.. vinclude:: silo_block(code_block, {'ent': '!sky*', 'sky': 'sky*'})
