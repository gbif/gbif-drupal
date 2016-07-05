#!/bin/bash
# This script assumes it's run from the site directory.

# Included in this script:
# 1) Include a new role called GBIFS Staff, which is for accessing internal views.
# 2) Events view to include the viewing role GBIFS Staff.
# 3) 
drush fr -y gbif_roles
drush fr -y gbif_event
