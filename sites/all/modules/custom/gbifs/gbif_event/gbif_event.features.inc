<?php
/**
 * @file
 * gbif_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_event_ctools_plugin_api() {
	list($module, $api) = func_get_args();
	if ($module == 'context' && $api == 'context') {
		return array('version' => 3);
	}
}