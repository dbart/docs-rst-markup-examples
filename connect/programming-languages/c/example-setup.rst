.. Copyright (C) 2021 - 2023 MariaDB plc. All rights reserved.
   ID: 29LCD8DTB5TXPR2

.. page::
   :silos: columnstore, server, skysql-previous-release, xpand

.. _connector-c-example-setup:

# Setup for Examples
---
~ Setup for Examples

Examples in this MariaDB Connector/C documentation depend on a database ``test`` and table ``contacts``. 

## Create the Schema
---

Create the example database and table:

   .. code-block:: sql

      CREATE DATABASE IF NOT EXISTS test;

      CREATE TABLE test.contacts (
         id INT PRIMARY KEY AUTO_INCREMENT,
         first_name VARCHAR(25),
         last_name VARCHAR(25),
         email VARCHAR(100)) ENGINE=InnoDB;

## Create the User
---

Create a user ``db_user`` with privileges to execute the examples:

   .. code-block:: sql

      CREATE USER IF NOT EXISTS db_user@192.0.2.1
          IDENTIFIED BY 'db_user_password';

   .. code-block:: sql          

      GRANT ALL PRIVILEGES ON test.* TO db_user@192.0.2.1;

### Password Guidance
---

Passwords should meet your organization's password policies. If your MariaDB Enterprise Server instance has a password validation plugin installed, the password must also meet the configured requirements.

By default, MariaDB Enterprise Server installs the «slug:server»«mdb/plugins/simple_password_check»«simple_password_check» plugin, configured with system variables:

* «slug:server»«mdb/system-variables/simple_password_check_digits»«simple_password_check_digits»

* «slug:server»«mdb/system-variables/simple_password_check_letters_same_case»«simple_password_check_letters_same_case»

* «slug:server»«mdb/system-variables/simple_password_check_minimal_length»«simple_password_check_minimal_length»

* «slug:server»«mdb/system-variables/simple_password_check_other_characters»«simple_password_check_other_characters» system variables.

