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

  // Exported image style: prose_image_for_desktop.
  $styles['prose_image_for_desktop'] = array(
    'label' => 'Prose image for desktop (express)',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 422,
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
