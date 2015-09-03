<?php
/**
 * @file
 * gbif_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gbif_project_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gbif_project_image_default_styles() {
  $styles = array();

  // Exported image style: programme_image_for_landing_page.
  $styles['programme_image_for_landing_page'] = array(
    'label' => 'Programme image for landing page',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 878,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      12 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 876,
          'height' => 336,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: teaser_thumbmail.
  $styles['teaser_thumbmail'] = array(
    'label' => 'Teaser thumbmail',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 72,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      15 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 72,
          'height' => 72,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gbif_project_node_info() {
  $items = array(
    'call' => array(
      'name' => t('Call'),
      'base' => 'node_content',
      'description' => t('A call is an announcement of inviting proposals under a programme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dir_organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('Organization entity to be synced with the future directory.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'programme' => array(
      'name' => t('Programme'),
      'base' => 'node_content',
      'description' => t('The umbrella project to which projects belong. The landing page of this content type is implemented as a \'section\', therefore the programme title is positioned at the banner.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Project is under a programme and granted through a call.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
