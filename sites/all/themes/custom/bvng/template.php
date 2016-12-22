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
  // Make the environmental settings available to the theme layer and javascript.
  $env = variable_get('environment_settings');
  $variables['data_portal_base_url'] = $env['data_portal_base_url'];
  $variables['gbif_api_base_url'] = $env['gbif_api_base_url'];
  $variables['gbif_api_version'] = $env['gbif_api_version'];
  global $base_url;
  $env['base_url'] = $base_url;
  drupal_add_js(array('environment_settings' => $env), 'setting');
}

/**
 * Implements template_preprocess_html().
 */
function bvng_preprocess_html(&$variables) {
  if (drupal_is_front_page()) {
    $variables['head_title'] = t('Free and Open Access to Biodiversity Data | GBIF.org');
  }
  drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/contacts.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_css(libraries_get_path('leaflet') . '/leaflet.css', array('type' => 'file', 'scope' => 'header'));
}

/**
 * Implements template_preprocess_page().
 *
 * @see http://www.dibe.gr/blog/set-path-determining-active-trail-drupal-7-menu
 * @see https://drupal.org/node/1292590 for setting active user menu.
 */
function bvng_preprocess_page(&$variables) {
  $current_path = current_path();

  if (!empty($variables['node']->type)) {
    switch ($variables['node']->type) {
      case 'generictemplate':
        $jobs_adverts = array('node/82115', 'node/82116', 'node/82117', 'node/82162');
        if (in_array($current_path, $jobs_adverts)) {
          $altered_path = drupal_get_normal_path('newsroom/opportunities'); // node/242
        }
        break;
      case 'page':
        $jobs_adverts = array('node/82621');
        if (in_array($current_path, $jobs_adverts)) {
          $altered_path = drupal_get_normal_path('newsroom/opportunities'); // node/242
        }
        break;
    }
  } elseif (drupal_match_path($current_path, 'user') || drupal_match_path($current_path, 'user/*')) {
    $altered_path = 'user';
  }

  if (isset($altered_path)) {
    if ($altered_path != 'user') {
      menu_tree_set_path('gbif-menu', $altered_path); // can't use menu_tree_set_path for user, it'll mess the tabs.
    }
    menu_set_active_item($altered_path);
  }

  if (isset($variables['page']['content']['system_main']['nodes'])) {
    $node_count = _bvng_node_count($variables['page']['content']['system_main']['nodes']);
  } else {
    $node_count = NULL;
  }

  // determine title and slogan in banner if it's not been set yet.
  // front page doesn't need highlighted_title.
  if (!isset($variables['page']['highlighted_title']) && drupal_is_front_page() == FALSE) {
    $variables['page']['highlighted_title'] = _bvng_get_title_data($node_count, $variables['user'], isset($variables['node']) ? $variables['node'] : NULL);
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
  switch ($current_path) {
    case 'node/223': // contact/directoryofcontacts
      drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/contacts.js', array('type' => 'file', 'scope' => 'footer'));
      break;
  }

  if (drupal_is_front_page()) {
    drupal_add_js(libraries_get_path('leaflet') . '/leaflet.js', array('type' => 'file', 'scope' => 'footer', 'weight' => 10));
    drupal_add_js(libraries_get_path('moment') . '/moment.js', array('type' => 'file', 'scope' => 'footer', 'weight' => 20));
    // only load if it's prod instance
    $env = variable_get('environment_settings');
    if ($env['gbif_api_base_url'] == 'http://api.gbif.org') drupal_add_js(drupal_get_path('theme', 'bvng') . '/js/frontPageWidgets.js', array('type' => 'file', 'scope' => 'footer', 'weight' => 50));

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
  $current_path = current_path();
  // capture if this is a node page, and if yes, determine the node type.
  $args = arg();
  if ($args[0] == 'node' && isset($args[1]) && is_numeric($args[1])) {
    $node = node_load($args[1]);
    $node_type = $node->type;
  } else {
    $node_type = NULL;
  }

  switch ($variables['region']) {
    case 'content':
      /* Only style outer wells at the region level for taxonomy/term pages and pages
       * with a filter sidebar. For the rest the well will be draw at the node level.
       */
      $well = _bvng_get_container_well();
      $well_type = _bvng_well_types($current_path, $node_type);

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
        $account_string .= l(t('Logout'), 'user/logout', array('query' => _bvng_get_destination()));
      } else {
        // Force drupal_get_destination() pick up the correct origin.
        $account_string .= l(t('Login'), 'user/login', array('query' => _bvng_get_destination()));
        $account_string .= '<span class="ordim"> or </span>';
        $account_string .= l(t('Create a new account'), 'user/register');
      }
      $variables['account_string'] = $account_string;

      // change the <div class="account"> only for front page. 
      $variables['account_classes'] = drupal_is_front_page() ? 'account account-fp' : 'account';

      break;
  }
}

/**
 * Implements hook_preprocess_node().
 */
function bvng_preprocess_node(&$variables) {

  // Add theme hook suggestion for nodes of taxonomy/term/%
  if (strpos(current_path(), 'taxonomy/term') !== FALSE) {
    array_push($variables['theme_hook_suggestions'], 'node__taxonomy' . '__generic');
  }

  // Prepare the prev/next $node of the same content type.
  if ($variables['node']) {
    switch ($variables['node']->type) {
      case 'news':
      case 'data_use':
        $next_node = node_load(prev_next_nid($variables['node']->nid, 'prev'));
        if (is_object($next_node)) {
          $next_node = ($next_node->status == 1) ? $next_node : NULL; // Only refer to published node.
          // Check whether an URL alias is available.
          $url_alias = drupal_get_path_alias('node/' . $next_node->nid);
          $next_node_url = (!empty($url_alias)) ? $url_alias : 'page/' . $next_node->nid;
          $variables['next_node_link'] = l($next_node->title, $next_node_url);
          $variables['next_node'] = $next_node;
        }
        break;
    }
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
      $cchunks_content[$k]['content'] = _bvng_get_field_value('field_collection_item', $cchunk, 'field_sectioncontent');
      $cchunks_content[$k]['format'] = $cchunk->field_sectioncontent['und'][0]['format'];

      $sidebar_fields = array(
        'anchors' => 'field_anchorlinkslist',
        'elinks' => 'field_externallinkslist',
      );
      foreach ($sidebar_fields as $var => $sidebar_field) {
        $field_links = array();
        $field_links[] = field_get_items('field_collection_item', $cchunk, $sidebar_field);
        foreach ($field_links as $i => $field_link) {
          if ($field_link != false) {
            foreach ($field_link as $f_link) {
              $cat_var = &$$var;
              $cat_var[$k][] = field_collection_item_load($f_link['value']);
            }
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
                '#options' => array('attributes' => $elinks_link['attributes'], 'html' => FALSE),
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

  /* Process menu_local_tasks()
   */
  global $user;

  // Bring the local tasks tab into node template.
  // @todo To investigate why this doesn't work for data use.
  $variables['tabs'] = menu_local_tabs();

  /* Determine what local task to show according to the role.
   * @todo To implement this using user_permission.
   */
  if (is_array($variables['tabs']['#primary'])) {
    foreach ($variables['tabs']['#primary'] as $key => $item) {
      switch ($item['#link']['title']) {
        case 'View':
          // We don't need the view tab because we're already viewing it.
          unset($variables['tabs']['#primary'][$key]);
          break;
        case 'Edit':
          // Alter the 'edit' link to point to the node/%/edit
          $variables['tabs']['#primary'][$key]['#link']['href'] = 'node/' . $variables['node']->nid . '/edit';
          if (!in_array('Editor', $user->roles) && !in_array('Publisher', $user->roles)) unset($variables['tabs']['#primary'][$key]);
          break;
        case 'Manage display':
          // "Manage display" tab is not for editors so we also disable it.
          unset($variables['tabs']['#primary'][$key]);
          break;
        case 'Devel':
          // Alter the 'edit' link to point to the node/%/devel
          $variables['tabs']['#primary'][$key]['#link']['href'] = 'node/' . $variables['node']->nid . '/devel';
          if (!in_array('Administrator', $user->roles)) unset($variables['tabs']['#primary'][$key]);
          break;
      }
    }
  }
}

function bvng_preprocess_field(&$variables) {
  if (isset($variables['element']) && $variables['element']['#field_name'] == 'body') {
    $variables['classes_array'][] = 'clearfix';
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

/**
 * Overrides the presentation of ge_date_ical field.
 */
function bvng_field__ge_date_ical($variables) {
  $output = '';

  // Render only the items.
  foreach ($variables['items'] as $delta => $item) {
    unset($item['date']);
    $output .= '<span>' . t('Add to calendar') . ": " . '</span>';
    $output .= drupal_render($item);
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Helper function to determine the type of the outer well of the page.
 * @param $current_path
 * @param $node_type
 * @return string
 */
function _bvng_well_types($current_path, $node_type = NULL) {

  $status = drupal_get_http_header("status");

  // Paths that have a filter well.
  $filter_paths = array(
    'newsroom/news*',
    'newsroom/uses*',
    'newsroom/events/upcoming',
    'newsroom/events/past',
    'search/*',
    'resources',
    'taxonomy/term/*'
  );

  $is_filter_path = FALSE;
  foreach ($filter_paths as $path) {
    if (drupal_match_path($current_path, $path)) $is_filter_path = TRUE;
  }

  // Paths that don't have a well.
  $none_paths = array(
    'country*',
    'analytics*',
    'participation/participant-list',
    'mendeley*',
    'newsroom/summary',
    'newsroom/uses/summary',
    'user*'
  );
  $is_none_path = FALSE;
  foreach ($none_paths as $path) {
    if (drupal_match_path($current_path, $path)) $is_none_path = TRUE;
  }

  // the node page won't need a well.
  if ($is_none_path == TRUE || $node_type !== NULL) {
    return 'none';
  } elseif ($is_filter_path == TRUE) {
    return 'filter';
  } elseif ($status == '403 Forbidden' || $status == '404 Not Found') {
    return 'normal';
  } else {
    return 'normal';
  }
}

/**
 * Theme our own feed icon.
 */
function bvng_feed_icon($variables) {
  $text = t('Subscribe to !feed-title', array('!feed-title' => $variables['title']));
  if ($image = theme('image', array('path' => drupal_get_path('theme', 'bvng') . '/images/feed-icon.png', 'width' => 30, 'height' => 30, 'alt' => $text))) {
    return l($image, $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('feed-icon'), 'title' => $text)));
  }
}

/**
 * Theme our own ical feed icon.
 */
function bvng_feed_ical_icon($variables) {
  $text = t('Add !feed-title to my calendar', array('!feed-title' => $variables['title']));
  if ($image = theme('image', array('path' => drupal_get_path('theme', 'bvng') . '/images/ical-icon.png', 'width' => 30, 'height' => 30, 'alt' => $text))) {
    return l($image, $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('feed-ical-icon'), 'title' => $text)));
  }
}

/**
 * Helper function for showing the title and subtitle of a site section in the
 * highlighted region.
 *
 * The description is retrieved from the description of the menu item.
 */
function _bvng_get_title_data($node_count = NULL, $user = NULL, $node = NULL) {
  $status = drupal_get_http_header("status");
  $current_path = current_path();

  // This way disassociates the taxanavigation voc, is more reasonable, but a bit heavy.
  // Only 'GBIF Newsroom' has a shorter name in the nav.
  $source_menu = (strpos($current_path, 'user') !== FALSE) ? 'user-menu' : 'gbif-menu';
  $active_menu_item = menu_link_get_preferred($current_path, $source_menu);
  if (strpos($current_path, 'user') !== FALSE) {
    switch ($current_path) {
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
        } elseif ($status == '403 Forbidden') {
          $title = array(
            'name' => t('You need to log in to visit this page'),
            'description' => t('403 Forbidden: proper permission required'),
          );
        } elseif (isset($user->uid) && $user->uid == 0) {
          $title = array(
            'name' => t('Log in to GBIF'),
            'description' => '',
          );
        }
        break;
    }
  } elseif ($status == '404 Not Found') {
    $title = array(
      'name' => t("Hmm, the page can't be found"),
      'description' => t('404 Not Found'),
    );
  } elseif ($status == '403 Forbidden') {
    $title = array(
      'name' => t('You need to log in to visit this page'),
      'description' => t('403 Forbidden: proper permission required'),
    );
  } elseif ($active_menu_item) {
    // The resources and resources/keyinformation are shared by two menu parents
    // so we force the title here.
    $resource_paths = array(
      'resources',
      'resources/archive',
      'node/234',
      'node/5438',
      'node/5549',
      'node/5553',
      'node/5557',
      'node/82192',
    );
    foreach ($resource_paths as $path) {
      $matched = drupal_match_path($current_path, $path);
      if ($matched == TRUE) break;
    }
    if (isset($matched) && $matched == TRUE) {
      $title = array(
        'name' => t('Resources'),
        'description' => t('Library of documents, tools and and other information to support the GBIF community'),
      );
    } else {
      $parent = menu_link_load($active_menu_item['plid']);
      $title = array(
        'mild' => $parent['mlid'],
        'name' => ($parent['link_title'] == 'GBIF News') ? 'GBIF Newsroom' : $parent['link_title'],
        'description' => $parent['options']['attributes']['title'],
      );
    }
  } elseif ($active_menu_item == FALSE && isset($node)) {
    if (in_array($node->type, array('data_use', 'news', 'event'))) {
      $title = array(
        'name' => t('GBIF Newsroom'),
        'description' => t('News and events from around the GBIF community'),
      );
    } elseif (in_array($node->type, array('resource'))) {
      $title = array(
        'name' => t('Resources'),
        'description' => t('Library of documents, tools and and other information to support the GBIF community'),
      );
    } // For individual "page" type of pages.
    elseif (in_array($node->type, array('page'))) {
      switch ($current_path) {
        case 'node/2998':
          $title = array(
            'name' => t('Thank you!'),
            'description' => t('Successfully subscribed'),
          );
          break;
        case 'node/82102':
          $title = array(
            'name' => t('Thank you!'),
            'description' => t('Please verify your email address'),
          );
          break;
      }
    }
  } elseif (strpos($current_path, 'taxonomy/term') !== FALSE) {
    $term = taxonomy_term_load(arg(2));
    $title = array(
      'name' => format_plural($node_count,
        'Item tagged with "@term"',
        'Items tagged with "@term"',
        array('@term' => $term->name)),
    );
  } elseif (strpos($current_path, 'search') !== FALSE) {
    $title = array(
      'name' => t('Search GBIF'),
    );
  }

  if (isset($title)) {
    return $title;
  }
}

function _bvng_get_tag_links(&$field_items, &$item_list) {
  $terms = taxonomy_term_load_multiple($field_items);
  foreach ($terms as $term) {
    $uri = taxonomy_term_uri($term);
    $tag_link = l($term->name, $uri['path']);
    array_push($item_list['items'], array('data' => $tag_link));
  }
}

function _bvng_get_regional_links() {
  $regions = variable_get('gbif_region_definition');
  $links = '';
  $links = '<ul class="filter-list">';
  foreach ($regions as $region) {
    $links .= '<li>';
    $url_base = 'newsroom/news/';
    $links .= l($region, $url_base . $region);
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
  $links = '<p>' . t('The search result on our current site is limited and we\'ve been working on improving it.') . '</p>';
  $links .= '<p>' . t('Please go to ') . l('http://demo.gbif.org', 'http://demo.gbif.org') . ' for the early access version of our new search.</p>';
  /*
  $links .= '<ul class="filter-list">';

  // Publishers and datasets
  $link_text = t('Publishers and datasets');
  if ($tid !== NULL) {
    $path_dataset = $data_portal_base_url . '/dataset/search?q=' . $term->name;
  } elseif ($search_string !== NULL) {
    $path_dataset = $data_portal_base_url . '/dataset/search?q=' . $search_string;
  }
  $links .= '<li>' . l($link_text, $path_dataset) . '</li>';

  // Countries
  if ($voc->machine_name == 'countries') {
    $iso2 = field_get_items('taxonomy_term', $term, 'field_iso2');
    $path_country = $data_portal_base_url . '/country/' . $iso2[0]['value'];
    $link_text = t('Country') . '(' . $term->name . ')';
  } else {
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
  */
  return $links;
}

/**
 * Helper function for the styling of external wells.
 */
function _bvng_get_container_well() {
  $well = array();
  $well['normal'] = array(
    'top' => '<div class="container well well-lg well-margin-top well-margin-bottom">' . "\n" . '<div class="row">' . "\n" . '<div class="col-xs-12">',
    'bottom' => '</div>' . "\n" . '</div>' . "\n" . '</div>',
  );
  $well['filter'] = array(
    'top' => '<div class="container well well-lg well-margin-top well-margin-bottom well-right-bg">' . "\n" . '<div class="row">' . "\n" . '<div class="col-xs-12">',
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
  } elseif (count($field) == 1 && isset($field[0]['value'])) {
    return $field[0]['value'];
  } else {
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
function _bvng_get_destination() {
  $destination = &drupal_static(__FUNCTION__);

  if (isset($destination)) {
    return $destination;
  }

  if (isset($_GET['destination'])) {
    $destination = array('destination' => $_GET['destination']);
  } else {
    $path = current_path();
    $query = drupal_http_build_query(drupal_get_query_parameters());
    if ($query != '') {
      $path .= '?' . $query;
    }
    $destination = array('destination' => $path);
  }
  return $destination;
}

/**
 * Hide facet counts.
 * Implements theme_facetapi_link_inactive().
 * @link https://www.drupal.org/node/1615430#comment-8809877
 */
function bvng_facetapi_link_inactive($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Adds count to link if one was passed.
  // BKO: we comment out this block so we can add the count back outside the <anchor> tag.
  /*
  if (isset($variables['count'])) {
    $variables['text'] .= ' ' . theme('facetapi_count', $variables);
  }
  */

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
  return gbif_resource_theme_link($variables);
}

/**
 * Implements theme_file_force_file_link().
 * @param $variables
 */
function bvng_file_force_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_force_create_url($file->uri, FALSE);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  } else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  $options['query']['download'] = '1';

  // Use path to control the output style of file_force.
  if (current_path() == 'resources') {
    $options['html'] = TRUE;
    return '<span class="file">' . l($icon, $url, $options) . '</span>';
  } else {
    return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
  }
}