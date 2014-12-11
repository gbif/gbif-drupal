<?php
/**
 * @file
 * gbif_resource.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gbif_resource_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_node_menu';
  $context->description = 'Set highlighted menu tab for resource page.';
  $context->tag = 'menu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'gbif-menu:resources/summary',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Set highlighted menu tab for resource page.');
  t('menu');
  $export['resource_node_menu'] = $context;

  return $export;
}
