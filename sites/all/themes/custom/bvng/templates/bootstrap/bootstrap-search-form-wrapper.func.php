<?php
/**
 * @file
 * bootstrap-search-form-wrapper.func.php
 */

/**
 * Theme function implementation for bootstrap_search_form_wrapper.
 */
function bvng_bootstrap_search_form_wrapper($variables) {
  $output = '';
	
	$output .= '<div class="input-group">';
  $output .= $variables['element']['#children'];
  
  // We don't want to show the search button, assuming
  // visitors have access to a keyboard. This however has concerns
  // for mobile devices but we'll live with it as per POR-1890.
  /* 
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-default">';
  // We can be sure that the font icons exist in CDN.
  if (theme_get_setting('bootstrap_cdn')) {
    $output .= _bootstrap_icon('search');
  }
  else {
    $output .= t('Search');
  }
  $output .= '</button>';
  $output .= '</span>';
  */

  // We'd like to add a glyphicon here.
  $output .= '<span class="glyphicon glyphicon-search bring-forward"></span>';

  $output .= '</div>';
  return $output;
}
