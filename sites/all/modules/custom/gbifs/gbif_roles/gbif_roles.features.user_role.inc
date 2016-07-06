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

  // Exported role: Code editor.
  $roles['Code editor'] = array(
    'name' => 'Code editor',
    'weight' => 5,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: GBIFS Staff.
  $roles['GBIFS Staff'] = array(
    'name' => 'GBIFS Staff',
    'weight' => 7,
  );

  // Exported role: Office admin.
  $roles['Office admin'] = array(
    'name' => 'Office admin',
    'weight' => 6,
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => 3,
  );

  // Exported role: REGISTRY_ADMIN.
  $roles['REGISTRY_ADMIN'] = array(
    'name' => 'REGISTRY_ADMIN',
    'weight' => 9,
  );

  // Exported role: REGISTRY_EDITOR.
  $roles['REGISTRY_EDITOR'] = array(
    'name' => 'REGISTRY_EDITOR',
    'weight' => 10,
  );

  // Exported role: TDWG DQIG.
  $roles['TDWG DQIG'] = array(
    'name' => 'TDWG DQIG',
    'weight' => 8,
  );

  return $roles;
}
