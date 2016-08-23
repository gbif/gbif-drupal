<?php
/**
 * @file
 * gbif_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gbif_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access ajax markup'.
  $permissions['access ajax markup'] = array(
    'name' => 'access ajax markup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Code editor' => 'Code editor',
    ),
    'module' => 'ajax_markup',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access gbifs office reports'.
  $permissions['access gbifs office reports'] = array(
    'name' => 'access gbifs office reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'gbif_roles',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access registry console'.
  $permissions['access registry console'] = array(
    'name' => 'access registry console',
    'roles' => array(
      'Administrator' => 'Administrator',
      'REGISTRY_ADMIN' => 'REGISTRY_ADMIN',
      'REGISTRY_EDITOR' => 'REGISTRY_EDITOR',
    ),
    'module' => 'gbif_registry',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'REGISTRY_ADMIN' => 'REGISTRY_ADMIN',
      'REGISTRY_EDITOR' => 'REGISTRY_EDITOR',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer better countries'.
  $permissions['administer better countries'] = array(
    'name' => 'administer better countries',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_countries',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer bueditor'.
  $permissions['administer bueditor'] = array(
    'name' => 'administer bueditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bueditor',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer countries'.
  $permissions['administer countries'] = array(
    'name' => 'administer countries',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_countries',
  );

  // Exported permission: 'administer custom username validation'.
  $permissions['administer custom username validation'] = array(
    'name' => 'administer custom username validation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'custom_username_validation',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer facebook publication types'.
  $permissions['administer facebook publication types'] = array(
    'name' => 'administer facebook publication types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'administer facebook publications'.
  $permissions['administer facebook publications'] = array(
    'name' => 'administer facebook publications',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer fb_autopost'.
  $permissions['administer fb_autopost'] = array(
    'name' => 'administer fb_autopost',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fb_autopost',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer mediafront'.
  $permissions['administer mediafront'] = array(
    'name' => 'administer mediafront',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mediafront',
  );

  // Exported permission: 'administer mediafront presets'.
  $permissions['administer mediafront presets'] = array(
    'name' => 'administer mediafront presets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mediafront',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nicemessages'.
  $permissions['administer nicemessages'] = array(
    'name' => 'administer nicemessages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nicemessages',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer prev_next'.
  $permissions['administer prev_next'] = array(
    'name' => 'administer prev_next',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'prev_next',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer site verify'.
  $permissions['administer site verify'] = array(
    'name' => 'administer site verify',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'site_verify',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer theme assignments'.
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themekey settings'.
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer token insert settings'.
  $permissions['administer token insert settings'] = array(
    'name' => 'administer token insert settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'token_insert',
  );

  // Exported permission: 'administer twitter'.
  $permissions['administer twitter'] = array(
    'name' => 'administer twitter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create call content'.
  $permissions['create call content'] = array(
    'name' => 'create call content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create data_use content'.
  $permissions['create data_use content'] = array(
    'name' => 'create data_use content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dataset content'.
  $permissions['create dataset content'] = array(
    'name' => 'create dataset content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dir_organization content'.
  $permissions['create dir_organization content'] = array(
    'name' => 'create dir_organization content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gbif_participant content'.
  $permissions['create gbif_participant content'] = array(
    'name' => 'create gbif_participant content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create generictemplate content'.
  $permissions['create generictemplate content'] = array(
    'name' => 'create generictemplate content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create programme content'.
  $permissions['create programme content'] = array(
    'name' => 'create programme content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any call content'.
  $permissions['delete any call content'] = array(
    'name' => 'delete any call content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any data_use content'.
  $permissions['delete any data_use content'] = array(
    'name' => 'delete any data_use content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dataset content'.
  $permissions['delete any dataset content'] = array(
    'name' => 'delete any dataset content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dir_organization content'.
  $permissions['delete any dir_organization content'] = array(
    'name' => 'delete any dir_organization content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gbif_participant content'.
  $permissions['delete any gbif_participant content'] = array(
    'name' => 'delete any gbif_participant content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any generictemplate content'.
  $permissions['delete any generictemplate content'] = array(
    'name' => 'delete any generictemplate content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any programme content'.
  $permissions['delete any programme content'] = array(
    'name' => 'delete any programme content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own call content'.
  $permissions['delete own call content'] = array(
    'name' => 'delete own call content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own data_use content'.
  $permissions['delete own data_use content'] = array(
    'name' => 'delete own data_use content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dataset content'.
  $permissions['delete own dataset content'] = array(
    'name' => 'delete own dataset content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dir_organization content'.
  $permissions['delete own dir_organization content'] = array(
    'name' => 'delete own dir_organization content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gbif_participant content'.
  $permissions['delete own gbif_participant content'] = array(
    'name' => 'delete own gbif_participant content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own generictemplate content'.
  $permissions['delete own generictemplate content'] = array(
    'name' => 'delete own generictemplate content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own programme content'.
  $permissions['delete own programme content'] = array(
    'name' => 'delete own programme content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in about_gbif'.
  $permissions['delete terms in about_gbif'] = array(
    'name' => 'delete terms in about_gbif',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in audience'.
  $permissions['delete terms in audience'] = array(
    'name' => 'delete terms in audience',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in capacity_enhancement'.
  $permissions['delete terms in capacity_enhancement'] = array(
    'name' => 'delete terms in capacity_enhancement',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in content_stream'.
  $permissions['delete terms in content_stream'] = array(
    'name' => 'delete terms in content_stream',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in continent'.
  $permissions['delete terms in continent'] = array(
    'name' => 'delete terms in continent',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in data_type'.
  $permissions['delete terms in data_type'] = array(
    'name' => 'delete terms in data_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in data_use'.
  $permissions['delete terms in data_use'] = array(
    'name' => 'delete terms in data_use',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gbif_area'.
  $permissions['delete terms in gbif_area'] = array(
    'name' => 'delete terms in gbif_area',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in informatics'.
  $permissions['delete terms in informatics'] = array(
    'name' => 'delete terms in informatics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in internal_tags'.
  $permissions['delete terms in internal_tags'] = array(
    'name' => 'delete terms in internal_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in language'.
  $permissions['delete terms in language'] = array(
    'name' => 'delete terms in language',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organizations'.
  $permissions['delete terms in organizations'] = array(
    'name' => 'delete terms in organizations',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in programme'.
  $permissions['delete terms in programme'] = array(
    'name' => 'delete terms in programme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in purpose'.
  $permissions['delete terms in purpose'] = array(
    'name' => 'delete terms in purpose',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resource_type'.
  $permissions['delete terms in resource_type'] = array(
    'name' => 'delete terms in resource_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in term_attribute'.
  $permissions['delete terms in term_attribute'] = array(
    'name' => 'delete terms in term_attribute',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topic'.
  $permissions['delete terms in topic'] = array(
    'name' => 'delete terms in topic',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in un_region'.
  $permissions['delete terms in un_region'] = array(
    'name' => 'delete terms in un_region',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any album facebook publication'.
  $permissions['edit any album facebook publication'] = array(
    'name' => 'edit any album facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any call content'.
  $permissions['edit any call content'] = array(
    'name' => 'edit any call content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any data_use content'.
  $permissions['edit any data_use content'] = array(
    'name' => 'edit any data_use content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dataset content'.
  $permissions['edit any dataset content'] = array(
    'name' => 'edit any dataset content',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dir_organization content'.
  $permissions['edit any dir_organization content'] = array(
    'name' => 'edit any dir_organization content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event facebook publication'.
  $permissions['edit any event facebook publication'] = array(
    'name' => 'edit any event facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any gbif_participant content'.
  $permissions['edit any gbif_participant content'] = array(
    'name' => 'edit any gbif_participant content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any generictemplate content'.
  $permissions['edit any generictemplate content'] = array(
    'name' => 'edit any generictemplate content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any link facebook publication'.
  $permissions['edit any link facebook publication'] = array(
    'name' => 'edit any link facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any note facebook publication'.
  $permissions['edit any note facebook publication'] = array(
    'name' => 'edit any note facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any photo facebook publication'.
  $permissions['edit any photo facebook publication'] = array(
    'name' => 'edit any photo facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any post facebook publication'.
  $permissions['edit any post facebook publication'] = array(
    'name' => 'edit any post facebook publication',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any programme content'.
  $permissions['edit any programme content'] = array(
    'name' => 'edit any programme content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any question facebook publication'.
  $permissions['edit any question facebook publication'] = array(
    'name' => 'edit any question facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any status facebook publication'.
  $permissions['edit any status facebook publication'] = array(
    'name' => 'edit any status facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own album facebook publication'.
  $permissions['edit own album facebook publication'] = array(
    'name' => 'edit own album facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own call content'.
  $permissions['edit own call content'] = array(
    'name' => 'edit own call content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own data_use content'.
  $permissions['edit own data_use content'] = array(
    'name' => 'edit own data_use content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dataset content'.
  $permissions['edit own dataset content'] = array(
    'name' => 'edit own dataset content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dir_organization content'.
  $permissions['edit own dir_organization content'] = array(
    'name' => 'edit own dir_organization content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event facebook publication'.
  $permissions['edit own event facebook publication'] = array(
    'name' => 'edit own event facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own gbif_participant content'.
  $permissions['edit own gbif_participant content'] = array(
    'name' => 'edit own gbif_participant content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own generictemplate content'.
  $permissions['edit own generictemplate content'] = array(
    'name' => 'edit own generictemplate content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own link facebook publication'.
  $permissions['edit own link facebook publication'] = array(
    'name' => 'edit own link facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own note facebook publication'.
  $permissions['edit own note facebook publication'] = array(
    'name' => 'edit own note facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own photo facebook publication'.
  $permissions['edit own photo facebook publication'] = array(
    'name' => 'edit own photo facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own post facebook publication'.
  $permissions['edit own post facebook publication'] = array(
    'name' => 'edit own post facebook publication',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own programme content'.
  $permissions['edit own programme content'] = array(
    'name' => 'edit own programme content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own question facebook publication'.
  $permissions['edit own question facebook publication'] = array(
    'name' => 'edit own question facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own status facebook publication'.
  $permissions['edit own status facebook publication'] = array(
    'name' => 'edit own status facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'edit terms in about_gbif'.
  $permissions['edit terms in about_gbif'] = array(
    'name' => 'edit terms in about_gbif',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in audience'.
  $permissions['edit terms in audience'] = array(
    'name' => 'edit terms in audience',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in capacity_enhancement'.
  $permissions['edit terms in capacity_enhancement'] = array(
    'name' => 'edit terms in capacity_enhancement',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in content_stream'.
  $permissions['edit terms in content_stream'] = array(
    'name' => 'edit terms in content_stream',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in continent'.
  $permissions['edit terms in continent'] = array(
    'name' => 'edit terms in continent',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in data_type'.
  $permissions['edit terms in data_type'] = array(
    'name' => 'edit terms in data_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in data_use'.
  $permissions['edit terms in data_use'] = array(
    'name' => 'edit terms in data_use',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gbif_area'.
  $permissions['edit terms in gbif_area'] = array(
    'name' => 'edit terms in gbif_area',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in informatics'.
  $permissions['edit terms in informatics'] = array(
    'name' => 'edit terms in informatics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in internal_tags'.
  $permissions['edit terms in internal_tags'] = array(
    'name' => 'edit terms in internal_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in language'.
  $permissions['edit terms in language'] = array(
    'name' => 'edit terms in language',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organizations'.
  $permissions['edit terms in organizations'] = array(
    'name' => 'edit terms in organizations',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in programme'.
  $permissions['edit terms in programme'] = array(
    'name' => 'edit terms in programme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in purpose'.
  $permissions['edit terms in purpose'] = array(
    'name' => 'edit terms in purpose',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resource_type'.
  $permissions['edit terms in resource_type'] = array(
    'name' => 'edit terms in resource_type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in term_attribute'.
  $permissions['edit terms in term_attribute'] = array(
    'name' => 'edit terms in term_attribute',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topic'.
  $permissions['edit terms in topic'] = array(
    'name' => 'edit terms in topic',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in un_region'.
  $permissions['edit terms in un_region'] = array(
    'name' => 'edit terms in un_region',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import or export menu'.
  $permissions['import or export menu'] = array(
    'name' => 'import or export menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_import',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'override custom username validation'.
  $permissions['override custom username validation'] = array(
    'name' => 'override custom username validation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'custom_username_validation',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'post to twitter'.
  $permissions['post to twitter'] = array(
    'name' => 'post to twitter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: 'post to twitter with global account'.
  $permissions['post to twitter with global account'] = array(
    'name' => 'post to twitter with global account',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: 'preview focal point'.
  $permissions['preview focal point'] = array(
    'name' => 'preview focal point',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'focal_point',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'set facebook permissions'.
  $permissions['set facebook permissions'] = array(
    'name' => 'set facebook permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fb_permissions',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'toggle nicemessages'.
  $permissions['toggle nicemessages'] = array(
    'name' => 'toggle nicemessages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nicemessages',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format parsedown'.
  $permissions['use text format parsedown'] = array(
    'name' => 'use text format parsedown',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Code editor' => 'Code editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format raw_html'.
  $permissions['use text format raw_html'] = array(
    'name' => 'use text format raw_html',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use token insert'.
  $permissions['use token insert'] = array(
    'name' => 'use token insert',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'token_insert',
  );

  // Exported permission: 'use workbench_media add form'.
  $permissions['use workbench_media add form'] = array(
    'name' => 'use workbench_media add form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_media',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any album facebook publication'.
  $permissions['view any album facebook publication'] = array(
    'name' => 'view any album facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any event facebook publication'.
  $permissions['view any event facebook publication'] = array(
    'name' => 'view any event facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any link facebook publication'.
  $permissions['view any link facebook publication'] = array(
    'name' => 'view any link facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any note facebook publication'.
  $permissions['view any note facebook publication'] = array(
    'name' => 'view any note facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any photo facebook publication'.
  $permissions['view any photo facebook publication'] = array(
    'name' => 'view any photo facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any post facebook publication'.
  $permissions['view any post facebook publication'] = array(
    'name' => 'view any post facebook publication',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any question facebook publication'.
  $permissions['view any question facebook publication'] = array(
    'name' => 'view any question facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view any status facebook publication'.
  $permissions['view any status facebook publication'] = array(
    'name' => 'view any status facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own album facebook publication'.
  $permissions['view own album facebook publication'] = array(
    'name' => 'view own album facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own event facebook publication'.
  $permissions['view own event facebook publication'] = array(
    'name' => 'view own event facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own link facebook publication'.
  $permissions['view own link facebook publication'] = array(
    'name' => 'view own link facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own note facebook publication'.
  $permissions['view own note facebook publication'] = array(
    'name' => 'view own note facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own photo facebook publication'.
  $permissions['view own photo facebook publication'] = array(
    'name' => 'view own photo facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own post facebook publication'.
  $permissions['view own post facebook publication'] = array(
    'name' => 'view own post facebook publication',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
    ),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own question facebook publication'.
  $permissions['view own question facebook publication'] = array(
    'name' => 'view own question facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own status facebook publication'.
  $permissions['view own status facebook publication'] = array(
    'name' => 'view own status facebook publication',
    'roles' => array(),
    'module' => 'fb_autopost_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Office admin' => 'Office admin',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'TDWG DQIG' => 'TDWG DQIG',
    ),
    'module' => 'system',
  );

  return $permissions;
}
