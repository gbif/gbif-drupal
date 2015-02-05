#!/bin/bash

echo -e "\nDeleting all resource_ims contents...\n"
drush en -y delete_all
drush delete-all resource_ims
drush delete-all baremetal
drush dis -y delete_all
drush pm-uninstall -y delete_all
drush eval "field_purge_batch(500)"
drush eval "field_purge_batch(500)"
drush eval "node_type_delete('resource_ims')"
drush eval "node_type_delete('baremetal')"

drush dis -y gbifims
drush pm-uninstall -y gbifims

drush dis -y gbifims_import
drush pm-uninstall -y gbifims_import

drush dis -y gfxr
drush pm-uninstall -y gfxr

drush dis -y menu_position
drush pm-uninstall -y menu_position

drush dis -y gbif_role
drush pm-uninstall -y gbif_role
drush en -y gbif_roles

echo -e "\nCleaning orc files...\n"
rm -rf files/orc
rm -rf files/orc_temp
rm -rf files/orc2013-September
rm -rf files/temp
rm -rf files/u5
echo -e "\nDeleting old main-menu items...\n"
drush delete-menu-items

echo -e "\nRefreshing menu...\n"
drush devel-reinstall -y gbif_navigation

drush cc all

drush dis -y devel
drush pm-uninstall -y devel

# run before exporting the feature
# drush -v eval 'foreach(taxonomy_get_tree(36) as $term) { taxonomy_term_delete($term->tid); }'