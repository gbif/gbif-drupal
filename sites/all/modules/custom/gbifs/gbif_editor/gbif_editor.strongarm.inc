<?php
/**
 * @file
 * gbif_editor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_editor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bueditor_roles';
  $strongarm->value = array(
    3 => array(
      'weight' => '0',
      'editor' => '0',
      'alt' => '0',
    ),
    8 => array(
      'weight' => '0',
      'editor' => '0',
      'alt' => '0',
    ),
    9 => array(
      'weight' => '0',
      'editor' => '0',
      'alt' => '0',
    ),
    7 => array(
      'weight' => '0',
      'editor' => '0',
      'alt' => '0',
    ),
    10 => array(
      'weight' => '0',
      'editor' => '5',
      'alt' => '0',
    ),
    5 => array(
      'weight' => '0',
      'editor' => '0',
      'alt' => '0',
    ),
    6 => array(
      'weight' => '0',
      'editor' => '0',
      'alt' => '0',
    ),
    2 => array(
      'editor' => '0',
      'alt' => '0',
      'weight' => 11,
    ),
    1 => array(
      'editor' => '0',
      'alt' => '0',
      'weight' => 12,
    ),
  );
  $export['bueditor_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_buttons';
  $strongarm->value = array(
    0 => '61',
    1 => '62',
    2 => '63',
    3 => '64',
    4 => '65',
    5 => '66',
    6 => '67',
    7 => '68',
    8 => '69',
    9 => '70',
    10 => '71',
    11 => '72',
    12 => '73',
    13 => '74',
    14 => '75',
    15 => '76',
    16 => '77',
    17 => '78',
    18 => '79',
    19 => '80',
  );
  $export['markdowneditor_buttons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_content_fprint';
  $strongarm->value = '14b520248d130d16919e396f611c8223';
  $export['markdowneditor_content_fprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_eid';
  $strongarm->value = '5';
  $export['markdowneditor_eid'] = $strongarm;

  return $export;
}
