<?php
/**
 * @file
 * gbif_vocabularies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function gbif_vocabularies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Bambara',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '00f6c614-6457-4bba-aa1a-9480efb2ec17',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bm',
          'format' => NULL,
          'safe_value' => 'bm',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bamanankan',
          'format' => NULL,
          'safe_value' => 'Bamanankan',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kwanyama',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '01146cc0-06a5-4729-80fc-831e2d545ffb',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kj',
          'format' => NULL,
          'safe_value' => 'kj',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data mobilization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '012a22bd-18a1-4eb4-aed3-43e4d993ed3d',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Occitan',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '03e2c5cc-8ad3-4faa-b3e8-343ba691a018',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'oc',
          'format' => NULL,
          'safe_value' => 'oc',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Abkhazian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0465337d-8646-4db1-b057-e5b9f3737461',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ab',
          'format' => NULL,
          'safe_value' => 'ab',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'аҧсуа бызшәа',
          'format' => NULL,
          'safe_value' => 'аҧсуа бызшәа',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Indonesian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0606b837-6dce-40c4-b135-a3c8fecbeac9',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'id',
          'format' => NULL,
          'safe_value' => 'id',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bahasa Indonesia',
          'format' => NULL,
          'safe_value' => 'Bahasa Indonesia',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tsonga',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '06d490e2-6a85-415b-9643-5d787f4acac2',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ts',
          'format' => NULL,
          'safe_value' => 'ts',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF governance',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '0a0f9d71-6a2f-469f-85d9-0abf4caa68d6',
    'vocabulary_machine_name' => 'about_gbif',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kinyarwanda',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0aac3a13-fcbc-439a-b49a-4ffd71f17d5b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'rw',
          'format' => NULL,
          'safe_value' => 'rw',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Xhosa',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0b2fc59b-e48f-41fe-8a7e-8ab7d315c3a2',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'xh',
          'format' => NULL,
          'safe_value' => 'xh',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'isiXhosa',
          'format' => NULL,
          'safe_value' => 'isiXhosa',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lolspeak',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0b554817-919f-4fac-afb8-7b8157538e49',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'xx-lolspeak',
          'format' => NULL,
          'safe_value' => 'xx-lolspeak',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Species information',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0c8efbb3-94f3-404e-84d6-7f7ea76404e7',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Conservation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0cd3e04c-35ee-4a1e-ba08-e405c0d8437a',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kanuri',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0ceb7410-c4db-4e61-82e1-97eeade454be',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kr',
          'format' => NULL,
          'safe_value' => 'kr',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chuvash',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0daf9db5-f31d-4cdb-b764-2590423acc20',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'cv',
          'format' => NULL,
          'safe_value' => 'cv',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sardinian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '111a5db9-4679-4c20-bfeb-66bb95064f58',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sc',
          'format' => NULL,
          'safe_value' => 'sc',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Malayalam',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1131ba6a-f75c-4bf0-9d3a-88d9d919bce5',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ml',
          'format' => NULL,
          'safe_value' => 'ml',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'മലയാളം',
          'format' => NULL,
          'safe_value' => 'മലയാളം',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Policymakers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '11bf4254-06bd-403e-81e2-6bd09ea785ce',
    'vocabulary_machine_name' => 'audience',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Operating system',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
    'vocabulary_machine_name' => 'term_attribute',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ecological data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '157bdf80-3a28-4900-8174-cf01a1a61bb3',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Occurrence data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17c53639-a8b6-42f6-a102-80c952a9d599',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mountain biodiversity',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '19370e22-9273-42a9-9aac-685a69e84706',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ecology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '198e0ac7-478b-40ab-866c-6579f09b0801',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Portuguese, Brazil',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1a9e5e05-93f2-4e1b-b509-3c4552e7db5b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'pt-br',
          'format' => NULL,
          'safe_value' => 'pt-br',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Português',
          'format' => NULL,
          'safe_value' => 'Português',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cree',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1f0f0264-9122-4cc1-9ea6-e3a09cb5d889',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'cr',
          'format' => NULL,
          'safe_value' => 'cr',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Amharic',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '213789fd-c446-4de2-a875-3f952be74476',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'am',
          'format' => NULL,
          'safe_value' => 'am',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'አማርኛ',
          'format' => NULL,
          'safe_value' => 'አማርኛ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Old Slavonic',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '23b2deea-d322-4ca0-81f5-5f7ef5602a33',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'cu',
          'format' => NULL,
          'safe_value' => 'cu',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mentoring',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2432beff-4c85-4410-807a-e7610681d6a4',
    'vocabulary_machine_name' => 'capacity_enhancement',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Hiri Motu',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '24a2ed6d-ac5d-46d2-9a66-1dec2fbf818a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ho',
          'format' => NULL,
          'safe_value' => 'ho',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chinese, Simplified',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '24d4c64d-d29c-45ce-9e6b-03bb76b763e3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'zh-hans',
          'format' => NULL,
          'safe_value' => 'zh-hans',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => '简体中文',
          'format' => NULL,
          'safe_value' => '简体中文',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Quechua',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '258dae77-534c-4040-819a-02bf7728297f',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'qu',
          'format' => NULL,
          'safe_value' => 'qu',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cornish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '25e89bb3-2bed-4c15-a192-3a23fe8059c6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kw',
          'format' => NULL,
          'safe_value' => 'kw',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cambodian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '263e25e9-7e5d-4647-b0a7-7fa0e6f58f71',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'km',
          'format' => NULL,
          'safe_value' => 'km',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Darwin Core Archive',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '292de05d-47fc-4513-b653-f9c80f95276a',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
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
    'name' => 'Marshallese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2bcbe015-f1bf-453e-863b-0c6e1792defe',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mh',
          'format' => NULL,
          'safe_value' => 'mh',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'National/thematic portals',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2c03ba35-c90b-4db0-b419-3c578cbd7a8d',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sample-based data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2f5fe815-e96d-4812-841c-4895813f92d4',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Species data users',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '3064bab9-8d9c-44ef-a8b1-3c6e4bb5523a',
    'vocabulary_machine_name' => 'audience',
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
    'name' => 'Norwegian Bokmål',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '31ca6367-7a91-4445-a652-aeb776b35643',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'nb',
          'format' => NULL,
          'safe_value' => 'nb',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bokmål',
          'format' => NULL,
          'safe_value' => 'Bokmål',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Irish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '33fb12ec-5535-4212-a361-18211b5cf2bb',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ga',
          'format' => NULL,
          'safe_value' => 'ga',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Gaeilge',
          'format' => NULL,
          'safe_value' => 'Gaeilge',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Academic publishing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '344d207e-4580-431d-a65c-c987c55cdb73',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Persian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3634eb9c-c52d-405f-a315-624853eddcbc',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fa',
          'format' => NULL,
          'safe_value' => 'fa',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'فارسی',
          'format' => NULL,
          'safe_value' => 'فارسی',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Welsh',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '37c6fc68-6a62-4662-8c6b-cacf51c8b09a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'cy',
          'format' => NULL,
          'safe_value' => 'cy',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cymraeg',
          'format' => NULL,
          'safe_value' => 'Cymraeg',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Igbo',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '38f50c09-0d12-431d-b1bd-76966d8bbaea',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ig',
          'format' => NULL,
          'safe_value' => 'ig',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ndonga',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '390334f2-acf6-45b7-ae63-11eecdadc75d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ng',
          'format' => NULL,
          'safe_value' => 'ng',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Marine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '391559e6-aee8-450c-a9af-a208e557e13f',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Guarani',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3983be77-d886-4124-8a8d-625c5913daa3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'gn',
          'format' => NULL,
          'safe_value' => 'gn',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Audubon Core',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3b95501d-9807-4a3e-9500-f99ded3c91b3',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Catalan',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c73ccf2-7db0-45df-bef7-58e8ba40a2d9',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ca',
          'format' => NULL,
          'safe_value' => 'ca',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Català',
          'format' => NULL,
          'safe_value' => 'Català',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Georgian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c82d9d6-f90c-40d7-9fab-f26698ac222c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ka',
          'format' => NULL,
          'safe_value' => 'ka',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Capacity project',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3cf692f4-bd0f-46b9-8292-d649b85f7b7e',
    'vocabulary_machine_name' => 'capacity_enhancement',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Serbian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3d0f6173-ea43-4bdd-ac48-c5ab86ce2a9e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sr',
          'format' => NULL,
          'safe_value' => 'sr',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Српски',
          'format' => NULL,
          'safe_value' => 'Српски',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Plinian core',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3da67a85-9022-43bb-9835-1fcdc0e26991',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Avar',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3f63375e-2c9f-4e93-b997-5e8d312ab4a3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'av',
          'format' => NULL,
          'safe_value' => 'av',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kongo',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3fa5491a-2c66-4aab-a541-b80c23354885',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kg',
          'format' => NULL,
          'safe_value' => 'kg',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data digitization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41613091-13b0-492c-b6c5-bb23b7c77396',
    'vocabulary_machine_name' => 'purpose',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Azerbaijani',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '417cb487-8976-4664-82f6-a850ed86873a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'az',
          'format' => NULL,
          'safe_value' => 'az',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'azərbaycan',
          'format' => NULL,
          'safe_value' => 'azərbaycan',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mac OS X',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41cd5a49-7a36-4c3c-8d8a-6119c5846d5d',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
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
    'name' => 'Data papers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '435a4156-b749-42e0-b9c4-a1babacb30ce',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Komi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4511d864-fb1d-42c0-8a4f-60495c229faf',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kv',
          'format' => NULL,
          'safe_value' => 'kv',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Human health',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '45a6ee69-d310-4355-8c37-b0e9b5ab5bc9',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kannada',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '467b8453-0c0b-4616-96ac-e4b05db130c3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kn',
          'format' => NULL,
          'safe_value' => 'kn',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ಕನ್ನಡ',
          'format' => NULL,
          'safe_value' => 'ಕನ್ನಡ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Setswana',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46d4481d-53d4-4a92-bd00-39ff2854a89a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tn',
          'format' => NULL,
          'safe_value' => 'tn',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Faeroese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46f1d4ef-9f1c-42f1-b0b9-bb8c2ca0adba',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fo',
          'format' => NULL,
          'safe_value' => 'fo',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Norwegian Nynorsk',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '471e2585-5c13-4336-b085-21a5e030463e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'nn',
          'format' => NULL,
          'safe_value' => 'nn',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nynorsk',
          'format' => NULL,
          'safe_value' => 'Nynorsk',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Interlingue',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '47673567-c54e-42f6-87fd-b4b0329b2a78',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ie',
          'format' => NULL,
          'safe_value' => 'ie',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Breton',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '49123467-9d74-4a62-b1de-9688fa62990a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'br',
          'format' => NULL,
          'safe_value' => 'br',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Afrikaans',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4a718ac3-9359-4aa6-8a3d-7e684942546d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'af',
          'format' => NULL,
          'safe_value' => 'af',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Galician',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4a8563da-421b-40c1-83f3-f6da12fdd7e4',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'gl',
          'format' => NULL,
          'safe_value' => 'gl',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Galego',
          'format' => NULL,
          'safe_value' => 'Galego',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF history/overview',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4b277a51-25ae-4104-bccd-2ffd9df65631',
    'vocabulary_machine_name' => 'about_gbif',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Freshwater',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4d24bab1-5d5f-4d4c-bde4-b63a7e694b36',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Venda',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4da561e9-1cbd-41f7-a2cf-759f746e67bf',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 've',
          'format' => NULL,
          'safe_value' => 've',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ukrainian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4db3fcb1-3b4d-4e9c-b123-6b59d4dee3c3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'uk',
          'format' => NULL,
          'safe_value' => 'uk',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Українська',
          'format' => NULL,
          'safe_value' => 'Українська',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Luganda',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4e80b0e1-efa1-48fc-9527-3e375eaf0346',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'lg',
          'format' => NULL,
          'safe_value' => 'lg',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '51828ec4-03a1-49d4-81fb-f6c010915c32',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tagalog',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5199b05e-a52b-470c-87f6-f4016323513b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tl',
          'format' => NULL,
          'safe_value' => 'tl',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'node portals',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '51d64971-f17e-4cbe-b4a1-aa9a47169b16',
    'vocabulary_machine_name' => 'informatics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF nodes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '53185ea2-bba9-46e0-813b-2cf141e86353',
    'vocabulary_machine_name' => 'about_gbif',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Web services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '53d6f09f-413f-41cd-bf68-02d66741080b',
    'vocabulary_machine_name' => 'data_use',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Document',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '540a0101-2bbd-4c08-b91c-ad3e6fdb4c55',
    'vocabulary_machine_name' => 'resource_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Oromo',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54592e8c-eb34-4177-a9cb-4e016a67c8e4',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'om',
          'format' => NULL,
          'safe_value' => 'om',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Corsican',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54910560-8c8a-4048-91db-107589242c72',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'co',
          'format' => NULL,
          'safe_value' => 'co',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Policy use',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54ee46b6-95e4-4c9f-bba4-3d1abec226a6',
    'vocabulary_machine_name' => 'data_use',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sindhi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '555a3f83-7d5a-497a-9593-5d91f531e1d6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sd',
          'format' => NULL,
          'safe_value' => 'sd',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bengali',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '55a8bfb1-c076-4047-9eae-8bd042602d9d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bn',
          'format' => NULL,
          'safe_value' => 'bn',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Inuktitut',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5739ea95-e4f2-49c7-94ef-52d02683ce08',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'iu',
          'format' => NULL,
          'safe_value' => 'iu',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ecosystem services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58d2aee9-cb5a-4574-b9a4-2a77e292a3fc',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF partnerships',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '597a8eb6-d33d-4bda-8d5e-6540bc67f116',
    'vocabulary_machine_name' => 'about_gbif',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Siswati',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5b17eaf5-2b0e-4731-abae-d055c147a970',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ss',
          'format' => NULL,
          'safe_value' => 'ss',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'IPT',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c306b78-0c21-40af-aecb-a03267b49c96',
    'vocabulary_machine_name' => 'informatics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Twi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5d69d3c1-752d-4ec3-956d-e7b86292e31a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tw',
          'format' => NULL,
          'safe_value' => 'tw',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Darwin Core',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5e6ba8a3-ec40-44d3-b605-e334023f7be6',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Asturian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5f0e881c-c544-487d-b892-f9c2254c07e3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ast',
          'format' => NULL,
          'safe_value' => 'ast',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Somali',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6006fad8-a507-45f6-8ff9-508b09ead5b6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'so',
          'format' => NULL,
          'safe_value' => 'so',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lingala',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6019fa0f-6086-476c-a3ae-1be9e77c2348',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ln',
          'format' => NULL,
          'safe_value' => 'ln',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Punjabi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '61f33ff2-f8ca-44bf-a68c-4eb710835a33',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'pa',
          'format' => NULL,
          'safe_value' => 'pa',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bihari',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '627ad1ce-6b3f-457d-9fb7-fb67be6f43a4',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bh',
          'format' => NULL,
          'safe_value' => 'bh',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Rhaeto-Romance',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6297fcb8-67dc-4629-9e58-b4a4ea905502',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'rm',
          'format' => NULL,
          'safe_value' => 'rm',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data analysis',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '62a89fae-5e7b-4ac3-8988-06b5136774d6',
    'vocabulary_machine_name' => 'purpose',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Manx',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '633adbf1-ebfa-4963-8c19-cc4725016dc9',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'gv',
          'format' => NULL,
          'safe_value' => 'gv',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Urdu',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '63b40f20-8ba6-4266-b1ce-ded04768c241',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ur',
          'format' => NULL,
          'safe_value' => 'ur',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'اردو',
          'format' => NULL,
          'safe_value' => 'اردو',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Javanese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '64213504-ef09-4e19-aaa3-fbaa07f6d394',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'jv',
          'format' => NULL,
          'safe_value' => 'jv',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kurdish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6477e8ea-9723-43dc-bd87-df3706a2b280',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ku',
          'format' => NULL,
          'safe_value' => 'ku',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kurdî',
          'format' => NULL,
          'safe_value' => 'Kurdî',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'MS Windows',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6666be28-a907-4d69-9308-eb1fe7300f7a',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Multimedia data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6737bd20-499e-4394-a3d8-856be5eba0e8',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Navajo',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '679f3318-1436-463d-9e6e-f6b27a761c77',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'nv',
          'format' => NULL,
          'safe_value' => 'nv',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Swedish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '67e0e522-87d9-4579-9247-7d39591de1c1',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sv',
          'format' => NULL,
          'safe_value' => 'sv',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Svenska',
          'format' => NULL,
          'safe_value' => 'Svenska',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Pali',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '69419983-1b60-4541-9cad-5bad03535416',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'pi',
          'format' => NULL,
          'safe_value' => 'pi',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kyrgyz',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '696313fb-5bbc-4403-84de-607c05ab0292',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ky',
          'format' => NULL,
          'safe_value' => 'ky',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Кыргызча',
          'format' => NULL,
          'safe_value' => 'Кыргызча',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kashmiri',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6b0cce1a-3fe3-4c6d-8116-c1d93f0f6e12',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ks',
          'format' => NULL,
          'safe_value' => 'ks',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tigrinya',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6ba82866-ff69-4bf2-a31a-a9cb8d5bf432',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ti',
          'format' => NULL,
          'safe_value' => 'ti',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kazakh',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6c9e617a-6a2e-49d6-9106-6b543cbb5c7c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kk',
          'format' => NULL,
          'safe_value' => 'kk',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Қазақ',
          'format' => NULL,
          'safe_value' => 'Қазақ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Scots Gaelic',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6cc1106d-538b-4846-9578-3404b20915e8',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'gd',
          'format' => NULL,
          'safe_value' => 'gd',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Taxonomic research',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6f20d102-38ba-48e7-8c0d-aaf5f2cda263',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chinese, Traditional',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '70178c8c-7792-47fd-8dfc-792846b9d4a0',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'zh-hant',
          'format' => NULL,
          'safe_value' => 'zh-hant',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => '繁體中文',
          'format' => NULL,
          'safe_value' => '繁體中文',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Armenian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7102b344-8ec4-48b6-a0f8-257a20ae40a8',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'hy',
          'format' => NULL,
          'safe_value' => 'hy',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Հայերեն',
          'format' => NULL,
          'safe_value' => 'Հայերեն',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Estonian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '711fd9a7-caaa-4f0a-b79a-41a089ac3782',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'et',
          'format' => NULL,
          'safe_value' => 'et',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Eesti',
          'format' => NULL,
          'safe_value' => 'Eesti',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Wolof',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '71823006-6c53-4557-b662-5eabf00ae86e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'wo',
          'format' => NULL,
          'safe_value' => 'wo',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Māori',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7290a2ad-5418-44dd-8c70-74716ab5448c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mi',
          'format' => NULL,
          'safe_value' => 'mi',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bashkir',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72c84f5e-10bf-4c92-b483-aa11e78744d0',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ba',
          'format' => NULL,
          'safe_value' => 'ba',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Zhuang',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72fdc0bc-4437-481c-a92d-a29b7c19bdd4',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'za',
          'format' => NULL,
          'safe_value' => 'za',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF regions',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '7392baa3-9929-4691-81e4-b7efc2959aaf',
    'vocabulary_machine_name' => 'about_gbif',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Uzbek',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '740587fd-7558-444d-80eb-f45a1c24f72a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'uz',
          'format' => NULL,
          'safe_value' => 'uz',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'o\'zbek',
          'format' => NULL,
          'safe_value' => 'o&#039;zbek',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'North Ndebele',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '740c9b8d-7ca0-48bd-8784-32593152326a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'nd',
          'format' => NULL,
          'safe_value' => 'nd',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data curation & quality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '74367725-c5b2-4e00-bb53-c75636be9b1d',
    'vocabulary_machine_name' => 'purpose',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fiji',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7481fe92-2172-433b-8744-ef052ff5593a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fj',
          'format' => NULL,
          'safe_value' => 'fj',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Samoan',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7532f766-0d2f-47c3-88e9-faa1bffeeec6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sm',
          'format' => NULL,
          'safe_value' => 'sm',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Dutch',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '76939c77-560d-4943-a3bb-f6273a38e6b5',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'nl',
          'format' => NULL,
          'safe_value' => 'nl',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nederlands',
          'format' => NULL,
          'safe_value' => 'Nederlands',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Japanese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '79e79429-c56c-4eca-b8e3-81f5c68d619d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ja',
          'format' => NULL,
          'safe_value' => 'ja',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => '日本語',
          'format' => NULL,
          'safe_value' => '日本語',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Slovak',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7bd94269-2d8d-4951-83fe-5f69b6d99852',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sk',
          'format' => NULL,
          'safe_value' => 'sk',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Slovenčina',
          'format' => NULL,
          'safe_value' => 'Slovenčina',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'German',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7beca521-c4c4-49bb-805c-e089c0fb7ff6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'de',
          'format' => NULL,
          'safe_value' => 'de',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Deutsch',
          'format' => NULL,
          'safe_value' => 'Deutsch',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Afar',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7bf492b9-5d04-4360-9256-cd68d95f03fe',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'aa',
          'format' => NULL,
          'safe_value' => 'aa',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Icelandic',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7d8babe8-8b1e-4447-a255-74c8e29300d6',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'is',
          'format' => NULL,
          'safe_value' => 'is',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Íslenska',
          'format' => NULL,
          'safe_value' => 'Íslenska',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Greek',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '80a998bb-17ae-499f-ad3d-f32c8f7d8683',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'el',
          'format' => NULL,
          'safe_value' => 'el',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ελληνικά',
          'format' => NULL,
          'safe_value' => 'Ελληνικά',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Macedonian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8178528c-1afb-4ca6-bce5-fe30cecfcb2f',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mk',
          'format' => NULL,
          'safe_value' => 'mk',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Македонски',
          'format' => NULL,
          'safe_value' => 'Македонски',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Slovenian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '818f91b9-695a-4e02-a93a-c061253f6b30',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sl',
          'format' => NULL,
          'safe_value' => 'sl',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Slovenščina',
          'format' => NULL,
          'safe_value' => 'Slovenščina',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Moldavian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '82d98cf7-291e-4a7f-92b3-3df4d8d56f92',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mo',
          'format' => NULL,
          'safe_value' => 'mo',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Evolution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8320fbb4-0a78-47b4-a050-2b1fb63ed6d3',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Genetic data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8342eb51-472a-48d7-933f-36780b1189fd',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sudanese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '840d48d4-4e1f-42ce-b186-88f5c52b7522',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'su',
          'format' => NULL,
          'safe_value' => 'su',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Danish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '854a6bf9-2a71-434b-8530-599bdbbb5e86',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'da',
          'format' => NULL,
          'safe_value' => 'da',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Dansk',
          'format' => NULL,
          'safe_value' => 'Dansk',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data publishing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '854eb407-fac0-4b5c-9473-b6ddc7dbf9ff',
    'vocabulary_machine_name' => 'purpose',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Modellers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '858c6273-e6b6-485e-8bb2-3e6d1ede09cc',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Turkish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '86e79581-9ca5-4913-bc5b-d9ad998ac091',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tr',
          'format' => NULL,
          'safe_value' => 'tr',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Türkçe',
          'format' => NULL,
          'safe_value' => 'Türkçe',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data quality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8903de7e-fe81-4359-9485-b0260f364059',
    'vocabulary_machine_name' => 'informatics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Czech',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a27cafa-5e11-4a19-ad73-ad7f6954f1c3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'cs',
          'format' => NULL,
          'safe_value' => 'cs',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Čeština',
          'format' => NULL,
          'safe_value' => 'Čeština',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bhutani',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a629659-8ea8-44d1-baae-88557503b987',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'dz',
          'format' => NULL,
          'safe_value' => 'dz',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data citation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a6f0542-925a-4adc-9ca9-36335e82abe2',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Biodiversity experts',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8b4a9a45-6a80-438a-a95e-7ccf3abab872',
    'vocabulary_machine_name' => 'audience',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Video',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '8c5bb93a-5623-4323-9d08-07a0ab7ab0be',
    'vocabulary_machine_name' => 'resource_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chichewa',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8c78b62e-e1c8-46d9-9373-37e1045187e7',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ny',
          'format' => NULL,
          'safe_value' => 'ny',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Finnish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f5122f1-b12b-4c53-bec1-97166b257937',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fi',
          'format' => NULL,
          'safe_value' => 'fi',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Suomi',
          'format' => NULL,
          'safe_value' => 'Suomi',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bulgarian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8ffadb03-d1ad-44e7-a2f6-7d9d161d0aee',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bg',
          'format' => NULL,
          'safe_value' => 'bg',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Български',
          'format' => NULL,
          'safe_value' => 'Български',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Yiddish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '909c4f0d-a56c-4e57-9361-a0f79cc42e77',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'yi',
          'format' => NULL,
          'safe_value' => 'yi',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Invasives',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9321fe73-3bc0-453e-aea0-9ca1b56828d0',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Climate change',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '94391d7e-1ffe-474b-89f5-243d2d89675b',
    'vocabulary_machine_name' => 'topic',
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
    'name' => 'Ossetian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '97834edd-d5c5-40db-a4f5-96a268a63a59',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'os',
          'format' => NULL,
          'safe_value' => 'os',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Turkmen',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '99942b5f-9659-499a-8dfd-dbffb5dca12f',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tk',
          'format' => NULL,
          'safe_value' => 'tk',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Maldivian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '99c014d2-56ef-47dd-ba78-7d80a7288579',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'dv',
          'format' => NULL,
          'safe_value' => 'dv',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Citizen science',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9cc37535-d63d-4360-9b5e-de71bc1ad823',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Malagasy',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9d2652ea-f919-46be-af99-3d5d3429e298',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mg',
          'format' => NULL,
          'safe_value' => 'mg',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Gujarati',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9d3b9587-bbe5-4516-a86c-7a325c8a7e09',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'gu',
          'format' => NULL,
          'safe_value' => 'gu',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Esperanto',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9d54149e-dfa4-47f2-bf4a-b5b73f1634cc',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'eo',
          'format' => NULL,
          'safe_value' => 'eo',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Scots',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9f25b79e-476f-458f-a8b0-f13e5c035d98',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sco',
          'format' => NULL,
          'safe_value' => 'sco',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Thai',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a068f68c-c650-4406-8dd0-3178f9d24a3d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'th',
          'format' => NULL,
          'safe_value' => 'th',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ภาษาไทย',
          'format' => NULL,
          'safe_value' => 'ภาษาไทย',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tonga',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a19fc0f8-5363-421a-a0d4-9fd841d584f9',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'to',
          'format' => NULL,
          'safe_value' => 'to',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Greenlandic',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a25c68d5-653e-4019-a1d7-7e0d257653d8',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'kl',
          'format' => NULL,
          'safe_value' => 'kl',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Avestan',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a2afeb26-f83e-4eda-836d-5fab054b269b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ae',
          'format' => NULL,
          'safe_value' => 'ae',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Names and checklists',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a361e3d0-6903-4e62-b4d7-2652dcea646f',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Serbo-Croatian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a4cc3c17-ed3c-42e2-bc47-56220866981b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sh',
          'format' => NULL,
          'safe_value' => 'sh',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Luxembourgish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a5045a45-8614-4675-80bb-cd015064dc8e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'lb',
          'format' => NULL,
          'safe_value' => 'lb',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Presentation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a561dc09-8fbb-4216-98c3-9bc223ffb17d',
    'vocabulary_machine_name' => 'resource_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sinhala',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a5baf987-a99c-4159-84a0-915f80e7c0bd',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'si',
          'format' => NULL,
          'safe_value' => 'si',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'සිංහල',
          'format' => NULL,
          'safe_value' => 'සිංහල',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Portuguese, International',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a73b9720-09a5-40a2-87bb-37df228b4a8d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'pt',
          'format' => NULL,
          'safe_value' => 'pt',
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
    'name' => 'Data access',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'ab6cb471-9159-44e7-8833-43b8b901855f',
    'vocabulary_machine_name' => 'purpose',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Akan',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ad0f53ff-76b2-4f40-a087-da914cdd8d96',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ak',
          'format' => NULL,
          'safe_value' => 'ak',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sesotho',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ae5fe67b-c9eb-4186-8719-060ccbaec64a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'st',
          'format' => NULL,
          'safe_value' => 'st',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kikuyu',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'af2be2ac-7720-44a5-b512-b241a5d78cf4',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ki',
          'format' => NULL,
          'safe_value' => 'ki',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Vietnamese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b1e72b6e-b521-4bd1-9b1f-085c615ecf1a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'vi',
          'format' => NULL,
          'safe_value' => 'vi',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tiếng Việt',
          'format' => NULL,
          'safe_value' => 'Tiếng Việt',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Oriya',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3451109-cb5c-4afe-a77d-1e518e6f4f5e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'or',
          'format' => NULL,
          'safe_value' => 'or',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF family',
    'description' => 'GBIF family is potentially an extended vocabulary that includes the following terms: Node managers,&nbsp;Heads of delegation, Node staff, Affiliates, Governance, Partners.',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'b3b32a4d-208d-4ba8-b204-621ab587e73f',
    'vocabulary_machine_name' => 'audience',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'South Ndebele',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b4a010f4-c6ab-4c6b-a2bc-88848e73e818',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'nr',
          'format' => NULL,
          'safe_value' => 'nr',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Standards & protocols',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b79e124c-6356-4a4f-8a52-3412fa26a64f',
    'vocabulary_machine_name' => 'informatics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Intellectual property rights',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b7a0693b-5be1-4c4f-b3ca-4a4076439903',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Inupiak',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ba410651-10f8-45d8-8aad-5014ed820aa5',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ik',
          'format' => NULL,
          'safe_value' => 'ik',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Metadata',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bb2e30bc-72c5-4c2c-90fb-b5bd15f81f2f',
    'vocabulary_machine_name' => 'data_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Shona',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bb395693-078c-4d98-9da2-f2fe39ee0c2c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sn',
          'format' => NULL,
          'safe_value' => 'sn',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Strategic application',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bd34be41-9192-4840-a714-790ed0b3e100',
    'vocabulary_machine_name' => 'data_use',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tahitian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'befb6f5f-9f92-4377-af48-3058862f3ddb',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ty',
          'format' => NULL,
          'safe_value' => 'ty',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tajik',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c1cc8d50-a41e-46ba-85d6-e2942a19be09',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tg',
          'format' => NULL,
          'safe_value' => 'tg',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Swiss German',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c25b41e8-c07d-4ab4-b1d7-e143260b0ec3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'gsw-berne',
          'format' => NULL,
          'safe_value' => 'gsw-berne',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data publishers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c39ca38a-74c6-46e9-9b68-4cf315f70e8e',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Polish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c5426626-639b-43f0-b66d-a141fe1f1a5f',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'pl',
          'format' => NULL,
          'safe_value' => 'pl',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Polski',
          'format' => NULL,
          'safe_value' => 'Polski',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tool',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'c6782d43-9d2e-422f-a566-dd4fdc61913d',
    'vocabulary_machine_name' => 'resource_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Romanian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c73ca961-0cb8-4fc9-bb5d-2d1e14478e10',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ro',
          'format' => NULL,
          'safe_value' => 'ro',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Română',
          'format' => NULL,
          'safe_value' => 'Română',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mongolian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c8ecc7e0-e8a1-496f-94e4-999e84ad5aec',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mn',
          'format' => NULL,
          'safe_value' => 'mn',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Belarusian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c8fb334a-8ff7-4a27-a0a2-bc661fdcf410',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'be',
          'format' => NULL,
          'safe_value' => 'be',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Беларуская',
          'format' => NULL,
          'safe_value' => 'Беларуская',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Burmese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c9c65c78-8247-4573-ac16-b51e35addb98',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'my',
          'format' => NULL,
          'safe_value' => 'my',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Swahili',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cd394468-9bb0-44b5-b9d1-6d479117c950',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sw',
          'format' => NULL,
          'safe_value' => 'sw',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kiswahili',
          'format' => NULL,
          'safe_value' => 'Kiswahili',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'French',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf055439-955b-47c8-98cd-c5d5991d3d90',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'fr',
          'format' => NULL,
          'safe_value' => 'fr',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Français',
          'format' => NULL,
          'safe_value' => 'Français',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Croatian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf697617-9b0e-4940-8566-5ce8b9144a34',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'hr',
          'format' => NULL,
          'safe_value' => 'hr',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Hrvatski',
          'format' => NULL,
          'safe_value' => 'Hrvatski',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sango',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf92bb0d-171f-4561-a661-3d997a81518e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sg',
          'format' => NULL,
          'safe_value' => 'sg',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Telugu',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd087473e-812e-490d-838e-4b67cb293c11',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'te',
          'format' => NULL,
          'safe_value' => 'te',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'తెలుగు',
          'format' => NULL,
          'safe_value' => 'తెలుగు',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tibetan',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd1bda58b-021d-4f04-af76-664a9c8e2b5f',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bo',
          'format' => NULL,
          'safe_value' => 'bo',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Nepali',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd1d5121d-075a-452f-a88f-e3bb4320b60e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ne',
          'format' => NULL,
          'safe_value' => 'ne',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Android',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd207e0dd-da4e-419e-a9e3-7e4ae7e3be86',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tatar',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd29d1c71-f88a-437a-b5c8-1ddf10f581ab',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'tt',
          'format' => NULL,
          'safe_value' => 'tt',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tatarça',
          'format' => NULL,
          'safe_value' => 'Tatarça',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'English, British',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd29e2942-c3ba-478d-93b0-f2771d28bd2c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'en-gb',
          'format' => NULL,
          'safe_value' => 'en-gb',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Laothian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd2a43845-121f-4a44-8d9d-03865892f28c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'lo',
          'format' => NULL,
          'safe_value' => 'lo',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Haitian Creole',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd2a80dee-c994-4d70-a26f-1959a6f495c8',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ht',
          'format' => NULL,
          'safe_value' => 'ht',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fulah',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd3de83ac-3822-4fc1-b4e6-bd1fe55f567d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ff',
          'format' => NULL,
          'safe_value' => 'ff',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Fulfulde',
          'format' => NULL,
          'safe_value' => 'Fulfulde',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Basque',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd4af2234-7375-4c75-a184-06a283dc8cca',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'eu',
          'format' => NULL,
          'safe_value' => 'eu',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Euskera',
          'format' => NULL,
          'safe_value' => 'Euskera',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Georeferencing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd4e1c6ec-a24a-4a41-ad56-2395d9b45430',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sanskrit',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd4eb523c-2688-42df-81aa-5089828486ee',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sa',
          'format' => NULL,
          'safe_value' => 'sa',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF awards',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => 'd51ad957-256f-4e7a-acbf-285cd6b0e783',
    'vocabulary_machine_name' => 'about_gbif',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Russian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd5596119-df49-4afc-b4cd-c0b2c819cc74',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ru',
          'format' => NULL,
          'safe_value' => 'ru',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Русский',
          'format' => NULL,
          'safe_value' => 'Русский',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Uyghur',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd61e5e8f-e8cd-48d0-975b-fa6ec65eae10',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ug',
          'format' => NULL,
          'safe_value' => 'ug',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Northern Sami',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd6388ec5-b14d-4787-8c90-ac206622912c',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'se',
          'format' => NULL,
          'safe_value' => 'se',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF.org',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd65b547b-6241-4edc-996f-e2dd9a6e3b6a',
    'vocabulary_machine_name' => 'data_use',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assamese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd67c348b-3f27-4af1-b93b-298af6165dbd',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'as',
          'format' => NULL,
          'safe_value' => 'as',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Interlingua',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd74f05e7-ab0b-41fa-bb64-6f7bef058f76',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ia',
          'format' => NULL,
          'safe_value' => 'ia',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Species distributions',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7ae36c3-a398-445a-b78f-23315ea04f7e',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data resource',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'd9212fee-33af-4fc9-99f6-af45c4ff07e6',
    'vocabulary_machine_name' => 'resource_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Nauru',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd9c7048d-5e00-4792-b6df-7b129015a811',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'na',
          'format' => NULL,
          'safe_value' => 'na',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Aymara',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'db89b3f8-0e2d-4f63-aff3-93f698f3b922',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ay',
          'format' => NULL,
          'safe_value' => 'ay',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Korean',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dc6581d5-0884-42d7-9ea8-e29a6696a331',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ko',
          'format' => NULL,
          'safe_value' => 'ko',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => '한국어',
          'format' => NULL,
          'safe_value' => '한국어',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Portuguese, Portugal',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ddb6a11f-4453-4ed0-833c-a81629d3fc0d',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'pt-pt',
          'format' => NULL,
          'safe_value' => 'pt-pt',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Português',
          'format' => NULL,
          'safe_value' => 'Português',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Naturalists',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'deddfd8f-6462-4e58-a3a1-eb5141d2d710',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Latvian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df5816be-c567-476f-9848-7b37df2efc8e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'lv',
          'format' => NULL,
          'safe_value' => 'lv',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Latviešu',
          'format' => NULL,
          'safe_value' => 'Latviešu',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data provenance & citation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df68044d-094c-4263-adee-2ec1c06e32f7',
    'vocabulary_machine_name' => 'informatics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lithuanian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dfa99e53-4a67-4c00-9262-4c1c6a65e42e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'lt',
          'format' => NULL,
          'safe_value' => 'lt',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lietuvių',
          'format' => NULL,
          'safe_value' => 'Lietuvių',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Biogeography',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e069cdd8-cf1e-470d-9ef0-c3917db87c1c',
    'vocabulary_machine_name' => 'topic',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Malay',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e1e7e92e-b5fd-48f5-9fb5-3858fa331bd3',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ms',
          'format' => NULL,
          'safe_value' => 'ms',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bahasa Melayu',
          'format' => NULL,
          'safe_value' => 'Bahasa Melayu',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Architecture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e26d4e52-a037-43ce-a68f-1ca5c59a6562',
    'vocabulary_machine_name' => 'informatics',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bislama',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e2f391ad-0105-4f4a-83c0-a175a6e51b28',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bi',
          'format' => NULL,
          'safe_value' => 'bi',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Hungarian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e4cc8131-3d80-42c6-8e2a-8cb554303795',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'hu',
          'format' => NULL,
          'safe_value' => 'hu',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Magyar',
          'format' => NULL,
          'safe_value' => 'Magyar',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chamorro',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e555bb28-66a1-4670-afe2-77c6794f660e',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ch',
          'format' => NULL,
          'safe_value' => 'ch',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Data holders',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e7dadb3e-13de-4bdc-a01a-3add4b8a64c9',
    'vocabulary_machine_name' => 'audience',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Latin',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e84d8c4b-b534-4170-aa9a-fe2914d25154',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'la',
          'format' => NULL,
          'safe_value' => 'la',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Latina',
          'format' => NULL,
          'safe_value' => 'Latina',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ewe',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e8ab22ee-b5ec-40e7-8d5b-3fb7db731796',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ee',
          'format' => NULL,
          'safe_value' => 'ee',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ɛʋɛ',
          'format' => NULL,
          'safe_value' => 'Ɛʋɛ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Hausa',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea5336ef-6129-4d44-ad51-aeb16e004e17',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ha',
          'format' => NULL,
          'safe_value' => 'ha',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea8d1a9c-240f-49c1-9847-21b6e19e3b61',
    'vocabulary_machine_name' => 'capacity_enhancement',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Arabic',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eac12769-549b-422f-8744-7e3991b65674',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ar',
          'format' => NULL,
          'safe_value' => 'ar',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'العربية',
          'format' => NULL,
          'safe_value' => 'العربية',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tamil',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec0f54c7-ecda-4972-a46c-e9a680e11b82',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ta',
          'format' => NULL,
          'safe_value' => 'ta',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'தமிழ்',
          'format' => NULL,
          'safe_value' => 'தமிழ்',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Albanian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'edcc0ca6-187c-48c3-b258-cfc97d159d92',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'sq',
          'format' => NULL,
          'safe_value' => 'sq',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Shqip',
          'format' => NULL,
          'safe_value' => 'Shqip',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Science use',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ee225a07-2f39-4801-9c2a-2a8ff1fdfeb4',
    'vocabulary_machine_name' => 'data_use',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Pashto',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f0a2066a-dd01-4ada-97f1-c7cf35774020',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ps',
          'format' => NULL,
          'safe_value' => 'ps',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'پښتو',
          'format' => NULL,
          'safe_value' => 'پښتو',
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
  $terms[] = array(
    'name' => 'Zulu',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f223eac3-26cd-46ed-9d3c-8f4818a6836a',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'zu',
          'format' => NULL,
          'safe_value' => 'zu',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'isiZulu',
          'format' => NULL,
          'safe_value' => 'isiZulu',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kirundi',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f2a3d8fb-02c7-4cc9-8915-2d3e3ef2725b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'rn',
          'format' => NULL,
          'safe_value' => 'rn',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Herero',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f4abdc39-762f-4079-bbf9-4d260a2d76d8',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'hz',
          'format' => NULL,
          'safe_value' => 'hz',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Maltese',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f4d02315-5d30-41d3-b39d-6128ba344fa2',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'mt',
          'format' => NULL,
          'safe_value' => 'mt',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Malti',
          'format' => NULL,
          'safe_value' => 'Malti',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bosnian',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f50ad902-98fe-4bb3-9594-5716fef04ea0',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'bs',
          'format' => NULL,
          'safe_value' => 'bs',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bosanski',
          'format' => NULL,
          'safe_value' => 'Bosanski',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Field biologists',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f691704d-b1c8-4d4a-aec9-6a50f09c01d4',
    'vocabulary_machine_name' => 'tags',
    'field_term_attributes' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Hebrew',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f8b1b8ac-6a9f-4839-9a1d-067ab918a8c7',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'he',
          'format' => NULL,
          'safe_value' => 'he',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'עברית',
          'format' => NULL,
          'safe_value' => 'עברית',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Yoruba',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fc2f4a50-0c7f-4d0c-bf1e-151bcaa6794b',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'yo',
          'format' => NULL,
          'safe_value' => 'yo',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Yorùbá',
          'format' => NULL,
          'safe_value' => 'Yorùbá',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Spanish',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fc48fc58-9b5b-4043-bf43-e6edcc6d91e5',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'es',
          'format' => NULL,
          'safe_value' => 'es',
        ),
      ),
    ),
    'field_term_native_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Español',
          'format' => NULL,
          'safe_value' => 'Español',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chechen',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'feab9cb8-8676-4bd6-897f-71d6309064c0',
    'vocabulary_machine_name' => 'language',
    'field_term_iso_639_1' => array(
      'und' => array(
        0 => array(
          'value' => 'ce',
          'format' => NULL,
          'safe_value' => 'ce',
        ),
      ),
    ),
    'field_term_native_name' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Link',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'ff25fe1c-d969-474d-bf36-fc3ff8dbcc7f',
    'vocabulary_machine_name' => 'resource_type',
    'metatags' => array(),
  );
  return $terms;
}
