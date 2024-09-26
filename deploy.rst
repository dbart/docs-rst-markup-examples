.. Copyright (C) 2019 - 2023 MariaDB plc. All rights reserved.
   ID: 1FK5VRK333M5CZ3

.. page::
   :silos: columnstore, server, xpand

.. meta::
   :description: Guide to obtaining, installing, and configuring MariaDB Enterprise Server.
   :xforumcat: Documentation

.. _community-cluster-bootstrap:

.. _community-cluster-node-config:

.. _community-cluster-start:

.. _community-primary-server-config:

.. _community-primary-server-replication-user:

.. _community-replica-server-config:

.. _community-spider-config:

.. _community-spider-load:

.. _deploy-community-primary:

.. _deploy-community-replica:

.. _deploy-community-replica-testing:

.. _deploy-target-community-galera-cluster:

.. _deploy-target-community-primary:

.. _deploy-target-community-replica:

.. _deploy-target-maxscale-galeramon-readconnroute:

.. _deploy-target-maxscale-galeramon-readwritesplit:

.. _deploy-target-maxscale-mariadbmon-readconnroute:

.. _deploy-target-maxscale-mariadbmon-readwritesplit:

.. _maxscale-csmon-readconnroute-config:

.. _maxscale-csmon-readwritesplit-config:

.. _deploy-os:

.. _deploy:

.. _deployment-guide:

# MariaDB Deployment
---
~ Deploy

Procedures are provided to download, install, set-up, configure, and test MariaDB products.

«slug»«operations-upgrades»«Upgrade» instructions are also available.

MariaDB products can be deployed in many different topologies. The topologies on this page are representative. MariaDB products can be deployed to form other topologies, leverage advanced product capabilities, or combine the capabilities of multiple topologies.

.. silo:: xpand ====================================================================================

## Transactional (OLTP)
---
~ Transactional Workloads

.. include-once:: ~/deploy-tables.inc

.. eval::

   deploy_list_table = deploy_table('Topology',
      ( XpandLink, XpandFig, XpandFeat ),
   )

.. vinclude:: deploy_list_table

.. silo:: server ===================================================================================

## Transactional (OLTP)
---
~ Transactional Workloads

.. include-once:: ~/deploy-tables.inc

.. eval::

   deploy_list_table = deploy_table('Topology',
      ( PRLink, PRFig, PRFeat ),
      ( ClusterLink, ClusterFig, ClusterFeat ),
      )

.. vinclude:: deploy_list_table

.. end-silo:: ======================================================================================

.. silo:: !xpand ===================================================================================

.. _deploy-analytical:

## Analytical (OLAP, Data Warehousing, DSS)
---
~ Analytical Workloads

.. eval::

   deploy_list_table = deploy_table('Topology',
      ( ColObjectLink, ColObjectFig, ColObjectFeat ),
      ( ColSharedLink, ColSharedFig, ColSharedFeat ),
      )

.. vinclude:: deploy_list_table

## Hybrid Workloads
---

.. eval::

   deploy_list_table = deploy_table('Topology',
       (ColHtapLink, ColHtapFig, ColHtapFeat),
      )

.. vinclude:: deploy_list_table

.. _deploy-target-enterprise-spider:

.. _spider-deployment-process:

.. _deploy-enterprise-spider:

.. _deploy-spider:

## Spider Topologies
---

.. eval::

   deploy_list_table = deploy_table('Topology',
       (SpiderFedLink, SpiderFedFig, SpiderFedFeat),
       (SpiderShardLink, SpiderShardFig, SpiderShardFeat),
      )

.. vinclude:: deploy_list_table

.. _deploy-single-node:

## Single Node Topologies
---

### MariaDB Community Server
---
~

- «slug:?server»«deploy-single-node-cs10.2-start»«MariaDB Community Server 10.2»

- «slug:?server»«deploy-single-node-cs10.3-start»«MariaDB Community Server 10.3»

- «slug:?server»«deploy-single-node-cs10.4-start»«MariaDB Community Server 10.4»

- «slug:?server»«deploy-single-node-cs10.5-start»«MariaDB Community Server 10.5»

- «slug:?server»«deploy-single-node-cs10.6-start»«MariaDB Community Server 10.6»

### MariaDB Community Server with ColumnStore
---
~

* «slug:?columnstore»«deploy-single-node-community-columnstore-cs10.5-start»«MariaDB Community Server with ColumnStore 5»

* «slug:?columnstore»«deploy-single-node-community-columnstore-cs10.6-start»«MariaDB Community Server with ColumnStore 6»

### MariaDB Enterprise ColumnStore with Local Storage
---
~

- «slug:?columnstore»«deploy-single-node-enterprise-columnstore-es10.5-local-start»«MariaDB Enterprise ColumnStore 5 with Local Storage»

- «slug:?columnstore»«deploy-single-node-enterprise-columnstore-es10.6-local-start»«MariaDB Enterprise ColumnStore 22.08 with Local Storage»

For high availability and scalability, instead see "«slug:?columnstore»«deploy-columnstore-shared-local-storage-topology»«ColumnStore Shared Local Storage Topology»".

### MariaDB Enterprise ColumnStore with Object Storage
---
~

- «slug:?columnstore»«deploy-single-node-enterprise-columnstore-es10.5-object-start»«MariaDB Enterprise ColumnStore 5 with Object Storage»

- «slug:?columnstore»«deploy-single-node-enterprise-columnstore-es10.6-object-start»«MariaDB Enterprise ColumnStore 22.08 with Object Storage»

For high availability and scalability, instead see "«slug:?columnstore»«deploy-columnstore-object-storage-topology»«ColumnStore Object Storage Topology»".

### MariaDB Enterprise Server
---
~

- «slug:?server»«deploy-single-node-es10.2-start»«MariaDB Enterprise Server 10.2»

- «slug:?server»«deploy-single-node-es10.3-start»«MariaDB Enterprise Server 10.3»

- «slug:?server»«deploy-single-node-es10.4-start»«MariaDB Enterprise Server 10.4»

- «slug:?server»«deploy-single-node-es10.5-start»«MariaDB Enterprise Server 10.5»

- «slug:?server»«deploy-single-node-es10.6-start»«MariaDB Enterprise Server 10.6»

.. end-silo:: ======================================================================================

## Deployment Practices
---

* «slug»«deploy-best-practices»«Best Practices»

* «slug»«customer-download-token»«Customer Download Token»

* «slug»«deploy-sums-signatures»«Supply Chain Security»

## Deployment Methods
---

.. silo:: !columnstore =============================================================================

* «slug»«deployment-methods-binary-tarball»«Deploy from Binary Tarball»

.. end-silo:: ======================================================================================

* «slug»«deployment-methods-package-tarball»«Deploy from Package Tarball»

* «slug»«deployment-methods-repository»«Deploy from Repository (APT, YUM, ZYpp)»

* «slug»«deployment-methods-repository-mirror»«Deploy from Repository Mirror»

* «slug»«deployment-methods-docker»«Deploy with Docker»

* «slug»«deployment-methods-skysql»«Deploy in the cloud on MariaDB SkySQL DBaaS»

## Support
---

* «slug»«ent-support»«Obtaining support from MariaDB Corporation»

* «topic»«Compatibility»

.. toctree::
   :hidden:
   :glob:

   deploy/*
