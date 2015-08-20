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

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: REGISTRY_ADMIN.
  $roles['REGISTRY_ADMIN'] = array(
    'name' => 'REGISTRY_ADMIN',
    'weight' => 6,
  );

  // Exported role: REGISTRY_EDITOR.
  $roles['REGISTRY_EDITOR'] = array(
    'name' => 'REGISTRY_EDITOR',
    'weight' => 7,
  );

  // Exported role: TDWG DQIG.
  $roles['TDWG DQIG'] = array(
    'name' => 'TDWG DQIG',
    'weight' => 5,
  );

  return $roles;
}
