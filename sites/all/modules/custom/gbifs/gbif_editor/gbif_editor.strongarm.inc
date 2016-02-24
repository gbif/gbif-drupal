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
    0 => '80',
    1 => '81',
    2 => '82',
    3 => '83',
    4 => '84',
    5 => '85',
    6 => '86',
    7 => '87',
    8 => '88',
    9 => '89',
    10 => '90',
    11 => '91',
    12 => '92',
    13 => '93',
    14 => '94',
    15 => '95',
    16 => '96',
    17 => '97',
    18 => '98',
    19 => '99',
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
  $strongarm->value = '6';
  $export['markdowneditor_eid'] = $strongarm;

  return $export;
}
