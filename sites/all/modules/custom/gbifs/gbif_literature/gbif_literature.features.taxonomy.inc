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
