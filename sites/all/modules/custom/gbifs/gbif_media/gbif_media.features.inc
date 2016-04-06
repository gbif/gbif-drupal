<?php
/**
 * @file
 * gbif_media.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function gbif_media_image_default_styles() {
  $styles = array();

  // Exported image style: masthead__mobile.
  $styles['masthead__mobile'] = array(
    'label' => 'Masthead mobile',
    'effects' => array(
      17 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 150,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: masthead__narrow.
  $styles['masthead__narrow'] = array(
    'label' => 'Masthead narrow',
    'effects' => array(
      18 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 180,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: masthead__normal.
  $styles['masthead__normal'] = array(
    'label' => 'Masthead normal',
    'effects' => array(
      19 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 200,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: masthead__wide.
  $styles['masthead__wide'] = array(
    'label' => 'Masthead wide',
    'effects' => array(
      20 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1040,
          'height' => 230,
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
