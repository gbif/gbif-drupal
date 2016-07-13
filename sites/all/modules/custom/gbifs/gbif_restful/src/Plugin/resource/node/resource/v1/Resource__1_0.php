<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\resource\v1\Resource__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\resource\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface;
use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Resource__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "resource:1.0",
 *   resource = "resource",
 *   label = "Resource",
 *   description = "Export resources with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "resource"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Resource__1_0 extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['alternativeTitle'] = array(
      'property' => 'gr_alternative_title',
    );

    $public_fields['shortTitle'] = array(
      'property' => 'gr_short_title',
    );

    unset($public_fields['body']);
    $public_fields['description'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    $public_fields['author'] = array(
      'property' => 'gr_author',
      'sub_property' => 'value',
    );

    $public_fields['publisher'] = array(
      'property' => 'gr_publisher',
      'sub_property' => 'value',
    );

    $public_fields['audience'] = array(
      'property' => 'gr_audience',
      'sub_property' => 'value',
    );

    $public_fields['abstract'] = array(
      'property' => 'gr_abstract',
      'sub_property' => 'value',
    );

    $public_fields['citation'] = array(
      'property' => 'gr_citation',
      'sub_property' => 'value',
    );

    $public_fields['contributor'] = array(
      'property' => 'gr_contributor',
      'sub_property' => 'value',
    );

    $public_fields['rights'] = array(
      'property' => 'gr_rights',
      'sub_property' => 'value',
    );

    $public_fields['rightsHolder'] = array(
      'property' => 'gr_rights_holder',
      'sub_property' => 'value',
    );

    $public_fields['dateOfPublication'] = array(
      'property' => 'gr_date_of_publication',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getDateValue')
      ),
    );

    $public_fields['numberOfDownloads'] = array(
      'property' => 'gr_number_of_downloads',
    );

    $public_fields['resourceType'] = array(
      'property' => 'gr_resource_type',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['resourceLanguage'] = array(
      'property' => 'gr_language',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['purpose'] = array(
      'property' => 'gr_purpose',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['dataType'] = array(
      'property' => 'gr_data_type',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tags'] = array(
      'property' => 'tx_tags',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tagsAudience'] = array(
      'property' => 'tx_audience',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tagsDataUse'] = array(
      'property' => 'tx_data_use',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tagsTopic'] = array(
      'property' => 'tx_topic',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tagsAboutGbif'] = array(
      'property' => 'tx_about_gbif',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tagsCapacityEnhancement'] = array(
      'property' => 'tx_capacity_enhancement',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['tagsInformatics'] = array(
      'property' => 'tx_informatics',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );

    $public_fields['image'] = array(
      'property' => 'gr_image',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
      ),
    );

    $public_fields['file'] = array(
      'property' => 'gr_file',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::fileProcess'),
      ),
    );

    $public_fields['resourceUrl'] = array(
      'property' => 'gr_url',
    );

    return $public_fields;
  }

}
