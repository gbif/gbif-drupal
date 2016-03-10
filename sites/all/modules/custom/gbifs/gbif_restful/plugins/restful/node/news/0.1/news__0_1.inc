<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__0_1',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type with "cookie" authentication.'),
  'class' => 'GbifRestfulNewsResource__0_1',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
  'major_version' => 0,
  'minor_version' => 1,
  //'pass_through' => TRUE,
);
