<?php

/**
 * @file
 * template.php
 * @see https://drupal.org/node/2217037 The fixed in included in the dev branch
 *      so we can avoid the include lines in this template.
 */
include_once('templates/menu/menu-local-tasks.func.php');
include_once('templates/menu/menu-local-task.func.php');
include_once('templates/menu/menu-tree.func.php');
include_once('templates/menu/menu-link.func.php');
include_once('templates/bootstrap/bootstrap-search-form-wrapper.func.php');
include_once('templates/system/status-messages.func.php');
include_once('templates/system/button.func.php');

/**
 * Implements hook_theme().
 * @see http://www.danpros.com/2013/01/creating-custom-user-login-page-in.html
 */
function bvng_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
    'render element' => 'form',
    'template' => 'templates/system/user-login',
    'preprocess functions' => array(
      'bvng_preprocess_user_login'
    ),
  );
  $items['user_register_form'] = array(
    'render element' => 'form',
    'template' => 'templates/system/user-register',
    'preprocess functions' => array(
      'bvng_preprocess_user_register_form',
    ),
  );
  $items['user_profile_form'] = array(
    'render element' => 'form',
    'template' => 'templates/system/user-profile-edit',
  );
  $items['user_pass'] = array(
    'render element' => 'form',
    'template' => 'templates/system/user-password',
		'preprocess function' => array(
			'bvng_preprocess_user_pass',
		),
  );
  return $items;
}

/**
 * Implements template_preprocess().
 */
function bvng_preprocess(&$variables, $hook) {
	// Make the environmental settings available to the theming layer and javascript.
	$env = variable_get('environment_settings');
	$variables['data_portal_base_url'] = $env['data_portal_base_url'];
	$variables['gbif_api_base_url'] = $env['gbif_api_base_url'];
	$variables['gbif_api_version'] = $env['gbif_api_version'];
	drupal_add_js(array('environment_settings' => $env), 'setting');

	/* The $current_path will change after setting active menu item,
	 * therefore a requested_path value is inserted to content region
	 * for regional processing.
	 */
  $current_path = current_path();
  $variables['current_path'] = $current_path;

	switch ($hook) {
  	case 'page':
  		if ($variables['page']['content']) {
  			$req_path = current_path();
  			$variables['page']['content']['requested_path'] = $req_path;
  			if (isset($variables['page']['content']['system_main']['nodes'])) {
  				$nodes = &$variables['page']['content']['system_main']['nodes'];
  				foreach ($nodes as $nid => $node) {
  					if (is_int($nid)) {
  						$node['#node']->requested_path= $req_path;
  					}
  				}
  			}
  			if (isset($variables['page']['content']['system_main']['#block'])) {
  				$block = &$variables['page']['content']['system_main']['#block'];
  				if ($block->module == 'system' && $block->delta == 'main') {
  					$block->requested_path = $req_path;
  				}
  			}
  			if (isset($variables['node'])) {
    			$variables['node']->requested_path = $req_path;
  			}
				if (isset($variables['page']['account'])) {
					$variables['page']['account']['req_path'] = $req_path;
				}
  		}
  		break;
  	case 'region':
  		switch ($variables['region']) {
  			case 'content':
  				break;
  		}
  		break;
	}
}

/**
 * Implements template_preprocess_html().
 */
function bvng_preprocess_html(&$variables) {
	if (drupal_is_front_page()) {
		$variables['head_title'] = t('Free and Open Access to Biodiversity Data | GBIF.ORG');
	}
  drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/contacts.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_css(libraries_get_path('leaflet') . '/leaflet.css', array('type' => 'file', 'scope' => 'header'));
}


/**
 * Implements template_preprocess_page().
 *
 * @see gbif_navigation_node_view().
 * @see http://www.dibe.gr/blog/set-path-determining-active-trail-drupal-7-menu
 * @see https://drupal.org/node/1292590 for setting active user menu.
 */
