<?php
/**
 * @file
 * gbif_vocabularies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_vocabularies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
