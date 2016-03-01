<?php

/**
 * @file
 * Contains GbifRestfulNewsResource__1_1.
 */

class GbifRestfulNewsResource__1_1 extends GbifRestfulNewsResource {

  /**
   * Overrides GbifRestfulNewsResource::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    $public_fields = parent::publicFieldsInfo();
    unset($public_fields['self']);
    return $public_fields;
  }
}
