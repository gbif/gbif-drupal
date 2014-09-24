<?php
/**
 * @file
 * gbif_event.context.inc
 * @todo This file doesn't seem to be working.
 */

/**
 * Implements hook_context_default_contexts().
 */
function gbif_event_context_default_contexts() {
	$export = array();

	$context = new stdClass();
	$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
	$context->api_version = 3;
	$context->name = 'event_node_menu';
	$context->description = '';
	$context->tag = 'menu';
	$context->conditions = array(
		'node' => array(
			'values' => array(
				'event' => 'event',
			),
			'options' => array(
				'node_form' => '1',
			),
		),
	);
	$context->reactions = array(
		'menu' => array(
			0 => 'gbif-menu:newsroom/events/upcoming',
		),
	);
	$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
	t('menu');

	return $export;
}