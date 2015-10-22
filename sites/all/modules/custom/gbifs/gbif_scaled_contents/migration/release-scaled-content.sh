#!/bin/bash

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

# field deletions
drush field-delete -y field_rhimage
drush field-delete -y field_audiovideo
drush field-delete -y field_publication
drush field-delete -y field_opportunities
drush field-delete -y field_topimage
drush field-delete -y field_training

drush -v eval "image_style_delete(image_style_load('featured'));"
drush -v eval "image_style_delete(image_style_load('mainimage'));"
drush -v eval "image_style_delete(image_style_load('rhimage'));"
drush -v eval "image_style_delete(image_style_load('uses_of_data___main1'));"
drush image-flush --all


# taxonomy terms deletion
drush -v eval 'foreach(taxonomy_get_tree(15) as $term) { taxonomy_term_delete($term->tid); }'
drush -v eval 'foreach(taxonomy_get_tree(16) as $term) { taxonomy_term_delete($term->tid); }'
drush -v eval 'foreach(taxonomy_get_tree(21) as $term) { taxonomy_term_delete($term->tid); }'
drush -v eval 'foreach(taxonomy_get_tree(22) as $term) { taxonomy_term_delete($term->tid); }'
drush -v eval 'foreach(taxonomy_get_tree(30) as $term) { taxonomy_term_delete($term->tid); }'
# taxonomy vocabularies deletion
drush -v eval 'taxonomy_vocabulary_delete(15);'
drush -v eval 'taxonomy_vocabulary_delete(16);'
drush -v eval 'taxonomy_vocabulary_delete(21);'
drush -v eval 'taxonomy_vocabulary_delete(22);'
drush -v eval 'taxonomy_vocabulary_delete(30);'

drush refresh-gbif-menus
drush cron
drush cc all
