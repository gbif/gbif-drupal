<?php
/**
 * @file
 * gbif_participant.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_participant_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
