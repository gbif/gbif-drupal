<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\gbif_participant\v1\GbifParticipant__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\gbif_participant\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class GbifParticipant__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "gbif_participant:1.0",
 *   resource = "gbif_participant",
 *   label = "GBIF Participant",
 *   description = "Export participant information with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "gbif_participant"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class GbifParticipant__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    unset($public_fields['summary'], $public_fields['body']);

    $public_fields['participantID'] = array(
      'property' => 'gp_id',
    );

    $public_fields['participantIso2'] = array(
      'property' => 'gp_iso2',
    );

    // date field
    $public_fields['nodeEstablished'] = array(
      'property' => 'gp_node_established',
    );

    $public_fields['hasMandate'] = array(
      'property' => 'gp_has_mandate',
    );

    $public_fields['history'] = array(
      'property' => 'gp_history',
      'sub_property' => 'value',
    );

    $public_fields['visionMission'] = array(
      'property' => 'gp_vision_mission',
      'sub_property' => 'value',
    );

    $public_fields['structure'] = array(
      'property' => 'gp_structure',
      'sub_property' => 'value',
    );

    $public_fields['nationalFunding'] = array(
      'property' => 'gp_national_funding',
      'sub_property' => 'value',
    );

    // link field
    $public_fields['socialMedia'] = array(
      'property' => 'gp_comm_social',
    );

    // link field
    $public_fields['rssFeed'] = array(
      'property' => 'gp_comm_rss',
    );

    // link field
    $public_fields['newsletter'] = array(
      'property' => 'gp_comm_newsletter',
    );

    // link field
    $public_fields['otherLinks'] = array(
      'property' => 'gp_other_links',
    );

    // link field
    $public_fields['quickLinks'] = array(
      'property' => 'gp_quick_links',
    );

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
    );

    return $public_fields;
  }

}
