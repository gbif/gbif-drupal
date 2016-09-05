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
  return array(
    'api' => '3.0',
    'template path' => drupal_get_path('module', 'gbif_project' . '/theme'),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function gbif_project_image_default_styles() {
  $styles = array();

  // Exported image style: focal_point_for_projects.
  $styles['focal_point_for_projects (drupal)'] = array(
    'label' => 'Focal point for projects',
    'effects' => array(
      11 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 602,
          'height' => 388,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: funder_image.
  $styles['funder_image'] = array(
    'label' => 'Funder image (drupal)',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      12 => array(
        'name' => 'image_style_quality',
        'data' => array(
          'quality' => 95,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: programme_image_for_landing_page.
  $styles['programme_image_for_landing_page'] = array(
    'label' => 'Programme image for landing page (drupal)',
    'effects' => array(
      13 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 876,
          'height' => 336,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: teaser_thumbmail.
  $styles['teaser_thumbmail (drupal)'] = array(
    'label' => 'Teaser thumbmail',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      13 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
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
      'name' => t('Call (CE support)'),
      'base' => 'node_content',
      'description' => t('A call is an announcement of inviting proposals under a programme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dir_organization' => array(
      'name' => t('Organization (CE support)'),
      'base' => 'node_content',
      'description' => t('Organization entity serve as an interim option for displaying funding statements and it\'s logo. This is to be synced with the future directory.'),
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
