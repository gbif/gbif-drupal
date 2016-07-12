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

    $public_fields['programme'] = array(
      'property' => 'field_programme_ef',
    );

    $public_fields['call'] = array(
      'property' => 'pj_call',
    );

    $public_fields['duration'] = array(
      'property' => 'field_duration',
    );

    $public_fields['status'] = array(
      'property' => 'field_status',
    );

    $public_fields['image'] = array(
      'property' => 'field_pj_image',
    );

    $public_fields['grantType'] = array(
      'property' => 'field_pj_grant_type',
    );

    $public_fields['funder'] = array(
      'property' => 'field_co_funder',
    );

    $public_fields['gbifParticipants'] = array(
      'property' => 'field_pj_participants',
    );

    $public_fields['partners'] = array(
      'property' => 'field_pj_partners',
    );

    $public_fields['relatedNews'] = array(
      'property' => 'field_related_news',
    );

    $public_fields['relatedEvents'] = array(
      'property' => 'field_related_events',
    );

    $public_fields['relatedProjects'] = array(
      'property' => 'field_related_projects',
    );

    $public_fields['relatedResources'] = array(
      'property' => 'field_related_resources',
    );

    $public_fields['purpose'] = array(
      'property' => 'gr_purpose',
    );

    $public_fields['file'] = array(
      'property' => 'gr_file',
    );

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
    );

    return $public_fields;
  }

}
