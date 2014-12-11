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
    'name' => 'Data users',
    'description' => 'Data users Including potential data users',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fb30fc1b-aca2-4833-b96d-92da18e605b2',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 197,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
