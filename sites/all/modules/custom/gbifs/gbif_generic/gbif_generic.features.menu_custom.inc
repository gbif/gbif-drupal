<?php
/**
 * @file
 * gbif_generic.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gbif_generic_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-p16menu.
  $menus['menu-p16menu'] = array(
    'menu_name' => 'menu-p16menu',
    'title' => 'p16menu',
    'description' => 'Menu entities for use in the Portal 16 project.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu entities for use in the Portal 16 project.');
  t('p16menu');

  return $menus;
}
