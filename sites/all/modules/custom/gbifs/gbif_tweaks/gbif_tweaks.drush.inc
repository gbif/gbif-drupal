<?php
/**
 * @file drush utilities for GBIF Portal
 * @see http://www.sitepoint.com/drupal-create-drush-command/
 */

/**
 * Implements hook_drush_command().
 */
function gbif_tweaks_drush_command() {
  $items = array();
  $items['stop-auto-sync'] = array(
    'description' => 'Stop synchronizing with external data source.',
    'aliases' => array('sas'),
  );
  $items['resume-auto-sync'] = array(
    'description' => 'Resume synchronizing with external data source.',
    'aliases' => array('ras'),
  );
  $items['prepare-headless-contents'] = array(
    'description' => 'Getting content ready for p16 project.',
    'aliases' => array('phc'),
  );
  $items['prepare-prev-next-index'] = array(
    'description' => 'Refresh the prev_next index.',
    'aliases' => array('ppni'),
  );
  $items['url-alias-rewrite'] = array(
    'description' => 'Rewrite URL alias.',
    'aliases' => array('uar'),
  );
  return $items;
}

function drush_stop_auto_sync() {
  variable_set('gbif_tweaks_sync_status', 'halted');
  drupal_set_message('External data source syncing stopped.', 'status');
}

function drush_resume_auto_sync() {
  variable_set('gbif_tweaks_sync_status', 'normal');
  drupal_set_message('External data source syncing resumed.', 'status');
}

function drush_gbif_tweaks_prepare_headless_contents(){

  // Change what-is-gbif page to use the new node 82894 to replace node 214
  node_delete(214);
  $node_82894 = workbench_moderation_node_current_load(node_load(82894));
  $node_82894->path['alias'] = 'what-is-gbif';
  $node_82894->path['pathauto'] = 0;
  $node_82894->revision = 1;
  $node_82894->workbench_moderation_state_new = 'published';
  $node_82894->workbench_moderation_state_current = 'draft';
  $node_82894->log = 'CMS API deployment: URL change for portal16';
  node_save($node_82894);

  // /ipt should no longer redirect to 82906
  $node_82906 = workbench_moderation_node_current_load(node_load(82906));
  $node_82906->path['alias'] = '';
  $node_82894->path['pathauto'] = 0;
  $node_82906->revision =1;
  $node_82906->workbench_moderation_state_new = 'published';
  $node_82906->workbench_moderation_state_current = 'draft';
  $node_82906->log = 'CMS API deployment: URL change for portal16';
  node_save($node_82906);

}

function drush_gbif_tweaks_prepare_prev_next_index() {
  prev_next_reindex();
  $max_nid = variable_get('prev_next_index_nid', 0);
  if ($max_nid) {
    $batch_size = 700;
    $last_nid = FALSE;
    $cond = _prev_next_node_types_sql();

    timer_start('prev_next_cron');
    $result = db_query_range("SELECT nid FROM {node} WHERE nid <= :nid AND status = 1 $cond ORDER BY nid DESC", 0, $batch_size, array(':nid' => $max_nid));
    $count = 0;

    foreach ($result as $row) {
      // Remove existing data for this node.
      db_delete('prev_next_node')
        ->condition('nid', $row->nid)
        ->execute();
      //_prev_next_modify_pointing_nodes($row->nid);
      _prev_next_add($row->nid);
      // Update nodes that might point to this one.

      // Note that we have indexed at least one node.
      $last_nid = $row->nid;
      $count++;
    }

    $time = timer_read('prev_next_cron');

    if ($last_nid !== FALSE) {
      // Prepare a starting point for the next run.
      variable_set('prev_next_index_nid', $last_nid - 1);
    }
    else {
      // If all nodes have been indexed, set to zero to skip future cron runs.
      variable_set('prev_next_index_nid', 0);
    }
    if ($count) watchdog('prev_next', 'Indexed %count nodes in %time milliseconds.', array('%count' => $count, '%time' => $time));

    $total = db_query("SELECT COUNT(nid) FROM {node} WHERE status = 1 $cond")->fetchField();
    $completed = db_query("SELECT COUNT(nid) FROM {prev_next_node}")->fetchField();
    $remaining = max(0, $total - $completed);
    drupal_set_message(t('Indexed %count nodes for the Prev/Next index. There are %remaining items left to index.', array(
      '%count' => $count,
      '%remaining' => $remaining,
    )));
  }
}

function drush_gbif_tweaks_url_alias_rewrite() {
  $bundles = [
    'news',
    'data_use',
    'programme',
    'project',
    'event',
    'resource',
    'generic',
  ];
  $patterns = [
    '|newsroom/news/|',
    '|newsroom/uses/|',
    '|programme/|',
    '|project/|',
    '|event/|',
    '|resource/|',
    '|generic/portal16/|',
  ];
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', $bundles, 'IN');
  $result = $query->execute();

  if (isset($result['node']) && count($result['node']) > 0) {
    foreach ($result['node'] as $node) {
      $matched = 0;
      $node = node_load($node->nid);
      $alias = drupal_get_path_alias('node/' . $node->nid);
      $new_alias = preg_replace($patterns, '', $alias, -1, $matched);
      if ($matched > 0) {
        // check if the $new_alias is redirecting to something else.
        // if so, reverse the redirection.
        $redirect_results = db_select('redirect', 'r')
          ->fields('r')
          ->condition('source', $new_alias, '=')
          ->execute()
          ->fetchAll();

        if (count($redirect_results)) {
          foreach ($redirect_results as $redirect) {
            $new_source = $redirect->redirect;
            $new_redirect = $redirect->source;
            $redirect->source = $new_source;
            $redirect->redirect = $new_redirect;
            redirect_save($redirect);
            drupal_set_message(t('Redirect @source to @target.', array(
              '@source' => $new_source,
              '@target' => $new_redirect,
            )));
          }
        }

        // check if there are multiple entries of the same alias, delete them.
        $alias_results = db_select('url_alias', 'u')
          ->fields('u')
          ->condition('alias', $new_alias, '=')
          ->execute()
          ->fetchAll();

        if (count($alias_results)) {
          foreach ($alias_results as $a) {
            path_delete($a->pid);
            drupal_set_message(t('Alias @alias to @source deleted.', array(
              '@alias' => $a->alias,
              '@source' => $a->source,
            )));
          }
        }

        $node->path = [
          'path_auto' => 0,
          'alias' => $new_alias,
        ];
        if (isset($node->workbench_moderation_state_current)) {
          $node->revision = 1;
          $node->workbench_moderation_state_new = 'published';
          $node->workbench_moderation_state_current = 'draft';
        }
        $node->log = 'CMS API deployment: URL prefix change for portal16';
        node_save($node);
      }
    }
  }
}