<?php
/**
 * @file
 * gbif_maintenance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gbif_maintenance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_default_state';
  $strongarm->value = 'on';
  $export['nicemessages_default_state'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_error_glue';
  $strongarm->value = 'after';
  $export['nicemessages_error_glue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_error_life';
  $strongarm->value = '6';
  $export['nicemessages_error_life'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_error_speed';
  $strongarm->value = 'slow';
  $export['nicemessages_error_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_pages';
  $strongarm->value = '0';
  $export['nicemessages_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_paths';
  $strongarm->value = 'admin/*';
  $export['nicemessages_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_position';
  $strongarm->value = 'top-right';
  $export['nicemessages_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_shadows';
  $strongarm->value = 1;
  $export['nicemessages_shadows'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_status_glue';
  $strongarm->value = 'after';
  $export['nicemessages_status_glue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_status_life';
  $strongarm->value = '10';
  $export['nicemessages_status_life'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_status_speed';
  $strongarm->value = 'slow';
  $export['nicemessages_status_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_style';
  $strongarm->value = 'nicemessages_drupal.css';
  $export['nicemessages_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_warning_glue';
  $strongarm->value = 'after';
  $export['nicemessages_warning_glue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_warning_life';
  $strongarm->value = '30';
  $export['nicemessages_warning_life'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nicemessages_warning_speed';
  $strongarm->value = 'slow';
  $export['nicemessages_warning_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduled_maintenance_message';
  $strongarm->value = '';
  $export['scheduled_maintenance_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduled_maintenance_message_learn_more_link';
  $strongarm->value = '';
  $export['scheduled_maintenance_message_learn_more_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduled_maintenance_message_offset_unit';
  $strongarm->value = 'days';
  $export['scheduled_maintenance_message_offset_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduled_maintenance_message_offset_value';
  $strongarm->value = '7';
  $export['scheduled_maintenance_message_offset_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduled_maintenance_time';
  $strongarm->value = '';
  $export['scheduled_maintenance_time'] = $strongarm;

  return $export;
}
