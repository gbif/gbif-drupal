<?php
/**
 * @file
 * gbif_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gbif_project_taxonomy_default_vocabularies() {
  return array(
    'participant' => array(
      'name' => 'Participant',
      'machine_name' => 'participant',
      'description' => 'Terms that are synced with gbif_ims_participant table',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'regions' => array(
      'name' => 'Regions',
      'machine_name' => 'regions',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 5,
    ),
  );
}
