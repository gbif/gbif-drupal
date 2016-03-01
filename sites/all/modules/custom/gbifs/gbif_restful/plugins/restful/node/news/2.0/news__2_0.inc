<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__2_0',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with "cookie" authentication.'),
  'class' => 'GbifRestfulNewsResource__2_0',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
  'major_version' => 2,
  'minor_version' => 0,
  //'pass_through' => TRUE,
);
