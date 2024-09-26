.. Copyright (C) 2020 - 2024 MariaDB plc. All rights reserved.
   ID: RT9HS20B0BM76B2

.. page::
   :silos: columnstore, server, skysql-previous-release, xpand

.. include-once:: ~/misc.inc

.. meta::
   :description: Connector for administrating and operating on MariaDB Server in C applications.

.. var:: es_ver=10.6

.. var:: cs_ver=10.6

.. _connector-c-install:

# Install MariaDB Connector/C
---
~ Install

MariaDB Connector/C supports several Linux distributions and Microsoft Windows.

.. _connector-c-install-repo-configure:

## Configure Package Repository (Linux)
---
~ Configure Repo (Linux)

To install MariaDB Connector/C on Linux using APT, YUM, or ZYpp, you must configure your system to use either the ES Package Repository \or the CS Package Repository.

If your system is already configured to use one of these package repositories, you can skip to «slug»«connector-c-install-repo-install»«install MariaDB Connector/C».

Choose a package repository to configure:

.. list-table::
   :header-rows: 1
   :widths: 25 75

   * - **Package Repository**
     - **Description**
   * - «slug»«connector-c-install-repo-configure-es»«ES Package Repository»
     - * MariaDB Enterprise Server package repository
       * Available to customers of MariaDB Corporation
       * Available for APT, YUM, and ZYpp on supported Linux distributions
       * Configured with the «slug»«repo/cli/mariadb_es_repo_setup»«mariadb_es_repo_setup» utility
   * - «slug»«connector-c-install-repo-configure-cs»«CS Package Repository»
     - * MariaDB Community Server package repository
       * Publicly available
       * Available for APT, YUM, and ZYpp on supported Linux distributions
       * Configured with the «slug»«repo/cli/mariadb_repo_setup»«mariadb_repo_setup» utility

.. _connector-c-install-repo-configure-es:

### ES Package Repository
---
~ ES Repo

MariaDB Connector/C is available from the same package repository as MariaDB Enterprise Server.

To configure the ES package repository:

#. Install ``curl``.

   Install via APT on Debian, Ubuntu:

   .. code-block:: console

      $ sudo apt install curl

   Install via YUM on CentOS, RHEL, Rocky Linux:

   .. code-block:: console

      $ sudo yum install curl

   Install via ZYpp on SLES:

   .. code-block:: console

      $ sudo zypper install curl

#. Download the «slug»«repo/cli/mariadb_es_repo_setup»«mariadb_es_repo_setup» utility, validate its checksum, and ensure that its permissions allow it to be executed:

   .. code-block:: console

      $ curl -LsSO <%mariadb_es_repo_setup_url%>

   .. code-block:: console

      $ echo "<%mariadb_es_repo_setup_checksum%>  mariadb_es_repo_setup" \
          | sha256sum -c -

   .. code-block:: console

      $ chmod +x mariadb_es_repo_setup

#. Retrieve your Customer Download Token at «ext-uri»«https://cloud.mariadb.com/csm?id=my_customer_token»«Customer Download Token at the MariaDB Customer Portal» and substitute your token for ``CUSTOMER_DOWNLOAD_TOKEN`` in the following step.

#. Configure the ES package repository using the «slug»«repo/cli/mariadb_es_repo_setup»«mariadb_es_repo_setup» utility:

   .. code-block:: console

      $ sudo ./mariadb_es_repo_setup --token="CUSTOMER_DOWNLOAD_TOKEN" --apply \
         --mariadb-server-version="<%es_ver%>"

   * All major releases of ES contain the same version of MariaDB Connector/C.

   * By default, the «slug»«repo/cli/mariadb_es_repo_setup»«mariadb_es_repo_setup» utility will configure your system to use the package repository for ES <%es_ver%>.

   * To configure your system to use the ES package repository for a specific major release, use the «slug»«repo/cli/mariadb_es_repo_setup/mariadb-server-version»«--mariadb-server-version» option.

#. «slug»«connector-c-install-repo-install»«Install MariaDB Connector/C» using the package repository.

.. _connector-c-install-repo-configure-cs:

### CS Package Repository
---
~ CS Repo

MariaDB Connector/C is available from the same package repository as MariaDB Community Server.

To configure the CS package repository:

#. Install ``curl``.

   Install via APT on Debian, Ubuntu:

   .. code-block:: console

      $ sudo apt install curl

   Install via YUM on CentOS, RHEL, Rocky Linux:

   .. code-block:: console

      $ sudo yum install curl

   Install via ZYpp on SLES:

   .. code-block:: console

      $ sudo zypper install curl

