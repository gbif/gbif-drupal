<?php

/**
 * @file
 * Contains GbifRestfulNewsResource__1_6.
 */

class GbifRestfulNewsResource__1_6 extends RestfulEntityBaseNode {

  /**
   * Overrides GbifRestfulNewsResource::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    $public_fields = parent::publicFieldsInfo();

    $public_fields['body'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    return $public_fields;
  }

}
