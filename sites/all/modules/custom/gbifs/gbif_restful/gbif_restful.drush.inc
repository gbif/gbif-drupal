<?php
/**
 * @file drush utilities for GBIF Portal 16
 * @see http://www.sitepoint.com/drupal-create-drush-command/
 */

/**
 * Implements hook_drush_command().
 */
function gbif_restful_drush_command() {
  $items = array();
  $items['prepare-headless-contents'] = array(
    'callback' => 'drush_gbif_restful_prepare_headless_contents',
    'description' => 'Getting content ready for p16 project.',
    'aliases' => array('phc'),
  );
  return $items;
}

function drush_gbif_restful_prepare_headless_contents(){

  // Change what-is-gbif page to use the new node 82894 to replace node 214
  node_delete(214);
  $node_82894 = node_load(82894);
  $node_82894->path['alias'] = 'what-is-gbif';
  node_save($node_82894);
  workbench_moderation_moderate($node_82894, 'published');

  // /ipt should no longer redirect to 82906
  $node_82906 = node_load(82906);
  $node_82906->path['alias'] = '';
  node_save($node_82906);
  workbench_moderation_moderate($node_82906, 'published');

  // save the publishing data through GBIF content to ensure the image doesn't show
  foreach([82861, 82858, 82859, 82862, 82860, 82857] as $nid) {
    $node_82857 = node_load($nid);
    node_save($node_82857);
    workbench_moderation_moderate($node_82857, 'published');
  }

}