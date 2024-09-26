.. Copyright (C) 2019 - 2023 MariaDB plc. All rights reserved.
   ID: 2V0NGSTRVHDZ8LQ

.. page::
   :silos: columnstore, server, xpand

.. meta::
   :description: Guide to downloading, installing, and configuring MariaDB Enterprise Server.
   :xforumcat: Documentation

.. _deploy-best-practices-production-controls:

# Best Practices - Production Controls
---
~ Production Controls

## Dedicated Servers
---

Database servers exist to run database server software. Database servers should not also run web server software, act as a file server, or run other workloads.

Understand workload and data isolation requirements before server deployment. Isolation requirements are often defined through business requirements, including:

* Data and application security requirements that trigger isolation of one workload from other workloads.

* Separation of Development and Testing environments from Production environments.

## Production Controls
---

Understand control requirements before server deployment, including records of control implementation needed to support audits.

Control requirements typically follow data:

* Both production and non-production systems may require production-level controls based on the presence of data subject to control.

* Database servers, backup servers, and other systems may require production-level controls based on the presence of data subject to control.

