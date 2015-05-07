<?php
/**
 * @file legacy code for reference only.
 */

/* Disabled since we no longer need to sync from the FileMaker.
function gbif_resource_sync_ui($form, $form_state) {
	if (!empty($form_state['values']['cron_reset'])) {
		variable_set('gbif_ims_sync_next_execution', 0);
	}

	if (time() >= variable_get('gbif_ims_sync_next_execution', 0)) {
		return gbif_resource_sync();
	}
	else {
		$next_time = variable_get('gbif_ims_sync_next_execution');
		watchdog('gbif_resource', "Resource update didn't run because current interval is not expired yet. Next run is at %next.", array('%next' => date_iso8601($next_time)), WATCHDOG_INFO);
		return t("Resource update didn't run because current interval is not expired yet. Next run is at %next.", array('%next' => date_iso8601($next_time)));
	}
}
*/

/* Disabled since we no longer need to sync from the FileMaker.
function gbif_resource_sync() {
	$start_time = new DateTime();
	$sync_success = _gbif_resource_sync();
	$end_time = new DateTime();
	$time = $end_time->diff($start_time);
	$time_spent = "This task took ";
	if ($time->y > 0) {$time_spent .= $time->y.' years, ';}
	if ($time->m > 0) {$time_spent .= $time->m.' months, ';}
	if ($time->d > 0) {$time_spent .= $time->d.' days, ';}
	if ($time->h > 0) {$time_spent .= $time->h.' hours, ';}
	if ($time->i > 0) {$time_spent .= $time->i.' minutes, ';}
	if ($time->s > 0) {$time_spent .= $time->s.' seconds ';}
	$time_spent .= "to complete.";

	// Should examine the result before informing via the UI.
	if ($sync_success == TRUE) {
		watchdog('gbif_resource', 'Resource update executed at %time', array('%time' => date_iso8601(time(0))), WATCHDOG_INFO);
		$interval = variable_get('gbif_ims_sync_interval', 3 * 60 * 60);
		variable_set('gbif_ims_sync_next_execution', time() + $interval);
		return t('Synchronisation finished.') . ' ' . $time_spent;
	}
	else {
		watchdog('gbif_resource', 'IMS synchronisation failed at %time', array('%time' => date_iso8601(time(0))), WATCHDOG_CRITICAL);
		return t('Resource updated.') . ' ' . $time_spent;
	}
}
*/