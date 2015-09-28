<?php
/**
 * @file
 * gbif_project.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gbif_project_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_node_menu';
  $context->description = 'Set menu tab for project type';
  $context->tag = 'menu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'gbif-menu:node/82219',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Set menu tab for project type');
  t('menu');
  $export['project_node_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_view_menu';
  $context->description = 'Menu tab for project views';
  $context->tag = 'menu';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'related_projects:page_related_projects' => 'related_projects:page_related_projects',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'gbif-menu:node/82219',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu tab for project views');
  t('menu');
  $export['project_view_menu'] = $context;

  return $export;
}
