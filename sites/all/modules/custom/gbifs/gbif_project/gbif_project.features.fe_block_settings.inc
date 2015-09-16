<?php
/**
 * @file
 * gbif_project.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gbif_project_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-6775b3284eaf04e2c36a07da29e19bc4'] = array(
    'cache' => -1,
    'delta' => '6775b3284eaf04e2c36a07da29e19bc4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bvng' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bvng',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
  );

  $export['views-related_activities-related_news'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_activities-related_news',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bvng' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bvng',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
