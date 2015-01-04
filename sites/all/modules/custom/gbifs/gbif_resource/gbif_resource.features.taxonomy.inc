<?php
/**
 * @file
 * gbif_resource.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gbif_resource_taxonomy_default_vocabularies() {
  return array(
    'data_type' => array(
      'name' => 'Data type',
      'machine_name' => 'data_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'language' => array(
      'name' => 'Language',
      'machine_name' => 'language',
      'description' => 'Language of the content presented by the entity, different from the system locale of the entity.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
    'purpose' => array(
      'name' => 'Purpose',
      'machine_name' => 'purpose',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
    ),
    'resource_type' => array(
      'name' => 'Resource type',
      'machine_name' => 'resource_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
    ),
    'term_attribute' => array(
      'name' => 'Term attribute',
      'machine_name' => 'term_attribute',
      'description' => 'Terms in this vocabulary is used to attribute terms in the "tags" vocabulary.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
