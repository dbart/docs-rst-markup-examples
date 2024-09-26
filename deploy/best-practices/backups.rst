.. Copyright (C) 2019 - 2023 MariaDB plc. All rights reserved.
   ID: 7RQPXJV5L3XZN05

.. page::
   :silos: columnstore, server, xpand

.. meta::
   :description: Guide to downloading, installing, and configuring MariaDB Enterprise Server.
   :xforumcat: Documentation

.. _deploy-best-practices-backups:

# Best Practices - Backups
---
~ Backups

Addition, removal, and change of database systems are types of production changes. Before undertaking any production changes:

* Perform a backup of existing data and database configurations.

* Establish a plan for data restoration for use in reverting a change.

* Perform a test to confirm your backup is complete and viable.

## Irreversible Changes
---

Installation of new database servers, change of server configuration, migrations, upgrades, and downgrades can produce irreversible changes which may require you to restore from the last good backup.

Changes to data format on disk, including from upgrades \and downgrades, are generally irreversible. A fault during the upgrade or downgrade process may corrupt data. **Confirm you have a recent, full, complete, and tested backup before any upgrade \or downgrade operation.**

.. silo:: !xpand ===================================================================================

When «slug»«temporal-tables»«System-Versioned temporal data tables» are in use, downgrade operations will generally require migration of data between servers \or restore from a backup made pre-upgrade.

.. end-silo:: ======================================================================================

## Full and Complete Backup
---

Before proceeding with an upgrade, perform a full \and complete backup. Confirm successful completion of the backup operation and test the backup.

Business requirements may require you to retain backups made to support upgrade and downgrade operations.

Additional information regarding backing up and restoring MariaDB database products can be found in «slug:?server»«recovery»«"Recovery"».

