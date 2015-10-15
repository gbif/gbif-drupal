<?php
/**
 * @file
 * gbif_scaled_contents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_scaled_contents_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gbif_scaled_contents_image_default_styles() {
  $styles = array();

  // Exported image style: featured.
  $styles['featured'] = array(
    'label' => 'Featured block image',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 273,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 271,
          'height' => 171,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: focal_point_for_news.
  $styles['focal_point_for_news'] = array(
    'label' => 'Focal point for news',
    'effects' => array(
      11 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 602,
          'height' => 338,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gbif_scaled_contents_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('The news content type as part of the new content publication workflow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
