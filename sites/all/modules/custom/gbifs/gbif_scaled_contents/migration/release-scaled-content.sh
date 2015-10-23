#!/bin/bash
STARTTIME=$(date +%s)

# Put this file under the site folder before running it.
# This is to ensure drush get the correct configuration.

drush features-revert -y gbif_vocabularies
drush en -y gbif_scaled_contents
drush features-revert -y gbif_data_use
drush en -y gbif_dataset
drush features-revert -y gbif_scaled_contents
drush features-revert -y gbif_social_media
drush features-revert -y gbif_project
drush features-revert -y gbif_roles
drush sc-migrate
drush dis -y gbif_legacy_news
drush pm-uninstall -y gbif_legacy_news

drush refresh-gbif-menus
drush cc all

ENDTIME=$(date +%s)
echo "It takes $(($ENDTIME - $STARTTIME)) seconds to complete this task."