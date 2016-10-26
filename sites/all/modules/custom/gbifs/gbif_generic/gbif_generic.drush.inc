<?php

/**
 * Implements hook_drush_command().
 */
function gbif_generic_drush_command() {
  $items = array();
  $items['generic-publish'] = array(
    'callback' => 'drush_gbif_generic_publish',
    'description' => 'Publish all generic contents.',
  );
  return $items;
}

/**
 * Publish all handled content types.
 * @throws \Exception
 * @see http://drupal.stackexchange.com/questions/89019/publish-nodes-with-drush
 * @see http://drupal.stackexchange.com/questions/129491/change-workbench-state-from-draft-to-published-programatically
 */
function drush_gbif_generic_publish() {
  $types = array('generic');
  foreach ($types as $type) {
    $count = 0;
    $query = new EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'node')
      ->propertyCondition('type', $type)
      ->execute();

    if (isset($entities['node'])) {
      foreach ($entities['node'] as $nid => $ref) {
        $node = workbench_moderation_node_current_load(node_load($nid));
        $node->log = 'CMS API deployment: state changed to published';
        $node->workbench_moderation_state_new = 'published';
        $node->workbench_moderation_state_current = 'draft';
        $node->revision = 1;
        node_save($node);
        $count++;
        unset($node);
      }
    }
    if ($count > 0) {
      drush_print($count . ' nodes of the ' . $type . ' content type have been successfully published.');
    }
    else {
      drush_print('No nodes of the ' . $type . ' content type were published.');
    }
  }

}