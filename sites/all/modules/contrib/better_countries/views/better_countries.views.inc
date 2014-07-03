<?php

/**
 * Implements hook_views_data().
 */
function better_countries_views_data_alter(&$data) {
  $data['countries_country'][BC_PREFIX . 'custom_code'] = array(
    'title' => t('Custom Code'),
    'help' => t('The custom code assigned to the country.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'property' => 'custom_code'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['countries_country'][BC_PREFIX . 'pin_city'] = array(
    'title' => t('Pin City'),
    'help' => t('The pin city assigned to the country.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'property' => 'pin_city'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['countries_country'][BC_PREFIX . 'pin_latitude'] = array(
    'title' => t('Pin city latitude'),
    'help' => t('The latitude of the pin city assigned to the country.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'property' => 'pin_latitude'
    ),
  );
  $data['countries_country'][BC_PREFIX . 'pin_longitude'] = array(
    'title' => t('Pin city longitude'),
    'help' => t('The longitude of the pin city assigned to the country.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string_numeric',
      'property' => 'pin_longitude'
    ),
  );
}
