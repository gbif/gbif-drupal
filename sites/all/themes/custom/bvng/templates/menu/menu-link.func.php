<?php
/**
 * @file
 * menu-link.func.php
 * 
 * This template controls the HTML of links at the 'link' level, before it's been wrapped with
 * <ul> and <li>.
 */

/**
 * Overrides theme_menu_link().
 */
function bvng_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
			// POR-2193 We want to keep the top-level menu items active.
			// And we don't want to break other dropdown behaviour.
			$top_menu_items = array('Data', 'News', 'Community', 'About');
			if (in_array($element['#title'], $top_menu_items)) {
				if (!in_array('active', $element['#attributes']['class'])) {
					$element['#attributes']['class'][] = 'active';
				}
			}
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }

  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
	// Top level menu items are always active.


  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  
  // If it's a separator, then we use Bootstrap divider.
	if ($element['#href'] == '<separator>') {
		$output = '';
		$element['#attributes']['class'][] = 'divider';
	}
	// If it's the search form, we insert the form here
	elseif ($element['#href'] == '<nolink>' && $element['#title'] == 'Search') {
		// ... unless we are on the front page; we later on delete it completely in menu-tree.func.php;
		if (drupal_is_front_page()) {
			$element['#title'] = ''; // but keep the actual <li>text</li> empty so that if someone changes the desc from CP at least we don't get stray text on FP!
			$output = l($element['#title'], $element['#href'], $element['#localized_options']);
		}
		else {
			// The search result page has a search form in banner, so we only put a place holder.
			$current_path = current_path();
			if (strpos($current_path, 'search') !== FALSE) {
				$output = '<div id="search-place-holder"></div>';
			}
			else {
				$output = '';
				$element['#attributes']['class'][] = 'search';
				$block = module_invoke('search', 'block_view');
				// Insert a class for search input so we can style it.
				// @todo Decide whether this should be implemented with hook_block_view_alter().
				$block['content']['search_block_form']['#attributes']['class'][] = 'nav_search_input';
				$block['content']['search_block_form']['#attributes']['placeholder'] = 'News and articles';
				$output = render($block['content']);
			}
		}
	}

	if (count($element['#attributes']['class']) == 0) {
		return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
	}

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Flatten footer links.
 */
function bvng_menu_link__footer_links(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    unset($element['#below']['#theme_wrappers']);
    $sub_menu = '<ul>' . drupal_render($element['#below']) . '</ul>';
    if (isset($element['#attributes']['class'])) {
      foreach ($element['#attributes']['class'] as $key => $class) {
        if ($class == 'expanded') {
          unset($element['#attributes']['class'][$key]);
        }
      }
    }
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  if ($element['#below']) {
    $output = '<h3>' . $output . '</h3>';
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}