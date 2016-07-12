<?php

/**
 * @file
 * Contains Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifScaledContents.
 */

namespace Drupal\gbif_restful\Plugin\resource;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

class ResourceNodeGbifScaledContents extends ResourceNodeGbif implements ResourceNodeGbifInterface {

  /**
   * Overrides ResourceNode::publicFields().
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    unset($public_fields['self']);
    unset($public_fields['label']);

    $public_fields['type'] = array(
      'property' => 'type',
    );

    $nid = arg(3);
    $node = node_load($nid);
    if ($node->path['alias'] != null) {
      $public_fields['targetUrl'] = array(
        'callback' => 'Drupal\gbif_restful\Plugin\resource\ResourceNodeGbif::getTargetUrl',
      );
    }

    $public_fields['featuredSearchTerms'] = array(
      'property' => 'field_featured_search_terms',
    );

    $public_fields['title'] = array(
      'property' => 'title',
    );

    $public_fields['summary'] = array(
      'property' => 'body',
      'sub_property' => 'summary',
    );

    $public_fields['body'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    // attributes
    $public_fields['language'] = array(
      'property' => 'language',
    );
    $public_fields['promote'] = array(
      'property' => 'promote',
    );
    $public_fields['sticky'] = array(
      'property' => 'sticky',
    );
    $public_fields['created'] = array(
      'property' => 'created',
    );

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
          'focal_point_for_news',
          'square_thumbnail',
          'masthead__mobile',
          'masthead__tablet',
          'masthead__laptop',
          'masthead__desktop',
        ),
      );
    }

    $public_fields['researcherLocation'] = array(
      'property' => 'field_researcher_location',
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
    $public_fields['gbifArea'] = array(
      'property' => 'field_gbif_area',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['unRegion'] = array(
      'property' => 'field_un_region',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['country'] = array(
      'property' => 'field_country',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsAboutGbif'] = array(
      'property' => 'tx_about_gbif',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsCapacityEnhancement'] = array(
      'property' => 'tx_capacity_enhancement',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsAudience'] = array(
      'property' => 'tx_audience',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsDataUse'] = array(
      'property' => 'tx_data_use',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsInformatics'] = array(
      'property' => 'tx_informatics',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsDataType'] = array(
      'property' => 'field_tx_data_type',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsPurpose'] = array(
      'property' => 'field_tx_purpose',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tagsTopic'] = array(
      'property' => 'tx_topic',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );
    $public_fields['tags'] = array(
      'property' => 'tx_tags',
      'process_callbacks' => array(
        array($this, 'getTermValue')
      ),
    );

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

  /**
   * @param array $value
   * @return array
   */
  public function getTermValue($value) {
    $output = array();
    $terms = taxonomy_term_load_multiple($value);
    foreach ($terms as $term) {
      $term->id = $term->tid;
      unset($term->tid, $term->vid, $term->description, $term->format, $term->weight, $term->uuid, $term->vocabulary_machine_name, $term->field_iso2);
      // legacy attributes
      foreach (array('field_ims_keyword_id', 'ge_ims_kp_id') as $field) {
        if (isset($term->$field)) {
          unset($term->$field);
        }
      }
      $output[] = $term;
    }
    return $output;
  }
}
