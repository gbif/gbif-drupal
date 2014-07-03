<?php
/**
 * @file
 * gbif_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gbif_pages_views_default_views() {

  $views = array();
  
  /* Register the view in gbif_pages_views_register().
   */
  $views_list = gbif_pages_views_register();
  
  /* Put the view in a file named gbif_pages.view.[$view->name].inc
   * in the same folder containing this file. Name the function as
   * gbif_pages_view_[$view->name]().
   */
  
  // Import the views from corresponding files.
  foreach ($views_list as $view_name) {
    module_load_include('inc', 'gbif_pages', 'views/gbif_pages.view.' . $view_name);
    $function = 'gbif_pages_view_' . $view_name;
    $view = $function();
    $views[$view_name] = $view;
  }
  
  return $views;
  
}
