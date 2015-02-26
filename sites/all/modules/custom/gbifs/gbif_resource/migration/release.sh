#!/bin/bash

drush en -y devel
drush -y dis gbif_resource
drush -y pm-uninstall gbif_resource
drush devel-reinstall -y gbif_vocabularies
drush devel-reinstall -y gbif_ims

echo -e "\nSynchronising IMS base tables...\n"
drush gbif-ims-sync

drush en -y gbif_resource
echo -e "\nSynchronising resources from IMS base tables...\n"
drush resource-sync

echo -e "\nIndexing resources...\n"
#drush search-api-set-index-server resource_index mysql
#drush search-api-enable resource_index
drush sapi-i resource_index

echo -e "\nDeleting unused default index...\n"
drush eval "search_api_index_delete('default_node_index')"

echo -e "\nDeleting unused taxaNavigation item...\n"
drush eval "taxonomy_term_delete(764)"

echo -e "\nRefreshing menu...\n"
drush devel-reinstall -y gbif_navigation

drush fr gbif_social_media --force -y
drush fr gbif_resource.fe_block_settings --force -y