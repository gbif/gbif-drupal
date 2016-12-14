<?php
/**
 * @file
 * gbif_literature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gbif_literature_taxonomy_default_vocabularies() {
  return array(
    'gbif_literature_annotation' => array(
      'name' => 'GBIF Literature Annotation',
      'machine_name' => 'gbif_literature_annotation',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'keywords' => array(
      'name' => 'Keywords',
      'machine_name' => 'keywords',
      'description' => 'Keywords of Mendeley literature',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
