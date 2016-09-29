<?php
/**
 * @file
 * gbif_generic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gbif_generic_taxonomy_default_vocabularies() {
  return array(
    'render_options' => array(
      'name' => 'Rendering options',
      'machine_name' => 'render_options',
      'description' => 'For use by generic content type to indicate the type of template for rendering.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
