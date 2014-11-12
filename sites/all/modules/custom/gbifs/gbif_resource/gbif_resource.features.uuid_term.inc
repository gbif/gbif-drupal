<?php
/**
 * @file
 * gbif_resource.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function gbif_resource_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Latin',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e84d8c4b-b534-4170-aa9a-fe2914d25154',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'la',
          'format' => NULL,
          'safe_value' => 'la',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Latina',
          'format' => NULL,
          'safe_value' => 'Latina',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
