<?php
/**
 * @file
 * gbif_generic.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function gbif_generic_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Legacy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '41866bd7-3a08-452f-a200-f9a342a7d16e',
    'vocabulary_machine_name' => 'render_options',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Data publishing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd85b6921-6559-43b4-b76e-6b54d72bcd67',
    'vocabulary_machine_name' => 'render_options',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  return $terms;
}
