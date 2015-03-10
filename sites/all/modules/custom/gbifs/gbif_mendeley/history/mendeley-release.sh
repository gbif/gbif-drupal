#!/bin/bash

drush dis -y npt_mendeley
drush pm-uninstall -y npt_mendeley
drush dis -y npt_constants
drush pm-uninstall -y npt_constants
sudo -u apache drush en -y gbif_mendeley
drush en -y devel
drush devel-reinstall -y gbif_navigation
drush dis -y devel
drush pm-uninstall -y devel