<?php

/**
 * @file
 * Contains GbifRestfulNewsResource__2_0.
 */

class GbifRestfulNewsResource__2_0 extends RestfulEntityBaseNode {
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

    $public_fields['field_citation_information'] = array(
      'property' => 'field_citation_information',
    );
    $public_fields['field_country'] = array(
      'property' => 'field_country',
    );
    $public_fields['tx_about_gbif'] = array(
      'property' => 'tx_about_gbif',
    );
    $public_fields['tx_capacity_enhancement'] = array(
      'property' => 'tx_capacity_enhancement',
    );
    $public_fields['tx_audience'] = array(
      'property' => 'tx_audience',
    );
    $public_fields['tx_data_use'] = array(
      'property' => 'tx_data_use',
    );
    $public_fields['tx_informatics'] = array(
      'property' => 'tx_informatics',
    );
    $public_fields['tx_tags'] = array(
      'property' => 'tx_tags',
    );

    return $public_fields;
  }

}
