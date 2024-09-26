.. Copyright (C) 2019 - 2024 MariaDB plc. All rights reserved.
   ID: XXPKCSN311L4JDG

.. page::
   :silos: columnstore, server, skysql-dbaas, skysql-previous-release, xpand

.. meta::
   :description: You can connect to MariaDB databases from an application, interactively, or from scripts.

.. _clients:

.. _connect:

# Connect and Query
---

.. silo:: OldSky ===================================================================================

This documentation covers the previous release of SkySQL. A new SkySQL release is now «topic:skysql-dbaas»«Choose a SkySQL Release»«available to explore».    

.. silo:: OldSky ===================================================================================

Connect to MariaDB SkySQL services using «slug»«sky-service-details»«service details» and a MariaDB-compatible client.

By default, connections to SkySQL services occur over TLS to provide «slug»«data-in-transit-encryption»«data-in-transit encryption». «slug»«aws-privatelink»«AWS PrivateLink» and «slug»«vpc-peering»«GCP VPC Network Peering» are available.

.. list-table::
   :header-rows: 0
   :widths: 20 40 40

   - - Workstation to Database
     - .. figure:: skysql-connect-workstation-no-title.png
          :alt: Connect from a Workstation to a Database
     - - «slug»«interactive-clients»«Desktop clients for interactive SQL queries»
       - «slug»«command-line-scripts»«Command-line scripts»
       - «slug»«business-intelligence»«Business Intelligence (BI)»
       - «slug»«data-loading»«Data import»
       - «slug»«data-loading»«Data export»
       - «slug»«monitoring»«SkySQL Monitoring»
   - - Application to Database
     - .. figure:: skysql-connect-application-no-title.png
          :alt: Connect from an Application to a Database
     - - «slug»«connector-c»«C»
       - «slug»«connector-cpp»«C++»
       - «slug»«connector-j»«Java»
       - «slug»«connector-r2dbc»«Java R2DBC»
       - «slug»«connector-nodejs»«Node.js»
       - «slug»«connector-odbc»«ODBC»
       - «slug»«connector-python»«Python»
   - - Database to Database
     - .. figure:: skysql-connect-database-no-title.png
          :alt: Connect from a Database to a Database
     - - «slug»«migration»«Migration»
       - «slug»«sky-replication»«Replication»

SkySQL services are managed from the «slug»«portal»«SkySQL Portal» or using the «slug»«api»«SkySQL DBaaS API».

.. silo:: NewSky ===================================================================================

* «topic»«Client Connections»

* «topic»«Serverless Analytics»

* «topic»«Query Editor»

* «topic»«Notebook»

* «topic»«NoSQL Interface»

.. silo:: NonSky ===================================================================================

Database connections are made using a **connector** (from an application) or a **client** (interactively or from scripts).

Clients and connectors listed here are supported under «ext-uri»«https://mariadb.com/engineering-policies/»«MariaDB Corporation Engineering Policies».

Clients and connectors listed here are compatible with:

* MariaDB SkySQL DBaaS

* MariaDB database products (including Enterprise Server and MaxScale)

* MariaDB Community Server

## MariaDB Connectors
---

MariaDB Connectors are available for many popular programming languages.

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - **Programming Language / Interface**
     - **Connector**
   * - C
     - «slug»«connector-c»«MariaDB Connector/C»
   * - C++
     - «slug»«connector-cpp»«MariaDB Connector/C++»
   * - Java - JDBC
     - «slug»«connector-j»«MariaDB Connector/J»
   * - Java - R2DBC
     - «slug»«connector-r2dbc»«MariaDB Connector/R2DBC»
   * - JavaScript
     - «slug»«connector-nodejs»«MariaDB Connector/Node.js»
   * - ODBC
     - «slug»«connector-odbc»«MariaDB Connector/ODBC»
   * - Python
     - «slug»«connector-python»«MariaDB Connector/Python»

## MariaDB Client
---

MariaDB Client can be used interactively or within scripts.

MariaDB Client is included with distributions of MariaDB database products.

Compatible third-party clients exist but are not listed here.

.. list-table::
   :header-rows: 1
   :widths: 35 65

   * - **Executable Filename**
     - **Purpose**
   * - ``mariadb``, ``mysql``
     - Connect from the command-line

For additional information about MariaDB Client, see "«slug»«mariadb-client»".

## Tools and Utilities
---

Tools and utilities listed here are included with distributions of MariaDB database products and make a client connection.

.. list-table::
   :header-rows: 1
   :widths: 35 65

   * - **Command-Line Executable**
     - **Purpose**
   * - ``mariadb-admin``, ``mysqladmin``
     - Check configuration and current status
   * - ``mariadb-backup``, ``mariabackup``
     - Create and restore physical backups (including Aria, InnoDB, MyISAM, MyRocks)
   * - ``mariadb-binlog``, ``mysqlbinlog``
     - Read binary logs or relay logs
   * - ``mariadb-check``, ``mysqlcheck``
     - Perform table maintenance operations
   * - ``mariadb-dump``, ``mysqldump``
     - Create logical backups
   * - ``mariadb-import``, ``mysqlimport``
     - Load table data from CSV, TSV, and other text file formats
   * - ``mariadb-show``, ``mysqlshow``
     - Display databases, tables, table columns, indexes
   * - ``mariadb-slap``, ``mysqlslap``
     - Generate client load for testing

## Business Intelligence (BI)
---

MariaDB database products are accessible from business intelligence (BI) platforms, including:

.. list-table::
   :header-rows: 1
   :widths: 35 65

   * - **BI Platform**
     - **Detail**
   * - Microsoft Power BI
     - «slug»«ent-power-bi»«MariaDB Direct Query Adapter for Microsoft Power BI» enables Microsoft Power BI Desktop users to remotely connect to and query their MariaDB database, including on MariaDB SkySQL, without downloading the entire data set to their local machine.

.. end-silo:: ======================================================================================

.. toctree::
   :glob:
   :hidden:

   connect/*
