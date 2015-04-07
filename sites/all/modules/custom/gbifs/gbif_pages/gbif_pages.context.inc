<?php
/**
 * @file
 * gbif_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gbif_pages_context_default_contexts() {
	$export = array();

	$context = new stdClass();
	$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
	$context->api_version = 3;
	$context->name = 'jobs_menu';
	$context->description = '';
	$context->tag = 'menu';
	$context->conditions = array(
		'path' => array(
			'values' => array(
				'jobs/*' => 'jobs/*',
			),
		),
	);
	$context->reactions = array(
		'menu' => array(
			0 => 'gbif-menu:node/242',
		),
	);
	$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
	t('menu');
	$export['jobs_menu'] = $context;

	return $export;
}
