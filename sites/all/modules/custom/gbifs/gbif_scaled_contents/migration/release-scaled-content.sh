#!/bin/bash

# Put this file under the site folder before running it.
# This is to ensure drush get the correct configuration.

drush features-revert -y gbif_vocabularies
#drush -v eval "image_style_delete(image_style_load('featured'));"
#drush -v eval "image_style_delete(image_style_load('mainimage'));"
#drush -v eval "image_style_delete(image_style_load('rhimage'));"
#drush -v eval "image_style_delete(image_style_load('uses_of_data___main1'));"
#drush image-flush --all
drush en -y gbif_scaled_contents
drush vdel gbif_subject_definition
drush features-revert -y gbif_data_use
#drush en -y gbif_dataset
drush features-revert -y gbif_scaled_contents
drush features-revert -y gbif_social_media
drush sc-migrate
#drush dis -y gbif_legacy_news
#drush pm-uninstall -y gbif_legacy_news
drush refresh-gbif-menus

# taxonomy terms migration

# field deletions
# drush field-delete field_rhimage
# drush field-delete field_audiovideo
# drush field-delete field_publication
# drush field-delete field_opportunities
# drush field-delete field_topimage
# drush field-delete field_training

# taxonomy terms deletion
# taxonomy vocabularies deletion
# drush -v eval 'foreach(taxonomy_get_tree(22) as $term) { taxonomy_term_delete($term->tid); }'