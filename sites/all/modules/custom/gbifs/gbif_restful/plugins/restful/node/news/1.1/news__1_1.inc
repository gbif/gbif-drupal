<?php

$plugin = array(
  'label' => t('News'),
  'resource' => 'news',
  'name' => 'news__1_1',
  'entity_type' => 'node',
  'bundle' => 'news',
  'description' => t('Export the news content type.'),
  'class' => 'GbifRestfulNewsResource__1_1',
  // Set the minor version.
  'minor_version' => 1,
);
