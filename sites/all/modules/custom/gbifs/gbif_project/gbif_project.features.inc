<?php
/**
 * @file
 * gbif_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gbif_project_node_info() {
  $items = array(
    'dir_organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('Organization entity to be synced with CRM.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
