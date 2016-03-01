<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_0',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with "cookie" authentication.'),
  'class' => 'GbifRestfulNewsResource',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
);
