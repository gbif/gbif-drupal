<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_5',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with "cookie" authentication.'),
  'class' => 'GbifRestfulNewsResource__1_5',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
  'minor_version' => 5,
);
