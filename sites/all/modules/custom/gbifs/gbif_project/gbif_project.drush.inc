<?php

/**
* Implements hook_drush_command().
*/
function gbif_project_drush_command() {
  $items = array();
  $items['gbif-project-publish'] = array(
    'callback' => 'drush_gbif_project_publish',
    'description' => 'Publish all contents in project, programme, call and organisation.',
  );
  return $items;
}

/**
 * Publish all handled content types.
 * @throws \Exception
 * @see http://drupal.stackexchange.com/questions/89019/publish-nodes-with-drush
 */
function drush_gbif_project_publish() {
  $types = array('call', 'project', 'programme', 'dir_organization');
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