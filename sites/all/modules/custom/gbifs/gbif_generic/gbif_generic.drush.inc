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
        $node = node_load($nid);
        $node->status = 1;
        $node->log = 'CMS API deployment: state changed to published';
        foreach ($node->workbench_moderation as $moderate) {
          $moderate->from_state = "draft";
          $moderate->state = "publish";
          $moderate->is_current = 1;
        }
        $node->workbench_moderation_state_new = "published";
        $node->workbench_moderation_state_current = "published";
        node_save($node);
        workbench_moderation_node_update($node);
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