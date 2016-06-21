<?php

/**
 * @file
 * Theme the more link.
 *
 * - $view: The view object.
 * - $more_url: the url for the more link.
 * - $link_text: the text for the more link.
 *
 * @ingroup views_templates
 */

if ($view->name == 'related_projects' && $view->current_display == 'related_projects') {
  switch ($view->args[0]) {
    case '82243':
      $more_url = '/programme/bid/all-projects';
      break;
    case '82629':
      $more_url = '/programme/bifa/all-projects';
      break;
    case '82219':
      $more_url = '/programme/cesp/all-projects';
      break;
  }
}

?>
<div class="more-link">
  <a href="<?php print $more_url ?>">
    <?php print $link_text; ?>
  </a>
</div>
