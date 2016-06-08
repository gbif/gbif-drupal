<?php
/**
 * @file
 * gbif_bibliography.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gbif_bibliography_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mendeley_id'.
  $field_bases['field_mendeley_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mendeley_id',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 108,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_mendeley_last_modified'.
  $field_bases['field_mendeley_last_modified'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mendeley_last_modified',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 'second',
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  return $field_bases;
}
