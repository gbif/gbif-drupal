<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\project\v1\Project__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\project\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Project__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "project:1.0",
 *   resource = "project",
 *   label = "Project",
 *   description = "Export project with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "project"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Project__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['titleForDisplay'] = array(
      'property' => 'field_title_for_display',
    );

    unset($public_fields['body']);
    $public_fields['description'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    $public_fields['programme'] = array(
      'property' => 'field_programme_ef',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['call'] = array(
      'property' => 'pj_call',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['duration'] = array(
      'property' => 'field_duration',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getDateValue')
      ),
    );

    $public_fields['status'] = array(
      'property' => 'field_status',
    );

    $public_fields['image'] = array(
      'property' => 'field_pj_image',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
      ),
    );

    $public_fields['grantType'] = array(
      'property' => 'field_pj_grant_type',
    );

    $public_fields['fundingAllocated'] = array(
      'property' => 'field_pj_funding_allocated',
    );

    $public_fields['estimatedCoFunding'] = array(
      'property' => 'field_pj_matching_fund',
    );

    $public_fields['funder'] = array(
      'property' => 'field_co_funder',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['gbifParticipants'] = array(
      'property' => 'field_pj_participants',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['partners'] = array(
      'property' => 'field_pj_partners',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['relatedNews'] = array(
      'property' => 'field_related_news',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['relatedEvents'] = array(
      'property' => 'field_related_events',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['relatedProjects'] = array(
      'property' => 'field_related_projects',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['relatedResources'] = array(
      'property' => 'field_related_resources',
    );

    $public_fields['tagsPurpose'] = array(
      'property' => 'gr_purpose',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue'),
      ),
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

}
