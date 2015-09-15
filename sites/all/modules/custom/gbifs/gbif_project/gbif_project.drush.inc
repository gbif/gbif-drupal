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
  $programme_alias = array(
    '82219' => 'programme/gbif-support',
    '82243' => 'programme/bid'
  );
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
        // handling URL alias here for programme, only for alias defined in $programme_alias
        if ($type == 'programme' && isset($programme_alias[$nid])) {
          $url_alias = drupal_get_path_alias('node/' . $node->nid);
          $url_alias_delete = db_delete('url_alias')
            ->condition('source', $url_alias)
            ->execute();
          $node->path = array('alias' => $programme_alias[$nid], 'pathauto' => FALSE);
        }
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

  // update URL alias for programme and participation/regional-collaboration
  $node_to_update = array(
    '230' => 'participation/regional-collaboration',
    '3669' => 'programme'
  );
  foreach ($node_to_update as $nid => $alias) {
    $node = node_load($nid);
    $url_alias = drupal_get_path_alias('node/' . $nid);
    $url_alias_delete = db_delete('url_alias')
      ->condition('source', $url_alias)
      ->execute();
    $node->path = array('alias' => $alias, 'pathauto' => FALSE);
    node_save($node);
    drush_print($url_alias . ' has been updated. Now ' . $alias . '.');
  }
}