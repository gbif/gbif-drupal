<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\node\generic\v1\Generic__1_0.
 */

namespace Drupal\gbif_restful\Plugin\resource\node\generic\v1;

use Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif;

/**
 * Class Generic__1_0
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "generic:1.0",
 *   resource = "generic",
 *   label = "Generic",
 *   description = "Export the news with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "generic"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Generic__1_0 extends ResourceNodeGbif {

  /**
   * Overrides ResourceNode::publicFields().
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    if (field_info_field('field_category_upper')) {
      $public_fields['category_upper'] = array(
        'property' => 'field_category_upper'
      );
    }

    if (field_info_field('field_category_lower')) {
      $public_fields['category_lower'] = array(
        'property' => 'field_category_lower'
      );
    }

    // Use raw markdown text for from body.
    if (isset($public_fields['body'])) {
      $public_fields['body'] = [
        'property' => 'body'
      ];
    }

    if (field_info_field('field_uni_images')) {
      $public_fields['images'] = array(
        'property' => 'field_uni_images',
        'process_callbacks' => array(
          array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::imageProcess'),
        ),
        'image_styles' => array(
          'focal_point_for_news',
          'prose_image_for_desktop',
          'square_thumbnail',
          'masthead__mobile',
          'masthead__tablet',
          'masthead__laptop',
          'masthead__desktop',
        ),
      );
    }

    $public_fields['files'] = array(
      'property' => 'field_attached_files',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::fileProcess'),
      ),
    );

    $public_fields['linkBlocks'] = [
      'property' => 'field_links_block',
    ];

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

    $public_fields['translationSource'] = array(
      'property' => 'field_translation_source_generic',
      'process_callbacks' => array(
        array($this, 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getEntityValue')
      ),
    );

    $public_fields['__system'] = array(
      'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getSystemAttributes',
    );

    return $public_fields;
  }
}
