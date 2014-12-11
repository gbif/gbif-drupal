<?php
/**
 * @file
 * gbif_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gbif_roles_user_default_roles() {
  $roles = array();

  // Exported role: Editors.
  $roles['Editors'] = array(
    'name' => 'Editors',
    'weight' => 3,
  );

  // Exported role: REGISTRY_ADMIN.
  $roles['REGISTRY_ADMIN'] = array(
    'name' => 'REGISTRY_ADMIN',
    'weight' => 4,
  );

  // Exported role: REGISTRY_EDITOR.
  $roles['REGISTRY_EDITOR'] = array(
    'name' => 'REGISTRY_EDITOR',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
