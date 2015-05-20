<?php
/**
 * @file
 * gbif_legacy_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gbif_legacy_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_node_menu';
  $context->description = '';
  $context->tag = 'menu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'newsarticle' => 'newsarticle',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'gbif-menu:newsroom/news',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('menu');
  $export['news_node_menu'] = $context;

  return $export;
}