function bvng_preprocess_page(&$variables) {
	$req_path = $variables['page']['content']['requested_path'];
	$altered_path = FALSE ;

	if (!empty($variables['node']->type)) {
		switch ($variables['node']->type) {
			case 'newsarticle':
				$altered_path = drupal_get_normal_path('newsroom/news'); // taxonomy/term/566
				$variables['node']->type_title = t('GBIF News');
				break;
			case 'usesofdata':
				$altered_path = drupal_get_normal_path('newsroom/uses'); // taxonomy/term/567
				$variables['node']->type_title = t('Featured Data Use');
				break;
			case 'event_ims':
				$altered_path = drupal_get_normal_path('newsroom/events'); // taxonomy/term/569
				$variables['node']->type_title = t('Event Details');
				break;
			case 'resource_ims':
				$altered_path = drupal_get_normal_path('resources/summary'); // taxonomy/term/569
				$variables['node']->type_title = t('Resource Details');
				break;
			case 'generictemplate':
        if (drupal_match_path($req_path, 'node/241')) $altered_path = 'user';
			  break;
		}
	}
	elseif (strpos($req_path, 'allnewsarticles') !== FALSE) {
		$altered_path = drupal_get_normal_path('newsroom/news'); // taxonomy/term/566
	}
	elseif (strpos($req_path, 'alldatausearticles') !== FALSE) {
		$altered_path = drupal_get_normal_path('newsroom/uses'); // taxonomy/term/567
	}
	elseif (strpos($req_path, 'resources') !== FALSE) {
		$altered_path = drupal_get_normal_path('resources/summary'); // taxonomy/term/764
	}
	elseif (strpos($req_path, 'events') !== FALSE) {
		$altered_path = drupal_get_normal_path('newsroom/events'); // taxonomy/term/569
	}
	elseif (drupal_match_path($req_path, 'user') || drupal_match_path($req_path, 'user/*')) {
		$altered_path = 'user';
	}
	elseif (strpos($req_path, 'mendeley') !== FALSE) {
		$altered_path = drupal_get_normal_path('mendeley');
	}

	if ($altered_path) {
		if ($altered_path != 'user' ) {
			menu_tree_set_path('gbif-menu', $altered_path); // can't use menu_tree_set_path for user, it'll mess the tabs.
		}
		menu_set_active_item($altered_path);
	}
	else {
		$active_path = menu_tree_get_path('gbif-menu');
		menu_tree_set_path('gbif-menu', $active_path);
		menu_set_active_item($req_path);
	}

  if (isset($variables['page']['content']['system_main']['nodes'])) {
  	$node_count = _bvng_node_count($variables['page']['content']['system_main']['nodes']);
  }
  else {
  	$node_count = NULL;
  }
  $variables['page']['highlighted_title'] = _bvng_get_title_data($node_count, $variables['user'], $req_path);

  // Manually set page title.
  if ($req_path == 'taxonomy/term/565') {
    drupal_set_title(t('GBIF Newsroom'));
  }

	// Relocate the search form to region 'highlighted'.
	if (isset($variables['page']['content']['system_main']['search_form'])) {
		unset($variables['page']['content']['system_main']['search_form']['advanced']);
		$search_form = $variables['page']['content']['system_main']['search_form'];
		$search_form['#attributes']['class'][] = 'banner_search_input';
		$variables['page']['highlighted'][] = $search_form;
		unset($variables['page']['content']['system_main']['search_form']);
	}

  // Load javascript only when needed.
  switch ($req_path) {
	 	case 'node/223': // contact/directoryofcontacts
			drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/contacts.js', array('type' => 'file', 'scope' => 'footer'));
			break;
  }

	if (drupal_is_front_page()) {
		drupal_add_js(libraries_get_path('leaflet') . '/leaflet.js', array('type' => 'file', 'scope' => 'footer','weight' => 10));
		drupal_add_js(libraries_get_path('moment') . '/moment.js', array('type' => 'file', 'scope' => 'footer','weight' => 20));
		drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/cfg', array('type' => 'file', 'scope' => 'footer','weight' => 30));
		drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/frontPageWidgets.js', array( 'type' => 'file', 'scope' => 'footer','weight' => 50));

		$variables['search_form'] = module_invoke('search', 'block_view', 'search_form');
		$variables['logo'] = drupal_get_path('theme', 'bvng') . '/images/logo_white.png';
		$variables['site_name'] = "Global Biodiversity Information Facility";
	}

  // Load javascript for every pages.
	// drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/bootstrap.min.js', array('type' => 'file', 'scope' => 'footer'));
	drupal_add_js('http://dev.gbif.org/issues/s/en_UKkby86d-1988229788/6096/5/1.4.0-m2/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector.js?collectorId=a2e9eca4', array('type' => 'file', 'scope' => 'footer', 'async_js' => TRUE));
}

/**
 * Implements template_preprocess_region().
 */
function bvng_preprocess_region(&$variables) {
  switch ($variables['region']) {
    case 'content':
      $req_path = $variables['elements']['requested_path'];

      /* Only style outer wells at the region level for taxonomy/term pages and pages
       * with a filter sidebar. For the rest the well will be draw at the node level.
       */
      $well = _bvng_get_container_well();
      if (!empty($variables['elements']['system_main'])) {
        $system_main = &$variables['elements']['system_main'];
      }
      else {
        $system_main = NULL;
      }

    	$well_type = _bvng_well_types($req_path, $system_main);

    	switch ($well_type) {
        case 'filter':
          $variables['well_top'] = $well['filter']['top'];
          $variables['well_bottom'] = $well['filter']['bottom'];
          break;
        case 'normal':
          $variables['well_top'] = $well['normal']['top'];
          $variables['well_bottom'] = $well['normal']['bottom'];
          break;
        case 'none':
        	break;
      }
      break;

    case 'account':
      $account_string = '';
      if (isset($variables['user']->uid) && $variables['user']->uid !== 0) {
				$user = user_load($variables['user']->uid);
				$firstname = _bvng_get_field_value('user', $user, 'field_firstname');
        $account_string .= t('Hello,') . ' ' . l($firstname, 'user/' . $variables['user']->uid) . '! ';
        $account_string .= l(t('Logout'), 'user/logout', array('query' => _bvng_get_destination($variables['elements']['req_path'])));
      }
      else {
				// Force drupal_get_destination() pick up the correct origin.
				$account_string .= l(t('Login'), 'user/login', array('query' => _bvng_get_destination($variables['elements']['req_path'])));
        $account_string .= '<span class="ordim"> or </span>';
        $account_string .= l(t('Create a new account'), 'user/register');
      }
      $variables['account_string'] = $account_string;
      
      // change the <div class="account"> only for front page. 
      $variables['account_classes'] = drupal_is_front_page()? 'account account-fp' : 'account'  ;
      
      break;
  }
}

/**
 * Implements template_preprocess_block().
 */
