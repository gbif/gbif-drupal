<?php
/**
 * @file
 * block.vars.php
 */

/**
 * Implements hook_preprocess_block().
 */
function bvng_preprocess_block(&$variables) {
  // Use a bare template for the page's main content.
  if ($variables['block_html_id'] == 'block-system-main') {
    $variables['theme_hook_suggestions'][] = 'block__no_wrapper';
  }
  $variables['title_attributes_array']['class'][] = 'block-title';

  $current_path = current_path();

  // Preprocess for system main block.
  if ($variables['block']->module == 'system' && $variables['block']->delta == 'main') {

    // Use our own template for generic taxonomy term page.
    if (strpos($current_path, 'taxonomy/term') !== FALSE) {
      array_push($variables['theme_hook_suggestions'], 'block__system__main__taxonomy' . '__generic');
      // Add RSS feed icon.
      $alt = _bvng_get_title_data($count = NULL);
      $icon = theme_image(array(
        'path' => drupal_get_path('theme', 'bvng') . '/images/rss-feed.gif',
        'width' => 28,
        'height' => 28,
        'alt' => (isset($alt['title'])) ? $alt['title'] : '',
        'title' => t('Subscribe to this list'),
        'attributes' => array(),
      ));
      $icon = l($icon, $current_path . '/feed', array('html' => TRUE));
      $variables['elements']['#block']->icon = $icon;

      // Set title of the main block according to the number of node items.
      if (isset($variables['elements']['nodes'])) {
        $node_count = _bvng_node_count($variables['elements']['nodes']);
        $block_title = format_plural($node_count,
          'Displaying 1 item',
          'Displaying @count items',
          array());
        $variables['elements']['#block']->title = $block_title;
      }
    }

    // If it's 404 not found.
    $status = drupal_get_http_header("status");
    if ($status == '404 Not Found') {
      array_push($variables['theme_hook_suggestions'], 'block__system__main__404');
      $suggested_text = '';
      $suggested_text .= '<p>' . t('We are sorry for the inconvenience.') . '</p>';
      $suggested_text .= '<p>' . t('Did you try searching? Use the search field at the top-right of this page.') . '</p>';
      $suggested_text .= '<p>' . t('You may be following an out-dated link based on GBIF’s previous portal. Please use the "Feedback" button to let us know what you are looking for. Thank you.') . '</p>';
      $variables['content'] = $suggested_text;

    }
  }
}

/**
 * Implements hook_process_block().
 */
function bvng_process_block(&$variables) {
  // Drupal 7 should use a $title variable instead of $block->subject.
  $variables['title'] = $variables['block']->subject;
}
