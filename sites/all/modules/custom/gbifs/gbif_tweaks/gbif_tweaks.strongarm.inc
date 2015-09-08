<?php
/**
 * @file
 * gbif_tweakss.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_tweaks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_mmm_yyyy';
  $strongarm->value = 'M Y';
  $export['date_format_mmm_yyyy'] = $strongarm;

  return $export;
}
