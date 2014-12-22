<?php
/**
 * @file
 * gbif_vocabularies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gbif_vocabularies_taxonomy_default_vocabularies() {
  return array(
    'about_gbif' => array(
      'name' => 'About GBIF',
      'machine_name' => 'about_gbif',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
    'audience' => array(
      'name' => 'Audience',
      'machine_name' => 'audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'capacity_enhancement' => array(
      'name' => 'Capacity enhancement',
      'machine_name' => 'capacity_enhancement',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
    'data_type' => array(
      'name' => 'Data type',
      'machine_name' => 'data_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'data_use' => array(
      'name' => 'Data use',
      'machine_name' => 'data_use',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'informatics' => array(
      'name' => 'Informatics',
      'machine_name' => 'informatics',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
    'internal_tags' => array(
      'name' => 'Internal Tags',
      'machine_name' => 'internal_tags',
      'description' => 'Tags derived from keywords of the FileMaker IMS.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
    'topic' => array(
      'name' => 'Topic',
      'machine_name' => 'topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
  );
}
