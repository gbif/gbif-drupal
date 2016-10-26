<?php

/**
 * @file
 * Contains Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifScaledContents.
 */

namespace Drupal\gbif_restful\Plugin\resource;

class ResourceNodeGbifScaledContents extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * Overrides ResourceNode::publicFields().
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    // fields
    // By checking that the field exists, we allow re-using this class on
    // different tests, where different fields exist.
    if (field_info_field('field_uni_images')) {
      $public_fields['images'] = array(
        'property' => 'field_uni_images',
        'process_callbacks' => array(
          array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
        ),
        'image_styles' => array(
          'header_image',
          'inline_header_image',
          'square_thumbnail'
        ),
      );
    }

    $public_fields['researcherLocation'] = array(
      'property' => 'field_researcher_location',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue')
      ),
    );
    $public_fields['linkToResearch'] = array(
      'property' => 'field_link_to_research',
    );
    $public_fields['studyArea'] = array(
      'property' => 'field_study_area',
    );
    $public_fields['numResourceUsed'] = array(
      'property' => 'field_num_rs_used',
    );
    $public_fields['relatedGbifResources'] = array(
      'property' => 'field_related_gbif_resources',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::relatedResourcesProcess')
      ),
    );
    $public_fields['datasetUuid'] = array(
      'property' => 'field_dataset_uuid',
    );
    $public_fields['dataSource'] = array(
      'property' => 'field_data_source',
    );
    $public_fields['citationInformation'] = array(
      'property' => 'field_citation_information',
    );

    // taxonomy and tags
    $term_reference_fields = [
      'gbifArea' => 'field_gbif_area',
      'unRegion' => 'field_un_region',
      'country' => 'field_country',
      'tagsAboutGbif' => 'tx_about_gbif',
      'tagsCapacityEnhancement' => 'tx_capacity_enhancement',
      'tagsAudience' => 'tx_audience',
      'tagsDataUse' => 'tx_data_use',
      'tagsInformatics' => 'tx_informatics',
      'tagsDataType' => 'field_tx_data_type',
      'tagsPurpose' => 'field_tx_purpose',
      'tagsTopic' => 'tx_topic',
      'tags' => 'tx_tags',
    ];
    foreach ($term_reference_fields as $api_field => $content_field) {
      if (field_info_field($content_field)) {
        $public_fields[$api_field] = [
          'property' => $content_field,
          'process_callbacks' => [
            [$this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTermValue']
          ]
        ];
      }
    }

    $public_fields['user'] = array(
      'property' => 'author',
      'resource' => array(
        // The name of the resource to map to.
        'name' => 'users',
        // Determines if the entire resource should appear, or only the ID.
        'fullView' => TRUE,
        'majorVersion' => 1,
        'minorVersion' => 0,
      ),
    );

    $public_fields['__system'] = array(
      'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getSystemAttributes',
    );

    return $public_fields;
  }

}
