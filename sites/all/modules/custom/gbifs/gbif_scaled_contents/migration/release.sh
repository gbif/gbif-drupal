#!/bin/bash

# Put this file under the site folder to ensure drush get the correct configuration.

drush features-revert -y gbif_vocabularies
drush en -y gbif_scaled_contents
drush features-revert -y gbif_scaled_contents

# taxonomy terms migration

# field deletions
drush field-delete field_rhimage
drush field-delete field_audiovideo
drush field-delete field_publication
drush field-delete field_opportunities
drush field-delete field_topimage
drush field-delete field_training

# taxonomy terms deletion
# taxonomy vocabularies deletion
drush -v eval 'foreach(taxonomy_get_tree(22) as $term) { taxonomy_term_delete($term->tid); }'