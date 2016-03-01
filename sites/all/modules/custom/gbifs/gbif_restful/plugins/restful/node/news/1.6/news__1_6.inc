<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_6',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type in XML format.'),
  'class' => 'GbifRestfulNewsResource__1_6',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
  'minor_version' => 6,
  // Output the data in XML following the common HAL conventions.
  'formatter' => 'hal_xml',
);
