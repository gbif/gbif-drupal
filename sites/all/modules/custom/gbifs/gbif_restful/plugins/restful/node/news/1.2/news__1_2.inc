<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_2',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with "cookie" authentication.'),
  'class' => 'GbifRestfulNewsResource',
  // Set the minor version.
  'minor_version' => 2,
  // Set the authentication to "cookie".
  'authentication_types' => array(
    'cookie',
  ),
);
