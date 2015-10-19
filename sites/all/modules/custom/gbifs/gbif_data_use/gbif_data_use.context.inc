<?php
/**
 * @file
 * gbif_data_use.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gbif_data_use_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'data_use_node_menu';
  $context->description = '';
  $context->tag = 'menu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'data_use' => 'data_use',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'gbif-menu:newsroom/uses/summary',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('menu');
  $export['data_use_node_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'data_use_view_menu';
  $context->description = '';
  $context->tag = 'menu';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'data_use:page' => 'data_use:page',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'gbif-menu:newsroom/uses/summary',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('menu');
  $export['data_use_view_menu'] = $context;

  return $export;
}