function bvng_preprocess_block(&$variables) {

	// Preprocess for system main block.
	if ($variables['block']->module == 'system' && $variables['block']->delta == 'main') {

		// Use our own template for generic taxonomy term page.
		if (strpos($variables['elements']['#block']->requested_path, 'taxonomy/term') !== FALSE) {
    	$relation = gbif_pages_term_view_relation();
    	if (!array_key_exists(arg(2), $relation)) {
    		array_push($variables['theme_hook_suggestions'], 'block__system__main__taxonomy' . '__generic');
    	}
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
    	$icon = l($icon, $variables['elements']['#block']->requested_path . '/feed', array('html' => TRUE));
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

		if (strpos($variables['elements']['#block']->requested_path, 'mendeley') !== FALSE) {
			array_push($variables['theme_hook_suggestions'], 'block__system__main__mendeley');
			$variables['elements']['#block']->title = $GLOBALS['npt_mendeley_block_title'];
		}

    // If it's 404 not found.
    $status = drupal_get_http_header("status");
    if ($status == '404 Not Found') {
  		array_push($variables['theme_hook_suggestions'], 'block__system__main__404');

		  $suggested_path = 'http://www-old.gbif.org/' . $variables['block']->requested_path;
			$suggested_text = '';
		  $suggested_text .= '<p>' . t('We are sorry for the inconvenience.') . '</p>';
		  $suggested_text .= '<p>' . t('Did you try searching? Enter a keyword(s) in the search field above.') . '</p>';
		  $suggested_text .= '<p>' . t('You may be following an out-dated link based on GBIF’s previous portal which was active until September 2013 – if so, you may find the content you are looking for !here', array('!here' => l('here', $suggested_path))) . '.</p>';
		  $variables['content'] = $suggested_text;

    }
  }
}

/**
 * Implements hook_preprocess_node().
 */
function bvng_preprocess_node(&$variables) {

  /* Add theme hook suggestion for nodes of taxonomy/term/%
   */
  if (isset($variables['requested_path'])) {
  	if (strpos($variables['requested_path'], 'taxonomy/term') !== FALSE) {
  		array_push($variables['theme_hook_suggestions'], 'node__taxonomy' . '__generic');
  	}
  }
  elseif (isset($variables['current_path'])) {
  }

  /* Prepare the prev/next $node of the same content type.
   */
  if ($variables['node']) {
    switch ($variables['node']->type) {
      default:
        $next_node = node_load(prev_next_nid($variables['node']->nid, 'prev'));
    }
    $next_node = ($next_node->status == 1) ? $next_node : NULL; // Only refer to published node.
    $variables['next_node'] = $next_node;
  }

  /* Prepare $cchunks, $anchors and $elinks for type "generictemplate"
   * @see http://drupal.stackexchange.com/questions/35355/accessing-a-field-collection
   */
  // Prepare $cchunks.
  if ($variables['node']->type == 'generictemplate' && !empty($variables['field_cchunk'])) {
  	$fields_collection = field_get_items('node', $variables['node'], 'field_cchunk');
    $cchunks = array();
  	foreach ($fields_collection as $idx => $data) $cchunks[$idx] = field_collection_item_load($fields_collection[$idx]['value']);
  	$variables['cchunks'] = $cchunks;


  	// Prepare title, content and sidebar for each chunk.
  	$cchunks_title = array();
  	$cchunks_content = array();
  	$cchunks_sidebar = array();
  	$anchors = array();
  	$elinks = array();

  	foreach ($variables['cchunks'] as $k => $cchunk) {
  	  $cchunks_title[$k] = _bvng_get_field_value('field_collection_item', $cchunk, 'field_title');
  	  $cchunks_content[$k] = _bvng_get_field_value('field_collection_item', $cchunk, 'field_sectioncontent');

      $sidebar_fields = array(
        'anchors' => 'field_anchorlinkslist',
        'elinks' => 'field_externallinkslist',
      );
      foreach ($sidebar_fields as $var => $sidebar_field) {
    	  $field_links = array();
        $field_links[] = field_get_items('field_collection_item', $cchunk, $sidebar_field);
        foreach ($field_links as $i => $field_link) {
          foreach ($field_link as $f_link) {
            $cat_var = &$$var;
          	$cat_var[$k][] = field_collection_item_load($f_link['value']);
          }
        }
      }

      $cchunks_sidebar[$k] = '';

      if (!empty($anchors[$k])) {
        foreach ($anchors[$k] as $anchor) {
          if ($anchor !== FALSE) {
            $anchors_title = _bvng_get_field_value('field_collection_item', $anchor, 'field_anchorlinkslisttitle');
            $anchors_links = _bvng_get_field_value('field_collection_item', $anchor, 'field_anchorlink');

            $cchunks_sidebar[$k] .= '<h3>' . $anchors_title . '</h3>';
            $cchunks_sidebar[$k] .= '<ul class="tags">';
            foreach ($anchors_links as $anchors_link) {
              $cchunks_sidebar[$k] .= '<li><a href="#' . $anchors_link['link'] . '">' . $anchors_link['title'] . '</a></li>';
            }
            $cchunks_sidebar[$k] .= '</ul>';
          }
        }
      }

      if (!empty($elinks[$k])) {
        foreach ($elinks[$k] as $elink) {
        	if ($elink !== FALSE) {
          	$elinks_title = _bvng_get_field_value('field_collection_item', $elink, 'field_externallinkslisttitle');
          	$elinks_links = _bvng_get_field_value('field_collection_item', $elink, 'field_externallink');

          	$cchunks_sidebar[$k] .= '<h3>' . $elinks_title . '</h3>';
          	$cchunks_sidebar[$k] .= '<ul class="tags">';
          	foreach ($elinks_links as $elinks_link) {
          		$link = array(
          				'#theme' => 'link',
          				'#text' => $elinks_link['title'],
          				'#path' => $elinks_link['url'],
          				'#options' => array('attributes' => $elinks_link['attributes']),
          				'#prefix' => '<li>',
          				'#suffix' => '</li>',
          		);
          		$cchunks_sidebar[$k] .= render($link);
          	}
          	$cchunks_sidebar[$k] .= '</ul>';
        	}
        }
      }
  	}

    $variables['cchunks_title'] = $cchunks_title;
    $variables['cchunks_content'] = $cchunks_content;
    $variables['cchunks_sidebar'] = $cchunks_sidebar;
  }

  /* Get footer fields for data use articles.
   */
  $node_footer = _bvng_get_node_footer_content($variables['node']);
  $variables['node_footer'] = $node_footer;

  /* Get sidebar content
   */
  $sidebar = _bvng_get_sidebar_content($variables['nid'], $variables['vid']);
  $variables['sidebar'] = $sidebar;


	/* Build a combo value consisting of publisher and publishing date
	 */
	if ($variables['node']->type == 'resource_ims' && !empty($variables['field_publishing_date']) && !empty($variables['field_publisher']) ) {
	/*
	 * fix me: It should have been done with "render()" so that we can make use of the format decided in "manage display"
	 */
	$publishing_date = _bvng_get_field_value ('node', $variables['node'], 'field_publishing_date');
	$publisher = _bvng_get_field_value ('node', $variables['node'], 'field_publisher');
	// Friday, April 11, 2014
	$publishing_date =  date( 'l, M d, Y', $publishing_date);
	$publisher_w_date = $publisher . ', ' . $publishing_date;
	$variables['publisher_w_date'] = '<div class="field field-name-field-publisher-w-date field-type-text-long field-label-above">
		<div class="field-label">Publisher&nbsp;</div>
		<div class="field-items">
		<div class="field-item even">' . $publisher_w_date . '</div></div></div>';
	}

	/* Process the date of event.
	 */
	if ($variables['node']->type == 'event_ims') {
		$variables['event_date'] = _bvng_get_field_value('node', $variables['node'], 'field_dates');
	}

  /* Process menu_local_tasks()
   */
  global $user;

  // Bring the local tasks tab into node template.
  // @todo To investigate that this doesn't work for data use.
  $variables['tabs'] = menu_local_tabs();

  /* Determine what local task to show according to the role.
   * @todo To implement this using user_permission.
   */
	if (is_array($variables['tabs']['#primary'])) {
		foreach ($variables['tabs']['#primary'] as $key => $item) {
			// We don't need the view tab because we're already viewing it.

			switch ($item['#link']['title']) {
				case 'View':
					unset($variables['tabs']['#primary'][$key]);
					break;
				case 'Edit':
					// Alter the 'edit' link to point to the node/%/edit
					$variables['tabs']['#primary'][$key]['#link']['href'] = 'node/' . $variables['node']->nid . '/edit';
					if (!in_array('Editors', $user->roles)) unset($variables['tabs']['#primary'][$key]);
					break;
				case 'Devel':
					// Alter the 'edit' link to point to the node/%/devel
					$variables['tabs']['#primary'][$key]['#link']['href'] = 'node/' . $variables['node']->nid . '/devel';
					if (!in_array('administrator', $user->roles)) unset($variables['tabs']['#primary'][$key]);
					break;
			}
		}
	}

  /* Get also tagged
   */
  $variables['also_tagged'] = _bvng_get_also_tag_links($variables['node']);

  /* Prepare event location
   */
  if (isset($variables['node']->type) && $variables['node']->type == 'event_ims') {
  	$markup_location = '';
  	$city = _bvng_get_field_value('node', $variables['node'], 'field_city');
  	$venuecountry = _bvng_get_field_value('node', $variables['node'], 'field_venuecountry');
  	$markup_location .= ($city == FALSE) ? '' : $city;
  	$markup_location .= ($city == FALSE && $venuecountry == FALSE) ? '' : ', ';
  	$markup_location .= ($venuecountry == FALSE) ? '' : $venuecountry;
  }
  if (strlen($markup_location) !== 0) {
  	$variables['event_location'] = $markup_location;
  }

}

/**
 * Implements template_preprocess_taxonomy_term().
 */
function bvng_preprocess_taxonomy_term(&$variables) {
}

/**
 * Implements hook_preprocess_views_view().
 */
function bvng_preprocess_views_view(&$variables) {
  drupal_set_title($variables['view']->get_title());
  switch ($variables['view']->name) {
    case 'featurednewsarticles':
      // Contruct the JSON for slideshow.
      /* The old attempt to not use views_slideshow. To be deleted.
      $slides = array();
    	foreach ($variables['view']->result as $result) {
      	$node = node_load($result->nid);
      	$slide = new stdClass();
      	$slide->title = $node->title;
      	$slide->description = $node->body['und'][0]['summary'];
      	$slide->src = file_create_url($node->field_featured['und'][0]['uri']);
      	$slide->url = '/page/' . $node->nid;
      	$slides[] = $slide;
      }
      $slides = json_encode($slides);
      drupal_add_js(array(
        'bvng' => $slides,
      ), 'setting');
      drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/featuredNewsSlideshow.js', array('type' => 'file', 'scope' => 'footer', 'weight' => 50));
      */
      break;
  }
}

function bvng_preprocess_views_view_field(&$variables, $hook) {                      
	if ($variables['view']->name == 'featurednewsarticles') {                          
		$new = '';                                                                       
	}                                                                                  
	elseif ($variables['view']->name == 'viewallevents' && $variables['view']->current_display == 'latest4_fp') {
		if ($variables['field']->field == 'field_start_date') { 
			// allow extra divs and classes at a later time in template
			// any lang where the short name of the month has blanks?
			$pattern = '/(<span\s.+?>)(\w+\s\d\d)(<\/span>)/';
			$replacement = '$2';
			$target = $variables['field']->original_value ;
			
			$q = preg_replace ( $pattern, $replacement, $target);
			$d = explode ( ' ', $q );
			$variables['month_year'] = array ('month'=>$d[0] , 'year'=>$d[1]);
		}
	}                                                                                  
}                                                                                    

function bvng_preprocess_field(&$variables) {                                        
}                                                                                    

function bvng_preprocess_views_view_list(&$variables) {
  switch ($variables['view']->name) {
    case 'usesofdatafeaturedarticles':
      foreach ($variables['classes'] as $k => $class) {
        $odr = $k + 1;
        if ($odr % 3 === 0) {
          $variables['classes_array'][$k] = $variables['classes_array'][$k] . ' views-row-right';
        }
      }
      break;
  }
}

/**
 * Implements template_preprocess_search_results().
 */
function bvng_preprocess_search_results(&$variables) {
	if (isset($variables)) {

	}
}

/**
 * Implements template_preprocess_search_result().
 */
function bvng_preprocess_search_result(&$variables) {
	if (isset($variables)) {
		$date_formatted = format_date($variables['result']['date'], 'custom', 'F jS, Y ');
		$variables['result']['date_formatted'] = $date_formatted;

	}
}

// gbif_pages_form_alter() in gbif_pages will return 0 for drupal_is_front_page() no matter what.
function bvng_form_alter(&$variables) {
	if (drupal_is_front_page() && $variables['#id'] == 'search-block-form--2') {
		$variables['actions']['submit']['#attributes']['class'][0] = 'search-btn-fp';
		$variables['search_block_form']['#attributes']['title'] = 'Search news items and information pages...';
		$variables['search_block_form']['#attributes']['placeholder'] = 'Search news items and information pages...';
	}
}

/**
 * Implements template_preprocess_user_profile().
 */
function bvng_preprocess_user_profile(&$variables) {
  if (isset($variables)) {
    $user = user_load($variables['user']->uid);
    $name = _bvng_get_field_value('user', $user, 'field_firstname');
    $name .= ' ';
    $name .= _bvng_get_field_value('user', $user, 'field_lastname');
    $variables['full_name'] = $name;

    $edit_link = l('[' . t('Edit your account') . ']', 'user/' . $variables['user']->uid . '/edit');
    $variables['edit_link'] = $edit_link;

    $variables['user_profile']['field_country_mono']['#title'] = t('Country');

    unset($variables['user_profile']['summary']['#title']);
  }
}

function bvng_preprocess_user_register_form(&$variables) {
  if (isset($variables)) {
  	
    $notice_icon = '<div class="notice-icon"></div>';

    $disclaimer = $notice_icon;
    $disclaimer .= '<h3>' . t('Disclaimer') . '</h3>';
    $disclaimer .= '<p>' . t('By registering with GBIF you agree to abide by the terms of usage set out !here.', array('!here' => l('here', 'disclaimer/datause'))) . '</p>';
    $variables['disclaimer'] = $disclaimer;

    // We preprocess a class value here to allow proper functioning of jquery chosen
    // on country select by taking out the 'form-control' CSS class.
    unset($variables['form']['field_country_mono']['und']['#attributes']['class'][0]);
  }
}

function bvng_preprocess_user_pass(&$variables) {
	if (isset($variables)) {
		unset($variables['form']['actions']['submit']);
	}
}

function bvng_js_alter(&$js) {
	if ($js) {
		foreach ($js as $data => $attr) {
			if ($attr['group'] == 100) {
				$js[$data]['scope'] = 'footer';
			}
		}
	}
}

function _bvng_well_types($req_path, $system_main) {
  // Term pages that has a special layout, hence no filter well.
  $special_layout = array(
    '565',
    '567',
  );
  // Paths that have a filter well.
  $filter_paths = array(
    'allnewsarticles',
    'alldatausearticles',
    'events',
		'search',
		'mendeley',
		'resource',
  );

	// Determine to give filter sidebar or not.
  if (!empty($system_main['taxonomy_terms']) || !empty($system_main['term_heading']['term'])) {
    // If not a node page then the well is draw in the region level template.
    // Some term pages are special.
    foreach ($special_layout as $special) {
      if (array_key_exists($special, $system_main['taxonomy_terms'])) return 'none';
    }
    return 'filter';
  }
  elseif (!empty($system_main['nodes']) || strpos($req_path, 'user') !== FALSE) {
    // If it's a node page or the user page then the well is draw in the node/user level template.
		// Except if the user page is forbidden.
		$status = drupal_get_http_header("status");
		if (isset($status) && $status == '403 Forbidden') {
			return 'normal';
		}
		else {
			return 'none';
		}
  }
  elseif ($req_path) {
    // Others are views.
    foreach ($filter_paths as $path) {
      $match = strpos($req_path, $path);
      if ($match !== FALSE) return 'filter';
    }
    return 'normal';
  }
}

/**
 * Helper function for showing the title and subtitle of a site section in the
 * highlighted region.
 *
 * The description is retrieved from the description of the menu item.
 */
function _bvng_get_title_data($node_count = NULL, $user = NULL, $req_path = NULL) {
  $status = drupal_get_http_header("status");

	// This way disassociates the taxanavigation voc, is more reasonable, but a bit heavy.
	// Only 'GBIF Newsroom' has a shorter name in the nav.
	$source_menu = (strpos($req_path, 'user') !== FALSE) ? 'user-menu' : 'gbif-menu';
	$active_menu_item = menu_link_get_preferred(current_path(), $source_menu);
	if (strpos(current_path(), 'user') !== FALSE) {
		switch ($req_path) {
	    case 'user/login':
    	  $title = array(
    	   'name' => t('Login to GBIF'),
    	   'description' => '',
    	  );
	      break;
	    case 'user/register':
    	  $title = array(
    	   'name' => t('Register New GBIF Account'),
    	   'description' => t('Please, register to the GBIF data portal for downloading data, or login if you already have an account'),
    	  );
    	  break;
	    case 'user/password':
	      $title = array(
    	   'name' => t('Request a new password'),
    	   'description' => t('Please enter your username or the registered email address in order to reset your password'),
    	  );
    	  break;
	    case 'node/241':
	      $title = array(
    	   'name' => t('Thanks for registering!'),
    	   'description' => t('Please verify your email address'),
    	  );
    	  break;
	    default:
        if (isset($user->uid) && $user->uid !== 0) {
        	$user = user_load($user->uid);
        	$name = '';
        	$name .= _bvng_get_field_value('user', $user, 'field_firstname');
        	$name .= ' ';
        	$name .= _bvng_get_field_value('user', $user, 'field_lastname');
	      	$title = array(
    	   		'name' => $name,
    	   		'description' => t('User account and personal settings'),
    	  	);
        }
				elseif ($status == '403 Forbidden') {
					$title = array(
						'name' => t('You need to log in to visit this page'),
						'description' => t('403 Forbidden: proper permission required'),
					);
				}
        elseif (isset($user->uid) && $user->uid == 0) {
        	$title = array(
        		'name' => t('Log in to GBIF'),
        		'description' => '',
        	);
        }
        break;
	  }
	}
	elseif ($status == '404 Not Found') {
	  $title = array(
	   'name' => t("Hmm, the page can't be found"),
	   'description' => t('404 Not Found'),
	  );
	}
	elseif ($status == '403 Forbidden') {
		$title = array(
			'name' => t('You need to log in to visit this page'),
			'description' => t('403 Forbidden: proper permission required'),
		);
	}
	elseif ($active_menu_item) {
		// The resource/summary and resources/keyinformation are shared by two menu parents
		// so we force the title here.
		if (drupal_match_path($req_path, 'taxonomy/term/764') || drupal_match_path($req_path, 'node/234') || drupal_match_path($req_path, 'resources/archive')) {
		  $title = array(
		    'name' => t('Resources'),
		    'description' => t('Tools and information to support the GBIF community'),
		  );
		}
		else {
		  $parent = menu_link_load($active_menu_item['plid']);
		  $title = array(
		      'mild' => $parent['mlid'],
		      'name' => ($parent['link_title'] == 'GBIF News') ? 'GBIF Newsroom' : $parent['link_title'],
		      'description' => $parent['options']['attributes']['title'],
		  );
		}
	}
	elseif (strpos(current_path(), 'taxonomy/term') !== FALSE) {
		$term = taxonomy_term_load(arg(2));
		$title = array(
			'name' => format_plural($node_count,
			  'Item tagged with "@term"',
				'Items tagged with "@term"',
				array('@term' => $term->name)),
		);
	}
	elseif (strpos(current_path(), 'search') !== FALSE) {
		$title = array(
			'name' => t('Search GBIF'),
		);
	}
	return $title;
}

/**
 * Retrieve sidebar content according to content type
 * @todo To investigate why passing $variables['node'] as $node will produce extra
 *       taxonomy_term object in $field_items, which cause taxonomy_term_load_multiple() to fail.
 *       Therefore here a $node object is loaded by $nid and $vid.
 */
function _bvng_get_sidebar_content($nid, $vid) {
  $node = node_load($nid, $vid);
	$markup = '';

	if ($node) {
    switch ($node->type) {
      case 'newsarticle':
      case 'usesofdata':
        $fields = _bvng_get_sidebar_fields($node->type);
        foreach ($fields as $idx => $field) {
          $variable_name = str_replace('-', '_', $idx);
          $$variable_name = array(
            'title' => $field['title'],
            'type' => 'ul',
            'items' => array(),
            'attributes' => array(
              'id' => $idx,
              'class' => $node->type . '-sidebar' . ' ' . $idx,
            ),
          );
      		$item_list = &$$variable_name;

          if ($idx <> 'tags') {
            $field_items = field_get_items('node', $node, $field['machine_name']);
						if ($field_items !== FALSE) {
							switch ($field['field_type']) {
								case 'node_date':
									array_push($item_list['items'], array('data' => format_date($node->$field['machine_name'], 'custom', 'F jS, Y ')));
									break;
								case 'text':
									foreach ($field_items as $item) {
										array_push($item_list['items'], array('data' => $item['value']));
									}
									break;
								case 'link_field':
									foreach ($field_items as $item) {
										array_push($item_list['items'], array('data' => l($item['title'], $item['url'])));
									}
									break;
								case 'taxonomy_term_reference':
									_bvng_get_tag_links($field_items, $item_list);
									break;
							}
							$markup .= theme_item_list($item_list);
						}
          }
          elseif ($idx == 'tags') {
            $terms = array();
            $term_sources = $field['fields'];
            // Get all terms.
            foreach ($term_sources as $term_source) {
              $items = field_get_items('node', $node, $term_source);
              if (is_array($items)) {
                foreach ($items as $item) {
                  $terms[] = $item['tid'];
                }
              }
            }
						if (count($terms) > 0) {
							_bvng_get_tag_links($terms, $item_list);
							$markup .= theme_item_list($item_list);
						}
          }
        }
        break;
			case 'resource_ims':
				$orc_id = _bvng_get_field_value('node', $node, 'field_orc_original_ims_id');
				$file_size_text = _bvng_get_field_value('node', $node, 'field_size_text');
				$resource_url = 'http://imsgbif.gbif.org/CMS_ORC/?doc_id=' . $orc_id . '&download=1';
				$download_text = t('Download');
				if (!empty($file_size_text)) {
					$download_text .= ' (' . $file_size_text . ')';
				}
				$download_link = l($download_text, $resource_url);
				$markup .= $download_link;
				break;
    }
  }

  return $markup;
}

function _bvng_get_node_footer_content($node) {
  $markup = '';
  switch ($node->type) {
    case 'newsarticle':
    case 'usesofdata':
      $fields = array(
        'field_citationinformation',
        'field_relatedgbifresources',
      );
      foreach ($fields as $field) {
        if (!empty($node->$field)) {
        	$item = field_view_field('node', $node, $field);
     			$markup .= render($item);
        }
      }
      break;
  }

  return $markup;
}

/**
 * Defined fields to retrieve content.
 * @param $type Type of the node.
 */
function _bvng_get_sidebar_fields($type) {
  switch ($type) {
    case 'newsarticle':
      $fields = array(
        'publication-date' => array(
          'title' => t('Publication date'),
          'machine_name' => 'created',
          'field_type' => 'node_date',
        ),
        'last-updated' => array(
          'title' => t('Last updated'),
          'machine_name' => 'changed',
          'field_type' => 'node_date',
        ),
        'tags' => array(
          'title' => t('Tags'),
          'machine_name' => 'tags',
          'fields' => _bvng_get_sidebar_tags_definition($type),
        ),
      );
      break;
    case 'usesofdata':
      $fields = array(
        'publication' => array(
          'title' => t('Publication'),
          'machine_name' => 'field_publication',
        ),
        'researchers-location' => array(
          'title' => t('Location of researchers'),
          'machine_name' => 'field_reasearcherslocation',
        ),
        'study-area' => array(
          'title' => t('Study area'),
          'machine_name' => 'field_studyarea',
        ),
        'data-sources' => array(
          'title' => t('Data sources'),
          'machine_name' => 'field_datasources',
        ),
        'links-to-research' => array(
          'title' => t('Links to research'),
          'machine_name' => 'field_linkstoresearch',
        ),
        'data-use-categories' => array(
          'title' => t('Data use categories'),
          'machine_name' => 'field_datausecategories',
        ),
        'tags' => array(
          'title' => t('Tags'),
          'machine_name' => 'tags',
          'fields' => _bvng_get_sidebar_tags_definition($type),
        ),
      );
      break;
  }

  // @see https://api.drupal.org/api/drupal/modules%21field%21field.info.inc/function/field_info_instances/7
  foreach ($fields as $idx => $field) {
    if ($idx <> 'tags') {
    	if (!isset($field['field_type'])) {
    		$info = field_info_field($field['machine_name']);
    		$fields[$idx]['field_type'] = $info['type'];
    	}
    }
  }
  return $fields;
}

function _bvng_get_tag_links(&$field_items, &$item_list) {
  $terms = taxonomy_term_load_multiple($field_items);
	foreach ($terms as $term) {
		$uri = taxonomy_term_uri($term);
		$tag_link = l($term->name, $uri['path']);
		array_push($item_list['items'], array('data' => $tag_link));
	}
}

function _bvng_get_sidebar_tags_definition($type) {
  switch ($type) {
    case 'newsarticle':
      return array(
        'field_capacity',
        'field_country',
        'field_informatics',
        'field_organizations',
        'field_regions',
      );
    case 'usesofdata':
      return array(
        'field_country',
        'field_regions',
        'field_organizations',
      );
  }
}

function _bvng_get_regional_links() {
  $regions = variable_get('gbif_region_definition');
  $links = '';
  $links = '<ul class="filter-list">';
  foreach ($regions as $region) {
    $links .= '<li>';
    $url_base = 'newsroom/archive/allnewsarticles/';
    $links .= l($region, $url_base . $region);
    $links .= '</li>';
  }
  $links .= '</ul>';
  return $links;
}

function _bvng_get_event_links() {
	$options = array(
		'upcoming' => array(
			'label' => t('Upcoming GBIF events'),
			'url_base' => 'newsroom/events',
		),
		'past' => array(
			'label' => t('Past GBIF events'),
			'url_base' => 'newsroom/events/archive',
		),
	);
	$links = '';
	$links = '<ul class="filter-list">';
	foreach ($options as $option) {
		$links .= '<li>';
		$links .= l($option['label'], $option['url_base']);
		$links .= '</li>';
	}
	$links .= '</ul>';
	return $links;
}

function _bvng_get_subject_links() {
  $subjects = variable_get('gbif_subject_definition');
  $links = '';
  $links = '<ul class="filter-list">';
  foreach ($subjects as $term => $subject) {
    $links .= '<li>';
    $url_base = 'taxonomy/term/';
    $links .= l($subject, $url_base . $term);
    $links .= '</li>';
  }
  $links .= '</ul>';
  return $links;
}

function _bvng_get_more_search_options($tid = NULL, $search_string = NULL) {
	$env = variable_get('environment_settings');
	$data_portal_base_url = $env['data_portal_base_url'];
  $term = taxonomy_term_load($tid);
  $voc = taxonomy_vocabulary_load($term->vid);
	$links = '<p>' . t('This search result only covers the text content of the news and information pages of the GBIF portal.') . '</p>';
  $links .= '<p>' . t('If you want to search data content, start here:') . '</p>';
  $links .= '<ul class="filter-list">';

  // Publishers and datasets
  $link_text = t('Publishers and datasets');
	if ($tid !== NULL) {
		$path_dataset = $data_portal_base_url . '/dataset/search?q=' . $term->name;
	}
	elseif ($search_string !== NULL) {
		$path_dataset = $data_portal_base_url . '/dataset/search?q=' . $search_string;
	}
  $links .= '<li>' . l($link_text, $path_dataset) . '</li>';

  // Countries
  if ($voc->machine_name == 'countries') {
  	$iso2 = field_get_items('taxonomy_term', $term, 'field_iso2');
  	$path_country = $data_portal_base_url . '/country/' . $iso2[0]['value'];
  	$link_text = t('Country') . '(' . $term->name . ')';
  }
  else {
  	$link_text = t('Countries');
  	$path_country = $data_portal_base_url . '/country';
  }
  $links .= '<li>' . l($link_text, $path_country) . '</li>';

  // Occurrences
  $link_text = t('Occurrences');
  $path_occurrence = $data_portal_base_url . '/occurrence';
  $links .= '<li>' . l($link_text, $path_occurrence) . '</li>';

  // Species
  $link_text = t('Species');
  $path_species = $data_portal_base_url . '/species';
  $links .= '<li>' . l($link_text, $path_species) . '</li>';

  $links .= '</ul>';
  return $links;
}

function _bvng_get_more_use_cases() {
	$tags = variable_get('npt_mendeley_tags');
	$links = '';
	$links .= '<ul class="filter-list">';
	foreach ($tags as $tag) {
		if ($tag['type'] == 'gbif_used') {
			$links .= '<li>'. l($tag['tab_name'], 'mendeley/' . $tag['machine_name']) . '</li>';
		}
	}
	$links .= '</ul>';
	return $links;
}

/**
 * Helper function to get "also tagged" tag links.
 */
function _bvng_get_also_tag_links($node) {
  $term_sources = _bvng_get_sidebar_tags_definition($node->type);

  // Get all the terms.
  foreach ($term_sources as $term_source) {
    $items = field_get_items('node', $node, $term_source);
    if (is_array($items)) {
    	foreach ($items as $item) {
    		$terms[] = $item['tid'];
    	}
    }
  }

	$item_list = array(
	 'items' => array(),
	);

	_bvng_get_tag_links($terms, $item_list);

	$term_links = '';

	if (!empty($item_list['items'])) {
		$term_links = t('Also tagged') . ':' . '<ul class="also-tagged">';
		foreach ($item_list['items'] as $tag_link) {
			$term_links .= '<li>' . $tag_link['data'] . '</li>';
		}
		$term_links .= '</ul>';
	}

	return $term_links;
}

/**
 * Helper function for the styling of external wells.
 */
function _bvng_get_container_well() {
  $well = array();
  $well['normal'] = array(
    'top' => '<div class="container well well-lg well-margin-top well-margin-bottom">' . "\n" . '<div class="row">' . "\n" . '<div class="col-md-12">',
    'bottom' => '</div>' . "\n" . '</div>' . "\n" . '</div>',
  );
  $well['filter'] = array(
    'top' => '<div class="container well well-lg well-margin-top well-margin-bottom well-right-bg">' . "\n" . '<div class="row">' . "\n" . '<div class="col-md-12">',
    'bottom' => '</div>' . "\n" . '</div>' . "\n" . '</div>',
  );
  return $well;
}

/**
 * Helper function for getting the ready-to-print value of a field.
 *
 * This is done by wrapping field_get_items() so it shares the same params.
 * If there is only one value per language, return the value directly.
 * Otherwise return the array.
 */
function _bvng_get_field_value($entity_type, $entity, $field_name, $langcode = NULL) {
  $field = field_get_items($entity_type, $entity, $field_name, $langcode);
  if ($field === FALSE) {
    return FALSE;
  }
  elseif (count($field) == 1 && isset($field[0]['value'])) {
    return $field[0]['value'];
  }
	else {
	  return $field;
	}
}

/**
 * Helper function for counting node number in a taxonomy term view.
 * @todo If taxonomy/term/% is implemented using views, then this function
 *       may not be necessary.
 * @param  The node array in page element array.
 * @return (int) $count.
 */
function _bvng_node_count($nodes) {
	// Chuck off non-node children.
  if (is_array($nodes)) {
  	foreach ($nodes as $idx => $node) {
  		if (!is_int($idx)) unset($nodes[$idx]);
  	}
  }
	$count = count($nodes);
	return $count;
}

/**
 *
 */
function _bvng_load_javascript() {
  /* Load javascripts.
   */
	$env = variable_get('environment_settings');
	$data_portal_base_url = $env['data_portal_base_url'];
  drupal_add_js($data_portal_base_url . '/js/vendor/jquery.dropkick-1.0.0.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/vendor/jquery.uniform.min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/vendor/mousewheel.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/vendor/jquery-scrollTo-1.4.2-min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/vendor/underscore-min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/helpers.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/graphs.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/vendor/resourcebundle.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($data_portal_base_url . '/js/widgets.js', array('type' => 'file', 'scope' => 'footer'));
}

/**
 *
 */
function _bvng_get_destination($req_path) {
	$destination = &drupal_static(__FUNCTION__);

	if (isset($destination)) {
		return $destination;
	}

	if (isset($_GET['destination'])) {
		$destination = array('destination' => $_GET['destination']);
	}
	else {
		$path = $req_path;
		$query = drupal_http_build_query(drupal_get_query_parameters());
		if ($query != '') {
			$path .= '?' . $query;
		}
		$destination = array('destination' => $path);
	}
	return $destination;
}