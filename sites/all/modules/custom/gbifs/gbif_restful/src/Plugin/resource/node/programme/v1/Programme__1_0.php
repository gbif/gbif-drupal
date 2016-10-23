<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\programme\v1\Programme__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\programme\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;
use \EntityFieldQuery;
use \EntityMetadataWrapper;

/**
 * Class Programme__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "programme:1.0",
 *   resource = "programme",
 *   label = "Programme",
 *   description = "Export programmes with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "programme"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Programme__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['acronym'] = array(
      'property' => 'field_acronym',
    );

    // image field
    $public_fields['images'] = array(
      'property' => 'field_programme_ef_image',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
      ),
      'image_styles' => array(
        'header_image',
        'inline_header_image',
        'square_thumbnail'
      ),
    );

    // entity reference
    $public_fields['funders'] = array(
      'property' => 'field_co_funder',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['relatedProjects'] = array(
      'callback' => 'Drupal\gbif_restful\Plugin\resource\node\programme\v1\Programme__1_0::getRelatedProjects'
    );

    // entity reference
    $public_fields['relatedNews'] = array(
      'property' => 'field_related_news',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    // entity reference
    $public_fields['relatedEvents'] = array(
      'property' => 'field_related_events',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    // link field
    $public_fields['relatedResources'] = array(
      'property' => 'field_related_resources',
    );

    $public_fields['file'] = array(
      'property' => 'gr_file',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::fileProcess'),
      ),
    );

    $public_fields['__system'] = array(
      'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getSystemAttributes',
    );

    return $public_fields;
  }

  /**
   *
   */
  public static function getRelatedProjects(DataInterpreterInterface $interpreter) {
    $output = array();
    $wrapper = $interpreter->getWrapper();
    $nid = $wrapper->getIdentifier();

    // Find all projects that are referring to this programme
    $ids = array();

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->fieldCondition('field_programme_ef', 'target_id', $nid, '=');
    $results = $query->execute();

    if (count($results) > 0 && isset($results['node'])) {

      foreach ($results['node'] as $nid => $item) {
        $ids[] = $nid;
      }

      $nodes = node_load_multiple($ids);
      foreach ($nodes as $project) {
        $project_wrapper = entity_metadata_wrapper('node', $project->nid);
        $node = array();
        $node['id'] = (int)$project->nid;
        $node['type'] = $project_wrapper->type();
        $node['targetUrl'] = drupal_get_path_alias('node/' . $project->nid);
        $node['title'] = $project_wrapper->label();
        $node['duration'] = array(
          'start' => (int)$project_wrapper->field_duration->value->value(),
          'end' => (int)$project_wrapper->field_duration->value2->value(),
        );

        $node['image'] = array(
          'id' => (int)$project_wrapper->field_pj_image->file->value()->fid,
          'original' => file_create_url($project_wrapper->field_pj_image->file->value()->uri),
          'filemime' => $project_wrapper->field_pj_image->file->value()->filemime,
          'styles' => array(
            'square_thumbnail' => image_style_url('square_thumbnail', $project_wrapper->field_pj_image->file->value()->uri),
          ),
        );
        $node['status'] = $project_wrapper->field_status->value();
        $node['fundingAllocated'] = (int)$project_wrapper->field_pj_funding_allocated->value();
        $node['estimatedCoFunding'] = (int)$project_wrapper->field_pj_matching_fund->value();
        $node['grantType'] = $project_wrapper->field_pj_grant_type->value();
        $output[] = $node;
      }
    }

    return $output;
  }
}
