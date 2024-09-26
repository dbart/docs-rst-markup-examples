.. Copyright (C) 2024 MariaDB plc. All rights reserved.
   ID: 8N9XLK0QN86JM3G

.. rst-assign:: rn notable R2DBC-103 1.2.2 #########################################################

* In order to support the R2DBC 0.9.1 specification (used by Spring Boot 2.7) the maven artifact ``org.mariadb:r2dbc-mariadb-SPEC-0.9.1`` has been added

  * The artifact will be maintained until enterprise support ends for Spring boot 2.7

.. rst-assign:: rn notable R2DBC-105 1.2.2 #########################################################

* A new option, ``skipPostCommands``, permits disabling initial connection settings, and indicating that commands after connections must be skipped. This allows avoiding unnecessary commands on connection creation, and when using RDS proxy to not have session pinning.

  * This option has to be used with care, because the connector expects the server to have:

    * Connection exchanges to be ``UTF8(mb3/mb4)``

    * Autocommit set to ``true``

    * Transaction isolation defaulting to ``REPEATABLE-READ``

  * This option can only be enabled if the server's global options correspond to these defaults.

.. rst-assign:: rn fixed R2DBC-104 1.2.2 ###########################################################

* When using connection redirection, error ``"Connection is closed. Cannot send anything"`` might be returned.

.. rst-assign:: rn notable R2DBC-96 1.2.1 ##########################################################

* Adding missing UUID Object support

.. rst-assign:: rn fixed R2DBC-97 1.2.1 ############################################################

* NPE if No HaMode provided

.. rst-assign:: rn fixed R2DBC-98 1.2.1 ############################################################

* Correcting possible bug connecting if project contain a project.properties file

.. rst-assign:: rn fixed R2DBC-99 1.2.1 ############################################################

* No encoding set for ByteBuffer parameter

.. rst-assign:: rn fixed R2DBC-101 1.2.1 ###########################################################

* Wrong default return type for MySQL JSON fields

.. rst-assign:: rn fixed R2DBC-102 1.2.1 ###########################################################

* Avoid netty unneeded dependencies

.. rst-assign:: rn notable R2DBC-93 1.2.0 ##########################################################

* New timezone option

  * The new ``timezone`` option can have 3 types of values:

    * ``disabled`` (default) : connector doesn't change timezone

    * ``auto`` : connector will set timezone connection variable to java default timezone

    * ``<a java timezone>`` : connector will set connection variable to the specified timezone. Compared to ``auto``, this avoids having some additional exchange with the server at connection creation

    Examples:

      .. code-block:: java

         r2dbc:mariadb://user:pwd@localhost:3306/db?timezone=+5:00

         r2dbc:mariadb://user:pwd@localhost:3306/db?timezone=auto

         r2dbc:mariadb://user:pwd@localhost:3306/db?timezone=America/New_York

  * The recommended setting for ``timezone`` is ``auto``.

.. rst-assign:: rn notable R2DBC-66 1.2.0 ##########################################################

* Add support for connection redirection

  * With MariaDB Community Server 11.3.1 a new global variable ``redirect_url`` value has been added, supported format:

    .. code-block::

       {mariadb/mysql}://[<user>[:<password>]@]<host>[:<port>]/

  * When set, all existing connections will be redirected to the designated URL values when appropriate. A connection will only be redirected when no transaction is active.

  * Example for enabling the redirection:

    .. code-block:: mysql

       set @@global.redirect_url="mariadb://somehost:3306/"

  * The redirection feature is enabled by default. It can be disabled by setting the new option ``permitRedirect`` to FALSE, which will result in ignoring the redirection URL.

.. rst-assign:: rn fixed R2DBC-92 1.2.0 ############################################################

* Properly end connection (in place of RST TCP packet)

.. rst-assign:: rn fixed R2DBC-86 1.2.0 ############################################################

* Failover High availability mode ``r2dbc:mariadb:[sequential|loadbalancing]://...`` wrongly parsed

.. rst-assign:: rn fixed R2DBC-87 1.2.0 ############################################################

* Compatibility with mariadb 11.1.1

.. rst-assign:: rn fixed R2DBC-88 1.2.0 ############################################################

* Java 8 compatibility regression

.. rst-assign:: rn fixed R2DBC-91 1.2.0 ############################################################

* Ensure respecting server collation

.. rst-assign:: rn fixed R2DBC-94 1.2.0 ############################################################

* Session tracking wrong implementation when multiple system variable changes

.. end-rst:: #######################################################################################

.. vim: ft=rst
