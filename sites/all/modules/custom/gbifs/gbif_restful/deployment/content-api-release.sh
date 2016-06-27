#!/bin/bash
# This script assumes it's run from the site directory.

# Applying the patch for entity module. See https://www.drupal.org/node/2086225#comment-9627407
#cd ../all/modules/contrib/entity
#patch -p1 < ../../../../../patches/2086225-entity-access-check-18.patch
#cd ../../../../default
drush en -y gbif_media
drush en -y restful
drush en -y gbif_restful
drush en -y restful_search_api
drush en -y gbif_restful_search
drush sapi-i node_index

# Setting up sitemap
#sudo -u _www drush en -y xmlsitemap xmlsitemap_node xmlsitemap_menu
# To enable for i18n
#drush en -y xmlsitemap_i18n