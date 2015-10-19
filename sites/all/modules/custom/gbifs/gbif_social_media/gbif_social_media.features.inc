<?php
/**
 * @file
 * gbif_social_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_social_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