#. Download the «slug»«repo/cli/mariadb_repo_setup»«mariadb_repo_setup» utility, validate its checksum, and ensure that its permissions allow it to be executed:

   .. code-block:: console

      $ curl -LsSO <%mariadb_repo_setup_url%>

   .. code-block:: console

      $ echo "<%mariadb_repo_setup_checksum%>  mariadb_repo_setup" \
          | sha256sum -c -

   .. code-block:: console

      $ chmod +x mariadb_repo_setup

#. Configure the CS package repository using the «slug»«repo/cli/mariadb_repo_setup»«mariadb_repo_setup» utility:

   .. code-block:: console

      $ sudo ./mariadb_repo_setup \
         --mariadb-server-version="mariadb-<%cs_ver%>"

   * All major releases of CS contain the same version of MariaDB Connector/C.

   * By default, the «slug»«repo/cli/mariadb_repo_setup»«mariadb_repo_setup» utility will configure your system to use the package repository for CS <%cs_ver%>.

   * To configure your system to use the CS package repository for a specific major release, use the «slug»«repo/cli/mariadb_repo_setup/mariadb-server-version»«--mariadb-server-version» option.

#. «slug»«connector-c-install-repo-install»«Install MariaDB Connector/C» using the package repository.

.. _connector-c-install-repo-install:

## Installation via Package Repository (Linux)
---
~ Install via Repo (Linux)

On supported Linux distributions, MariaDB Connector/C can be installed using APT, YUM, or ZYpp if the system is configured to use the «slug»«connector-c-install-repo-configure-es»«ES Package Repository» \or the «slug»«connector-c-install-repo-configure-cs»«CS Package Repository».

### Install on CentOS, RHEL, Rocky Linux
---
~ CentOS, RHEL, Rocky Linux

To install MariaDB Connector/C on CentOS, RHEL, and Rocky Linux, you can use YUM if you have the «slug»«connector-c-install-repo-configure-es»«ES Package Repository» \or «slug»«connector-c-install-repo-configure-cs»«CS Package Repository» configured.

Install MariaDB Connector/C and package dependencies:

.. code-block:: console

   $ sudo yum install MariaDB-shared MariaDB-devel

### Install on Debian, Ubuntu
---
~ Debian, Ubuntu

To install MariaDB Connector/C on Debian and Ubuntu, you can use APT if you have the «slug»«connector-c-install-repo-configure-es»«ES Package Repository» \or «slug»«connector-c-install-repo-configure-cs»«CS Package Repository» configured.

Install MariaDB Connector/C and package dependencies:

.. code-block:: console

   $ sudo apt install libmariadb3 libmariadb-dev

### Install on SLES
---
~ SLES

To install MariaDB Connector/C on SLES, you can use ZYpp if you have the «slug»«connector-c-install-repo-configure-es»«ES Package Repository» \or «slug»«connector-c-install-repo-configure-cs»«CS Package Repository» configured.

Install MariaDB Connector/C and package dependencies:

.. code-block:: console

   $ sudo zypper install MariaDB-shared MariaDB-devel

## Install via Binary Tarball (Linux)
---
~ Bintar (Linux)

MariaDB Connector/C can be installed on supported Linux distributions via a binary tarball package:

#. Go to the «ext-uri»«https://mariadb.com/downloads/connectors/connectors-data-access/c-connector»«MariaDB Connector/C download page»

#. Ensure the "Product" dropdown reads "C connector."

#. In the "Version" dropdown, select the version you want to download.

#. In the "OS" dropdown, select your Linux distribution.

#. Click on the "Download" button to download the binary tarball package.

## Install via MSI (Windows)
---
~ MSI (Windows)

MariaDB Connector/C can be installed on Microsoft Windows via an MSI package:

#. Go to the «ext-uri»«https://mariadb.com/downloads/connectors/connectors-data-access/c-connector»«MariaDB Connector/C download page»

#. Ensure the "Product" dropdown reads "C connector."

#. In the "Version" dropdown, select the version you want to download.

#. In the "OS" dropdown, select either "MS Windows (64-bit)" or "MS Windows (32-bit)", depending on whether you need a 64-bit \or 32-bit connector.

#. Click on the "Download" button to download the MSI package.

#. When the MSI package finishes downloading, run it \and follow the on-screen instructions.
