<?php

/**
 * @file
 * Contains GbifRestfulNewsResource__2_0.
 */

class GbifRestfulNewsResource__0_1 extends RestfulEntityBaseNode {
  /**
   * Overrides \RestfulEntityBase::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    $public_fields = parent::publicFieldsInfo();

    $public_fields['title'] = array(
      'property' => 'title',
    );

    $public_fields['body'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    // attributes
    $public_fields['language'] = array(
      'property' => 'language',
    );
    $public_fields['type'] = array(
      'property' => 'type',
    );
    $public_fields['promote'] = array(
      'property' => 'promote',
    );
    $public_fields['sticky'] = array(
      'property' => 'sticky',
    );

    // fields
    $public_fields['images'] = array(
      'property' => 'field_uni_images',
      'image_styles' => array('focal_point_for_news'),
    );
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
    );
    $public_fields['unRegion'] = array(
      'property' => 'field_un_region',
    );
    $public_fields['country'] = array(
      'property' => 'field_country',
    );
    $public_fields['tagsAboutGbif'] = array(
      'property' => 'tx_about_gbif',
    );
    $public_fields['tagsCapacityEnhancement'] = array(
      'property' => 'tx_capacity_enhancement',
    );
    $public_fields['tagsAudience'] = array(
      'property' => 'tx_audience',
    );
    $public_fields['tagsDataUse'] = array(
      'property' => 'tx_data_use',
    );
    $public_fields['tagsInformatics'] = array(
      'property' => 'tx_informatics',
    );
    $public_fields['tagsDataType'] = array(
      'property' => 'field_tx_data_type',
    );
    $public_fields['tagsPurpose'] = array(
      'property' => 'field_tx_purpose',
    );
    $public_fields['tagsTopic'] = array(
      'property' => 'tx_topic',
    );
    $public_fields['tags'] = array(
      'property' => 'tx_tags',
    );

    return $public_fields;
  }

}
