#!/bin/bash
STARTTIME=$(date +%s)

drush en -y twitter twitter_post
drush en -y fb_autopost_entity fb_permissions fb_autopost_types
drush fr -y gbif_scaled_contents
drush fr -y gbif_data_use
drush fr -y gbif_dataset
drush fr -y gbif_social_media

# field deletions
drush field-delete field_content_tweet
drush field-delete field_content_facebook

ENDTIME=$(date +%s)
echo "It takes $(($ENDTIME - $STARTTIME)) seconds to complete this task."