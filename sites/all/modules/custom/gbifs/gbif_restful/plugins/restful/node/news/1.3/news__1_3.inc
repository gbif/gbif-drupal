<?php

if (module_exists('restful_token_auth')) {

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_3',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with "token" authentication.'),
  'class' => 'GbifRestfulNewsResource',
  // Set the minor version.
  'minor_version' => 3,
  // Set the authentication to token.
  'authentication_types' => array(
    'token',
  ),
);

}
