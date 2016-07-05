#!/bin/bash
# This script assumes it's run from the site directory.

# Included in this script:
# 1) Include a new role called GBIFS Staff, which is for accessing internal views.
# 2) Events view to include the viewing role GBIFS Staff.
# 3) Featured search terms for all content types (gbif_participant should be manually done).

drush fr -y gbif_roles
drush fr -y gbif_vocabularies
drush fr -y gbif_maintenance
drush fr -y gbif_event
drush fr -y gbif_scaled_contents
drush fr -y gbif_pages
drush fr -y gbif_dataset
drush fr -y gbif_data_use
drush fr -y gbif_project
drush fr -y gbif_resource
