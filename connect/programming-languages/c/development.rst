.. Copyright (C) 2021 - 2023 MariaDB plc. All rights reserved.
   ID: H1QGSJ6T5S8PZN7

.. page::
   :silos: columnstore, server, skysql-previous-release, xpand

.. include-once:: ~/misc.inc

.. _connector-c-develop:

# Application Development with MariaDB Connector/C
---
~ Development

MariaDB Connector/C enables C and C++ applications to establish client connections to MariaDB database products over TLS.

.. _connector-c-develop-building:

## Build Your Application with Connector/C
---
~ Compiling

When you build a C application, your compiler must link your application with the MariaDB Connector/C shared library.

The following ``gcc`` («ext-uri»«https://gcc.gnu.org/»«GNU GCC») command demonstrates how to link an application with the MariaDB Connector/C shared library using the ``mariadb_config`` utility to determine the compiler arguments:

.. code-block:: console

   $ gcc -o example example.c $(mariadb_config --include --libs)

If you are not using the ``gcc`` compiler, please consult your compiler's manual.

.. _connector-c-headers:

## Header Files
---

MariaDB Connector/C includes several header files. In some cases, developers might find it useful to inspect the MariaDB Connector/C header files to view the definitions of structures, functions, and constants.

The header files:

* Contain the definitions of structures, functions, and constants.

* Are installed to the ``/usr/include/mariadb/`` directory by default on Linux.

C applications developed using MariaDB Connector/C must include the ``mysql.h`` header file.

