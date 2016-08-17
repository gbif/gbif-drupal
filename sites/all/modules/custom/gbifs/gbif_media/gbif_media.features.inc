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

  // Exported image style: masthead__desktop.
  $styles['masthead__desktop'] = array(
    'label' => 'Masthead desktop',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1250,
          'height' => 275,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: masthead__laptop.
  $styles['masthead__laptop'] = array(
    'label' => 'Masthead laptop',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 910,
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

  // Exported image style: masthead__tablet.
  $styles['masthead__tablet'] = array(
    'label' => 'Masthead tablet',
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

  // Exported image style: prose_image_for_desktop.
  $styles['prose_image_for_desktop'] = array(
    'label' => 'Prose image for desktop',
    'effects' => array(
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 965,
          'height' => 400,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar_thumbnail.
  $styles['sidebar_thumbnail'] = array(
    'label' => 'Sidebar thumbnail',
    'effects' => array(
      11 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 199,
          'height' => 112,
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
