<?php
/**
 * @file
 * gbif_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
