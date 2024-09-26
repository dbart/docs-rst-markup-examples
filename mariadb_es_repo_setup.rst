.. Copyright (C) 2022 - 2024 MariaDB plc. All rights reserved.
   ID: 3SJN4DZLM5GX9WP

.. NOTE: AUTO-GENERATED from source/all/ref/mariadb_repo_setup.template

.. page::
   :silos: columnstore, server, skysql-dbaas, skysql-previous-release, xpand

.. meta::
   :description: Reference material describing mariadb_es_repo_setup for MariaDB Enterprise Server.
   :robots: noindex

.. _repo/cli/mariadb_es_repo_setup:

# mariadb_es_repo_setup for MariaDB Enterprise Server
---
~ ``mariadb_es_repo_setup``

The ``mariadb_es_repo_setup`` script configures APT/YUM/ZYpp to install software from the MariaDB Enterprise Repository on supported Linux operating systems.

To configure APT/YUM/ZYpp to install software from the MariaDB Community Repository, see «slug»«mariadb_repo_setup»«``mariadb_repo_setup``» instead.

## Installation
---

.. include-once:: ~/misc.inc

The ``mariadb_es_repo_setup`` script is available for download from MariaDB Corporation:

.. code-block:: console

   $ curl -LSsO <%mariadb_es_repo_setup_url%>

   $ echo "<%mariadb_es_repo_setup_checksum%>  mariadb_es_repo_setup" \
          | sha256sum -c -

   $ chmod +x mariadb_es_repo_setup

## Customer Download Token
---
~ Token

The ``mariadb_es_repo_setup`` script requires a «ext-uri»«https://cloud.mariadb.com/csm?id=my_customer_token»«Customer Download Token», which is set using the «slug»«repo/cli/mariadb_es_repo_setup/token»«``--token``» option:

.. code-block:: console

   $ sudo ./mariadb_es_repo_setup --token="CUSTOMER_DOWNLOAD_TOKEN" --apply

## Releases
---

For information on releases, see "«slug:?server»«release-notes-mariadb_es_repo_setup»«Release Notes for mariadb_es_repo_setup»".

## Usage
---

.. code-block:: console

   $ sudo ./mariadb_es_repo_setup [ OPTIONS .. ]

For additional information, see "«slug:?server»«configure-enterprise-repo»«Configure the MariaDB Enterprise Repository»".

.. _repo/cli/mariadb_es_repo_setup-options:

### mariadb_es_repo_setup Options
---

.. include:: ../../repo/cli/mariadb_es_repo_setup.tinc

.. toctree::
   :glob:
   :hidden:

    mariadb_es_repo_setup/*
