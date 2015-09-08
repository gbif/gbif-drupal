<?php
/**
 * @file
 * gbif_tweaks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_tweaks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
