<?php

$plugin = array(
  'resource' => 'search',
  'name' => 'search__1_0',
  'label' => t('Search'),
  'description' => t('Provides basic info doing Search API searches.'),
  'data_provider_options' => array(
    'search_index' => 'node_index',
  ),
  'class' => 'RestfulSearchAPISearch',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
  // Use pass_through to expose the complete search result objects. This is
  // useful while developing to allow you to know how to do the field mappings.
  //'pass_through' => TRUE,
);
