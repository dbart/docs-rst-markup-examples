.. Copyright (C) 2019 - 2023 MariaDB plc. All rights reserved.
   ID: 9K9W3QTL9PL0WZZ

.. page::
   :silos: columnstore, server, xpand

.. meta::
   :description: Guide to downloading, installing, and configuring MariaDB Enterprise Server.
   :xforumcat: Documentation

.. _deploy-best-practices-testing:

# Best Practices - Testing
---
~ Testing

Servers should be validated before exposure to production workloads and production data.

It may be appropriate to prevent access to an unconfigured server until configured and validated. Load balancer configuration, firewall rules, or database server configuration are often used to prevent unintended traffic to new servers.

Details assessed during Pre-Production validation can include:

* Server capacity, including performance of disk systems

* Server security configuration and hardening

* Tuning for initial data load vs production workloads

* Alignment to business requirements

