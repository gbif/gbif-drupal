<?php
/**
 * @file
 * gbif_resource.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function gbif_resource_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Marathi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a2a6651-1d3c-49ad-a869-c9e38ed2e3c4',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mr',
          'format' => NULL,
          'safe_value' => 'mr',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Italian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '31781b3b-05fe-4679-8480-8bcdb95726a6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'it',
          'format' => NULL,
          'safe_value' => 'it',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Italiano',
          'format' => NULL,
          'safe_value' => 'Italiano',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Filipino',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '424aa4c5-f034-42c8-a3db-3d0cc1ed874a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fil',
          'format' => NULL,
          'safe_value' => 'fil',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'English',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '974767e1-faea-48ec-8332-7520b2bc1148',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'en',
          'format' => NULL,
          'safe_value' => 'en',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Hindi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a9f9700e-246a-467b-9584-ca6fc86eef02',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'hi',
          'format' => NULL,
          'safe_value' => 'hi',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'हिन्दी',
          'format' => NULL,
          'safe_value' => 'हिन्दी',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Frisian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f10e0262-8c16-48d5-a008-4c939504409d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fy',
          'format' => NULL,
          'safe_value' => 'fy',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Frysk',
          'format' => NULL,
          'safe_value' => 'Frysk',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
