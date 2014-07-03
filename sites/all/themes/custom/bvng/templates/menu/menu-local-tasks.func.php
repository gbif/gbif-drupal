<?php
/**
 * @file
 * menu-local-tasks.func.php
 */

/**
 * Overrides theme_menu_local_tasks().
 */
function bvng_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<div class="navbar-rel">';
    $variables['primary']['#prefix'] .= '<ul class="contextual">';
    $variables['primary']['#suffix'] = '</ul>';
    $variables['primary']['#suffix'] .= '</div>';
    $output .= drupal_render($variables['primary']);
  }

  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs--secondary pagination pagination-sm">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}