<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\event\v1\Event__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\event\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;
use DateTime;
use DateTimeZone;

/**
 * Class Event__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "event:1.0",
 *   resource = "event",
 *   label = "Event",
 *   description = "Export events with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "event"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Event__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['description'] = array(
      'property' => 'ge_desc_long',
      'sub_property' => 'value',
    );

    // date field
    $public_fields['date'] = array(
      'property' => 'ge_date_ical',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getDateValue')
      ),
    );

    $public_fields['dateStart'] = array(
      'property' => 'ge_date_ical',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\node\event\v1\Event__1_0::getDateStartTimestamp')
      ),
    );

    $public_fields['dateEnd'] = array(
      'property' => 'ge_date_ical',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\node\event\v1\Event__1_0::getDateEndTimestamp')
      ),
    );

    $public_fields['dateText'] = array(
      'property' => 'ge_date_text',
    );

    $public_fields['audience'] = array(
      'property' => 'ge_audience',
      'sub_property' => 'value',
    );

    $public_fields['participants'] = array(
      'property' => 'ge_participants',
      'sub_property' => 'value',
    );

    $public_fields['venue'] = array(
      'property' => 'ge_venue',
    );

    $public_fields['location'] = array(
      'property' => 'ge_location',
    );

    // @todo Single value term field
    $public_fields['venueCountry'] = array(
      'property' => 'ge_venue_country',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['contact'] = array(
      'property' => 'ge_contact_info',
      'sub_property' => 'value',
    );

    $public_fields['organizingParticipant'] = array(
      'property' => 'ge_organising_participants',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['eventLanguage'] = array(
      'property' => 'ge_language',
    );

    $public_fields['eventStatus'] = array(
      'property' => 'ge_status',
    );

    $public_fields['eventResources'] = array(
      'property' => 'ge_lib_resources',
      'sub_property' => 'value',
    );

    $public_fields['eventImage'] = array(
      'property' => 'ge_image',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
      ),
    );

    $public_fields['eventResourcesFile'] = array(
      'property' => 'ge_resources',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::fileProcess'),
      ),
    );

    $public_fields['__system'] = array(
      'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getSystemAttributes',
    );

    return $public_fields;
  }

  public function getDateStartTimestamp($value) {
    return strtotime($value['value']);
    // $dt = new DateTime('@' . $start);
    // $dt->setTimeZone(new DateTimeZone($value['timezone']));
    // $// start_new = $dt->format('c');
    // $start_timestamp = strtotime($start_new);
  }

  public function getDateEndTimestamp($value) {
    return strtotime($value['value2']);
  }

}
