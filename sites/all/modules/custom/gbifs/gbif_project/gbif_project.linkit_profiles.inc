<?php
/**
 * @file
 * gbif_project.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function gbif_project_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'related_resources';
  $linkit_profile->admin_title = 'Related resources';
  $linkit_profile->admin_description = 'Profile to link to resource nodes.';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_page' => 0,
        'comment_node_call' => 0,
        'comment_node_event' => 0,
        'comment_node_featureddataset' => 0,
        'comment_node_usesofdata' => 0,
        'comment_node_gbif_participant' => 0,
        'comment_node_generictemplate' => 0,
        'comment_node_newsarticle' => 0,
        'comment_node_dir_organization' => 0,
        'comment_node_programme' => 0,
        'comment_node_project' => 0,
        'comment_node_resource' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'resource' => 'resource',
        'page' => 0,
        'call' => 0,
        'event' => 0,
        'featureddataset' => 0,
        'usesofdata' => 0,
        'gbif_participant' => 0,
        'generictemplate' => 0,
        'newsarticle' => 0,
        'dir_organization' => 0,
        'programme' => 0,
        'project' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'audio' => 0,
        'image' => 0,
        'video' => 0,
        'default' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'opportunities' => 0,
        'regions' => 0,
        'countries' => 0,
        'organizations' => 0,
        'thematic_tags' => 0,
        'corenews' => 0,
        'about_gbif' => 0,
        'data_analysis_and_use' => 0,
        'audience' => 0,
        'capacity_enhancement' => 0,
        'data_type' => 0,
        'data_use' => 0,
        'informatics' => 0,
        'internal_tags' => 0,
        'language' => 0,
        'purpose' => 0,
        'resource_type' => 0,
        'tags' => 0,
        'term_attribute' => 0,
        'topic' => 0,
        'participant' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['related_resources'] = $linkit_profile;

  return $export;
}
