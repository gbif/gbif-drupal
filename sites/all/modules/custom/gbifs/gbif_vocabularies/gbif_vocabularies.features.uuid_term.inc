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
    'name' => 'Croatia',
    'description' => 'Croatia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '001d26bb-0911-4110-a321-1bb7c05fd0f6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HR',
          'format' => NULL,
          'safe_value' => 'HR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Swaziland',
    'description' => 'Swaziland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '006bba8e-da31-4829-bded-4aa629f62604',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SZ',
          'format' => NULL,
          'safe_value' => 'SZ',
        ),
      ),
    ),
  );
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
  );
  $terms[] = array(
    'name' => 'Protected areas',
    'description' => 'Protected areas',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0120de7c-0298-4e29-bf4d-435b9d2f5b24',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 253,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Data mobilization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '012a22bd-18a1-4eb4-aed3-43e4d993ed3d',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'New Caledonia',
    'description' => 'New Caledonia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0260cfab-1808-431c-90de-36fe211fbcd9',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NC',
          'format' => NULL,
          'safe_value' => 'NC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bhutan',
    'description' => 'Bhutan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '03881ea3-d3ec-42f9-930c-ee800b046060',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BT',
          'format' => NULL,
          'safe_value' => 'BT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Venezuela',
    'description' => 'Venezuela',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '03cbec04-84b3-48ad-aed5-3c9aecd6cd6f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VE',
          'format' => NULL,
          'safe_value' => 'VE',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Armenia',
    'description' => 'Armenia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0483fe20-ca53-4659-94a9-a64dd89a8b8c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AM',
          'format' => NULL,
          'safe_value' => 'AM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Turks and Caicos Islands',
    'description' => 'Turks and Caicos Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '04eff327-d952-4400-8de8-928873c1b359',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TC',
          'format' => NULL,
          'safe_value' => 'TC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Developers',
    'description' => 'Software developers',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0631f1e1-e0fe-45f4-98d1-b1508171f51a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 242,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'IPT',
    'description' => 'GBIF Integrated Publishing Toolkit',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '06db13eb-3e93-4255-a225-a7640cec7716',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 27,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF Nodes',
    'description' => 'Node staff members',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '07c3a7ca-0d7c-4558-868a-ee74e1b1a302',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 163,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'DataONE',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '07cf1267-d1fb-4456-9d09-62008a136fd9',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Djibouti',
    'description' => 'Djibouti',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08920d10-1946-4f7c-816d-20e6823df3fe',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DJ',
          'format' => NULL,
          'safe_value' => 'DJ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rwanda',
    'description' => 'Rwanda',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08c4b11d-3ffd-4921-b48e-609d8914ca32',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RW',
          'format' => NULL,
          'safe_value' => 'RW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Serbia',
    'description' => 'Serbia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08f783b5-135a-4032-bf20-6059af843022',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RS',
          'format' => NULL,
          'safe_value' => 'RS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'American Samoa',
    'description' => 'American Samoa',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '09143a1f-b435-432c-94dc-a3ef45899a8a',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AS',
          'format' => NULL,
          'safe_value' => 'AS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CEPDEC-SEP',
    'description' => 'CEPDEC programme',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '092ec924-67cc-401d-acf8-0cdd694d08b4',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 15,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF governance',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '0a0f9d71-6a2f-469f-85d9-0abf4caa68d6',
    'vocabulary_machine_name' => 'about_gbif',
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
  );
  $terms[] = array(
    'name' => 'Chinese Taipei',
    'description' => '<p>Chinese Taipei</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0af42d71-9c2b-4ac5-9117-a5d03a59db16',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TW',
          'format' => NULL,
          'safe_value' => 'TW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Society for Conservation Biology Global; Society for Conservation Biology Europe Section',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0b043372-c9c1-437e-8ef1-a464396e69e7',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(),
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
  );
  $terms[] = array(
    'name' => 'Africa',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0bd21336-3f92-421a-9669-c2441f58ac85',
    'vocabulary_machine_name' => 'continent',
  );
  $terms[] = array(
    'name' => 'Indonesia',
    'description' => 'Indonesia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0c76b8dd-1734-4b7c-9453-97c1b416340f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ID',
          'format' => NULL,
          'safe_value' => 'ID',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Species information',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0c8efbb3-94f3-404e-84d6-7f7ea76404e7',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 19,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Conservation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0cd3e04c-35ee-4a1e-ba08-e405c0d8437a',
    'vocabulary_machine_name' => 'topic',
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
  );
  $terms[] = array(
    'name' => 'Wallis and Futuna',
    'description' => 'Wallis and Futuna',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0de3395d-76b9-4555-a8fe-9fcf7d846b0c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'WF',
          'format' => NULL,
          'safe_value' => 'WF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GMP',
    'description' => 'GBIF Metadata Profile',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '10b3e7a1-d2a4-4d54-8153-8ab14376042c',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 160,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Paraguay',
    'description' => 'Paraguay',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '11274914-284e-4d90-b14c-50696f74750f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PY',
          'format' => NULL,
          'safe_value' => 'PY',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Martinique',
    'description' => 'Martinique',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '112d1aea-1e47-4baf-acd0-25c00577cba6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MQ',
          'format' => NULL,
          'safe_value' => 'MQ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Decision makers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '11bf4254-06bd-403e-81e2-6bd09ea785ce',
    'vocabulary_machine_name' => 'audience',
  );
  $terms[] = array(
    'name' => 'Operating system',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
    'vocabulary_machine_name' => 'term_attribute',
    'field_term_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'OS',
          'format' => NULL,
          'safe_value' => 'OS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Malawi',
    'description' => 'Malawi',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '12884023-b297-4ca2-b9ee-77583cedb059',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MW',
          'format' => NULL,
          'safe_value' => 'MW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pensoft Publishers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '12fa262c-1c13-4631-99a1-6ee13b9f5bf6',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Congo, The Democratic Republic of the',
    'description' => 'Congo, The Democratic Republic of the',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '12fd6a9c-8e7f-409d-aa0f-0439b65ad07b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CD',
          'format' => NULL,
          'safe_value' => 'CD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kuwait',
    'description' => 'Kuwait',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '13b67613-86b3-4b29-a87d-e336070c166b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KW',
          'format' => NULL,
          'safe_value' => 'KW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Server app',
    'description' => 'Server application',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1458b107-12aa-4859-ae8d-2657f72ee7cb',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 62,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United States',
    'description' => 'United States',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '14a06b42-668b-47a0-909b-85c367af9ddd',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bangladesh',
    'description' => 'Bangladesh',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '14fb0df9-7d6a-46ba-9900-7e2afff46647',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BD',
          'format' => NULL,
          'safe_value' => 'BD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IR genetics',
    'description' => 'Information resource (genetics)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '154e3f2a-54a6-4820-b746-c57158de0e57',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 83,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Oceania',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1562fd72-a8f9-466c-9967-a6e947d94aec',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(
      'und' => array(
        0 => array(
          'value' => 41,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Canada',
    'description' => 'Canada',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '156eca2f-20a4-4585-af34-f0e76d93add8',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ecological data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '157bdf80-3a28-4900-8174-cf01a1a61bb3',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 193,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Greenland',
    'description' => 'Greenland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '15ded624-14a6-4bc4-8771-4ee3bed9705b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GL',
          'format' => NULL,
          'safe_value' => 'GL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Naturalis',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '166912e8-d101-4cce-9983-cc87064fed5f',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Mentoring',
    'description' => 'Mentoring programme',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '16ddd218-e851-444b-a995-3790594ba838',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 220,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Gabon',
    'description' => 'Gabon',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '16f6517a-9439-4259-be8f-c92c2618a5d8',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GA',
          'format' => NULL,
          'safe_value' => 'GA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Egypt',
    'description' => 'Egypt',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '173591a8-57e8-4081-9f4c-d466243f6f0a',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EG',
          'format' => NULL,
          'safe_value' => 'EG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Occurrence data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17c53639-a8b6-42f6-a102-80c952a9d599',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 191,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Timor-Leste',
    'description' => 'Timor-Leste',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '17e0673f-e807-4615-aa08-83d912f7f0b6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TL',
          'format' => NULL,
          'safe_value' => 'TL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Azerbaijan',
    'description' => 'Azerbaijan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '184fbea3-17d1-4278-a514-fd1eff7ed4cf',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AZ',
          'format' => NULL,
          'safe_value' => 'AZ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Macao',
    'description' => 'Macao',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '188978b4-c463-4716-9be4-c6040c14cbb4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MO',
          'format' => NULL,
          'safe_value' => 'MO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data portal',
    'description' => 'GBIF Data Portal',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '18cfc5f5-0b7a-43ee-91cf-f6b3953a7848',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 9,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Mountain biodiversity',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '19370e22-9273-42a9-9aac-685a69e84706',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Oceania',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1955c489-a4a3-45a8-91fd-d30317c69295',
    'vocabulary_machine_name' => 'continent',
  );
  $terms[] = array(
    'name' => 'Ecology',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '198e0ac7-478b-40ab-866c-6579f09b0801',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Regionalization',
    'description' => 'Regional approach',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '199ab1a5-a449-450b-b603-102671b112d9',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 285,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Congo',
    'description' => 'Congo',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '19fa362f-776b-4f71-9e77-ad7773365f22',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CG',
          'format' => NULL,
          'safe_value' => 'CG',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Colombia',
    'description' => 'Colombia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1ab87235-50b9-4a5c-9409-6f1aa068b64b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CO',
          'format' => NULL,
          'safe_value' => 'CO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bermuda',
    'description' => 'Bermuda',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1bba9d36-0193-444e-9780-50b25428dea5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BM',
          'format' => NULL,
          'safe_value' => 'BM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CE-Support',
    'description' => '<p>GBIF Capacity Enhancement Support programme</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1bf8227d-50cf-4b88-83d7-5cef276134a5',
    'vocabulary_machine_name' => 'programme',
  );
  $terms[] = array(
    'name' => 'Sint Maarten (Dutch Part)',
    'description' => 'Sint Maarten (Dutch Part)',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1c757b79-749b-470b-b6e9-94d8b23b74bb',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SX',
          'format' => NULL,
          'safe_value' => 'SX',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Engagement',
    'description' => 'Engaging communities',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1dbdaf10-dd8e-4f7f-892f-b7f0cd6f9970',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 287,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Senegal',
    'description' => 'Senegal',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1dcf5264-0b46-45a3-8859-21005dae801b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SN',
          'format' => NULL,
          'safe_value' => 'SN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Moldova, Republic of',
    'description' => 'Moldova, Republic of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1e262a07-a4cc-44d6-9201-69866a2e6590',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MD',
          'format' => NULL,
          'safe_value' => 'MD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gambia',
    'description' => 'Gambia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1e3f1354-4866-4df8-b36d-9d9b196ccfbc',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GM',
          'format' => NULL,
          'safe_value' => 'GM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'sample-data',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1e417124-2f23-424f-bc01-d57112c6d833',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'PIDs',
    'description' => 'Persistent Identifiers',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1eaa358f-b806-485a-8dbd-3c88baf255e3',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 46,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Discontinued',
    'description' => 'Discontinued',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1fced253-2225-459c-ac84-9666172dbe09',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 54,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IR spatial',
    'description' => 'Information resource (spatial)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1ffb3370-477d-409d-9895-1cc2c6bce178',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 84,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'United Arab Emirates',
    'description' => 'United Arab Emirates',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '201a7215-0d83-4e48-aa28-551ab7840356',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AE',
          'format' => NULL,
          'safe_value' => 'AE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Installations in International Waters',
    'description' => 'Installations in International Waters',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '205e5f94-2393-42c2-a88c-8cc8d484f149',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'XZ',
          'format' => NULL,
          'safe_value' => 'XZ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Demo',
    'description' => 'Demo',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '20aea85b-8506-4a90-99bb-b11aad6f30d9',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 51,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Maldives',
    'description' => 'Maldives',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2111b540-903e-4349-9496-09e38a96b755',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MV',
          'format' => NULL,
          'safe_value' => 'MV',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'North America',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '21309d76-f707-4cc0-bc50-265a6153c81e',
    'vocabulary_machine_name' => 'continent',
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
  );
  $terms[] = array(
    'name' => 'Malaysia',
    'description' => 'Malaysia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '236175a0-a512-4f2b-bcf5-e0097696b7c3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MY',
          'format' => NULL,
          'safe_value' => 'MY',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'EUBON',
    'description' => 'EU BON',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '23863737-f8ac-4ac5-aa38-a6b60fbb8ae6',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 234,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Mentoring',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2432beff-4c85-4410-807a-e7610681d6a4',
    'vocabulary_machine_name' => 'capacity_enhancement',
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
  );
  $terms[] = array(
    'name' => 'Russian Federation',
    'description' => 'Russian Federation',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '250be67e-c7af-4cf3-9512-3d13bec1a7fe',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RU',
          'format' => NULL,
          'safe_value' => 'RU',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Barbados',
    'description' => 'Barbados',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '25ff4a72-afcd-4bed-890b-6079286476fb',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BB',
          'format' => NULL,
          'safe_value' => 'BB',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Community',
    'description' => 'Supported by the community',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '262dbf49-5108-4f07-b95f-d5b20b006e9d',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 273,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Korea, Democratic People\'s Republic of',
    'description' => 'Korea, Democratic People\'s Republic of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '26bdd73a-cd48-417a-87c3-1493089a5a62',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KP',
          'format' => NULL,
          'safe_value' => 'KP',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wider audiences',
    'description' => 'Wider audiences',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '26e10aa0-74f3-4799-b1b9-14ef9c6237fe',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 210,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Norfolk Island',
    'description' => 'Norfolk Island',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '277ca6fc-b829-45b2-9946-9197c8c4d105',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NF',
          'format' => NULL,
          'safe_value' => 'NF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guam',
    'description' => 'Guam',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '28352633-0cbc-4a8a-a8a5-1a61ea2c2ade',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GU',
          'format' => NULL,
          'safe_value' => 'GU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Darwin Core Archive',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '292de05d-47fc-4513-b653-f9c80f95276a',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 159,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Brunei Darussalam',
    'description' => 'Brunei Darussalam',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '29f354df-fd31-4de0-bc4f-b1a1bcca750f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BN',
          'format' => NULL,
          'safe_value' => 'BN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Austria',
    'description' => 'Austria',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '29fa9776-7403-46e3-a66a-b6956061695a',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AT',
          'format' => NULL,
          'safe_value' => 'AT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Morocco',
    'description' => 'Morocco',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '29fd9f8a-ab2e-4564-bdc9-dda1070a9851',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MA',
          'format' => NULL,
          'safe_value' => 'MA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF History',
    'description' => 'GBIF history and overview',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a013018-dca9-41a5-bd34-cf1510ae2661',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 217,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Netherlands',
    'description' => 'Netherlands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2a8f79de-7641-4efb-b8aa-a3fbd2929e82',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NL',
          'format' => NULL,
          'safe_value' => 'NL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Germany',
    'description' => 'Germany',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2b4a8a1b-e720-4fa2-b200-9ef2b6751672',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DE',
          'format' => NULL,
          'safe_value' => 'DE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Grenada',
    'description' => 'Grenada',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2b5c3360-bb85-42d7-80f3-c60e3fee210a',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GD',
          'format' => NULL,
          'safe_value' => 'GD',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'National/thematic portals',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2c03ba35-c90b-4db0-b419-3c578cbd7a8d',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 228,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Somalia',
    'description' => 'Somalia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2c294e19-2d0c-45c7-88aa-1f42f37e0ac9',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SO',
          'format' => NULL,
          'safe_value' => 'SO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sudan',
    'description' => 'Sudan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2c2fac3c-b038-43a7-9d18-54987ee76808',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SD',
          'format' => NULL,
          'safe_value' => 'SD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CBD',
    'description' => 'CBD',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2dab6676-feb1-4fb9-a319-1ebc04f49286',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 232,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'New Zealand',
    'description' => 'New Zealand',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e05a728-60fb-4ad2-9a34-aa8d4f15891e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NZ',
          'format' => NULL,
          'safe_value' => 'NZ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'B. I. community',
    'description' => 'Biodiversity informatics community e.g. TDWG',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2e49e35b-16b5-4b4c-a127-cb44740a0369',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 208,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'N. H. collections',
    'description' => 'Natural history collections',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2ec77f83-8aac-4c11-9d49-fe37bb272235',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 87,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guyana',
    'description' => 'Guyana',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2ef2a28e-115e-419e-b620-e870fb98342e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GY',
          'format' => NULL,
          'safe_value' => 'GY',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Australia',
    'description' => 'Australia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2f53dfe1-42c7-4307-8209-73589ea2721e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AU',
          'format' => NULL,
          'safe_value' => 'AU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sample-based data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2f5fe815-e96d-4812-841c-4895813f92d4',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 258,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'DOIs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2f6ae0ed-304f-49b6-9ffc-9ded563916ff',
    'vocabulary_machine_name' => 'informatics',
  );
  $terms[] = array(
    'name' => 'Lithuania',
    'description' => 'Lithuania',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '30082eac-8fe5-4cf6-823d-dfedbad2ad7b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LT',
          'format' => NULL,
          'safe_value' => 'LT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Local governments',
    'description' => 'Local and sub-national governments',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '30423013-d4e2-414e-a6f9-72f49273e497',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 241,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data users',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '3064bab9-8d9c-44ef-a8b1-3c6e4bb5523a',
    'vocabulary_machine_name' => 'audience',
  );
  $terms[] = array(
    'name' => 'Gap analysis',
    'description' => 'Gap and data coverage analysis',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '310b06e6-3fee-478b-9785-a63859f5b5a6',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 147,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Myanmar',
    'description' => 'Myanmar',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '31594ccc-ee9e-44d5-b9f2-eec977d217ab',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MM',
          'format' => NULL,
          'safe_value' => 'MM',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Holy See (Vatican City State)',
    'description' => 'Holy See (Vatican City State)',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '31b81dce-662e-40d6-9ff0-75e4bcb1ab52',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VA',
          'format' => NULL,
          'safe_value' => 'VA',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Poland',
    'description' => 'Poland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '31ec9bbe-2824-4336-b249-7cbf7ffe48e8',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PL',
          'format' => NULL,
          'safe_value' => 'PL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Toolset',
    'description' => 'Toolset',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3269f2b8-9e90-4ba7-b641-37af37ab3005',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 61,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IR metadata',
    'description' => 'Information resource (metadata: people, institutions)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '334115bc-1043-4aa0-a11a-b364ca5a8026',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 162,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Dominica',
    'description' => 'Dominica',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '33864428-53f4-41ac-ba96-35665cdeb61f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DM',
          'format' => NULL,
          'safe_value' => 'DM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guatemala',
    'description' => 'Guatemala',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3390b7f8-e876-46ac-96e5-396ef10b75f5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GT',
          'format' => NULL,
          'safe_value' => 'GT',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Academic publishing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '344d207e-4580-431d-a65c-c987c55cdb73',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Kenya',
    'description' => 'Kenya',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '346aeb8a-8089-4598-884f-349da483dd47',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KE',
          'format' => NULL,
          'safe_value' => 'KE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lao People\'s Democratic Republic',
    'description' => 'Lao People\'s Democratic Republic',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '34fe7293-4184-48fb-bd45-7bb62c791b75',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LA',
          'format' => NULL,
          'safe_value' => 'LA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BIFA',
    'description' => '<p>Biodiversity Information Fund for Asia.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '36070db2-fca2-44a2-96d3-db82dabea1b5',
    'vocabulary_machine_name' => 'programme',
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
  );
  $terms[] = array(
    'name' => 'Micronesia, Federated States of',
    'description' => 'Micronesia, Federated States of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '36f688d7-d2ae-4bae-a4a6-1649e3f5d508',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FM',
          'format' => NULL,
          'safe_value' => 'FM',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Web service',
    'description' => 'Web service',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '37dc46b1-1def-4cb6-8c73-1a0d6afeb1b6',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 57,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kazakhstan',
    'description' => 'Kazakhstan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3812097c-067d-4c74-91a0-62e5c92f65fe',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KZ',
          'format' => NULL,
          'safe_value' => 'KZ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nauru',
    'description' => 'Nauru',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3889670a-c149-4a3c-8dbd-5fbcb21e3fd9',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NR',
          'format' => NULL,
          'safe_value' => 'NR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF API',
    'description' => 'GBIF API and data web services',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '38e45f8c-b081-4a79-af62-5af095255a2f',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 146,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Marine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '391559e6-aee8-450c-a9af-a208e557e13f',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Thailand',
    'description' => 'Thailand',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3965aa7f-671a-4e0e-bd0a-38807b6a4580',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TH',
          'format' => NULL,
          'safe_value' => 'TH',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Isle of Man',
    'description' => 'Isle of Man',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3990c3ba-89f6-41c9-9fad-6e75adf2f430',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IM',
          'format' => NULL,
          'safe_value' => 'IM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GEO BON',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '39aaa692-d5c2-4795-baa2-9a76db3edadd',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Christmas Island',
    'description' => 'Christmas Island',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3a13cff6-3bb5-4595-b012-568d1d9cb186',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CX',
          'format' => NULL,
          'safe_value' => 'CX',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Belgium',
    'description' => 'Belgium',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3ab330de-6f9f-4561-aef0-e67b19114993',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BE',
          'format' => NULL,
          'safe_value' => 'BE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antigua and Barbuda',
    'description' => 'Antigua and Barbuda',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3b3b76aa-c68e-42e2-b076-51144c4e131d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AG',
          'format' => NULL,
          'safe_value' => 'AG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Citizen Science Association',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3b887cb5-418d-4f36-95ad-c3e1c25d60f4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(),
  );
  $terms[] = array(
    'name' => 'Audubon Core',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3b95501d-9807-4a3e-9500-f99ded3c91b3',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 108,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF Partners',
    'description' => 'GBIF partnerships and joints projects',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3ba9064f-c92d-483c-9443-a7f994fb7084',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 218,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Argentina',
    'description' => 'Argentina',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3bce62ec-dfe6-4acc-8458-33c450925296',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AR',
          'format' => NULL,
          'safe_value' => 'AR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Developers',
    'description' => 'Supported by the development team',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3bf9cd5d-3626-4cca-bb9e-b971759094fd',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 272,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Sensitive data',
    'description' => 'Dealing with sensitive biodiversity data',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c4e4f83-1ad4-45e1-9657-0e8a47ff74e0',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 25,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Strategies',
    'description' => 'Strategic thinking and positioning',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c6183d8-a525-453b-8604-ff590c229f3a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 286,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'OMICS Group',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3c715eb6-7709-41ae-b50d-e21f775b5e8f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(),
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
  );
  $terms[] = array(
    'name' => 'Capacity project',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3cf692f4-bd0f-46b9-8292-d649b85f7b7e',
    'vocabulary_machine_name' => 'capacity_enhancement',
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
  );
  $terms[] = array(
    'name' => 'Finland',
    'description' => 'Finland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3d442566-8d01-4e09-b2a1-768cfac7ca8f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FI',
          'format' => NULL,
          'safe_value' => 'FI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jordan',
    'description' => 'Jordan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3d67ce2d-e43b-4b15-80f2-6e60427d5372',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JO',
          'format' => NULL,
          'safe_value' => 'JO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Plinian core',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3da67a85-9022-43bb-9835-1fcdc0e26991',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 115,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Samoa',
    'description' => 'Samoa',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3dc4a933-102f-49bc-a811-4e8a29ed06e3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'WS',
          'format' => NULL,
          'safe_value' => 'WS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jersey',
    'description' => 'Jersey',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3de3ce0d-e24b-4358-bdf4-a7ffd78d92df',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JE',
          'format' => NULL,
          'safe_value' => 'JE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'AGEDI; UNEP',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3deb7a4e-36c8-44cd-8f2b-64363b7175f5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(),
  );
  $terms[] = array(
    'name' => 'Belize',
    'description' => 'Belize',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3eed499a-f1a6-4e42-b674-43ca1156cb32',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BZ',
          'format' => NULL,
          'safe_value' => 'BZ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Data digitization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41613091-13b0-492c-b6c5-bb23b7c77396',
    'vocabulary_machine_name' => 'purpose',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 21,
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Mac OS X',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41cd5a49-7a36-4c3c-8d8a-6119c5846d5d',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 102,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'EEA',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '42202154-1ec7-4512-a48d-6d7152724d28',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Nigeria',
    'description' => 'Nigeria',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '42202af8-5be9-415d-8a5c-1db45ec1333c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NG',
          'format' => NULL,
          'safe_value' => 'NG',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Online tool',
    'description' => 'Online tool',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '424aa834-4f06-48f6-8d4e-c367deef0066',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 55,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Portugal',
    'description' => 'Portugal',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '42e37522-83aa-490d-be85-e747746319c6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PT',
          'format' => NULL,
          'safe_value' => 'PT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data papers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '435a4156-b749-42e0-b9c4-a1babacb30ce',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 226,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Yemen',
    'description' => 'Yemen',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4507b3c5-7f21-457e-ba57-9fd45b54bce2',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'YE',
          'format' => NULL,
          'safe_value' => 'YE',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Ireland',
    'description' => 'Ireland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '454b4233-34a7-4472-b14c-87f6bb75f7d3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IE',
          'format' => NULL,
          'safe_value' => 'IE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Abundance data',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4556dfb8-44c5-4d06-8090-adbd1e4560de',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(),
  );
  $terms[] = array(
    'name' => 'Biodiversity informatics standard',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
    'vocabulary_machine_name' => 'term_attribute',
    'field_term_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'Standard',
          'format' => NULL,
          'safe_value' => 'Standard',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Human health',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '45a6ee69-d310-4355-8c37-b0e9b5ab5bc9',
    'vocabulary_machine_name' => 'topic',
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
  );
  $terms[] = array(
    'name' => 'Luxembourg',
    'description' => 'Luxembourg',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '475fe884-8b35-4f1f-95b6-e42207536427',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LU',
          'format' => NULL,
          'safe_value' => 'LU',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Turkmenistan',
    'description' => 'Turkmenistan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4836aa05-4801-4935-aa8c-1a0adb8b78f4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TM',
          'format' => NULL,
          'safe_value' => 'TM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BIFs',
    'description' => 'Biodiversity Information Facilities',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '489d716b-2adb-4eed-af78-dee437ca3e71',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 156,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'EOL',
    'description' => 'Encyclopedia Of Life',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '48e9a21e-227b-4ba0-87b8-a0df9b23a175',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Mozambique',
    'description' => 'Mozambique',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '48f01928-6dbb-479c-8486-d5c8e4bb055f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MZ',
          'format' => NULL,
          'safe_value' => 'MZ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Benin',
    'description' => 'Benin',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '49b2eafa-f388-4895-a010-a24ddd1ce658',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BJ',
          'format' => NULL,
          'safe_value' => 'BJ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Annotations',
    'description' => 'Annotations',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '49cea21c-505d-4924-a6e3-f19b261e67eb',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 260,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Tanzania',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '49d2f505-1dc9-4dcd-ad51-1dfae063333f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(),
  );
  $terms[] = array(
    'name' => 'Sweden',
    'description' => 'Sweden',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '49daf287-8032-481d-949e-b1308887f276',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SE',
          'format' => NULL,
          'safe_value' => 'SE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tuvalu',
    'description' => 'Tuvalu',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4a6fca88-784f-4f7c-b88f-3d52d90dff43',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TV',
          'format' => NULL,
          'safe_value' => 'TV',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Comoros',
    'description' => 'Comoros',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4a7b4d45-5a36-4de2-a806-51e873334ef4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KM',
          'format' => NULL,
          'safe_value' => 'KM',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'GBIF history/overview',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4b277a51-25ae-4104-bccd-2ffd9df65631',
    'vocabulary_machine_name' => 'about_gbif',
  );
  $terms[] = array(
    'name' => 'Albania',
    'description' => 'Albania',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4ca1938e-aed4-4ba2-a256-cb5232b6bd48',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AL',
          'format' => NULL,
          'safe_value' => 'AL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Uganda',
    'description' => 'Uganda',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4cc766a5-482e-4013-9778-77896ded2143',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UG',
          'format' => NULL,
          'safe_value' => 'UG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Uruguay',
    'description' => 'Uruguay',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4cf76ddf-465a-4ce7-a7b7-093a17937305',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UY',
          'format' => NULL,
          'safe_value' => 'UY',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Freshwater',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4d24bab1-5d5f-4d4c-bde4-b63a7e694b36',
    'vocabulary_machine_name' => 'topic',
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
  );
  $terms[] = array(
    'name' => 'Saint Pierre and Miquelon',
    'description' => 'Saint Pierre and Miquelon',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4ecbf099-86c4-4b3f-9544-65e0129f25b1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PM',
          'format' => NULL,
          'safe_value' => 'PM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latin America',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4ed4cb28-a39c-4d70-bc2f-8b566eb5eca4',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(
      'und' => array(
        0 => array(
          'value' => 39,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF',
    'description' => 'The Global Biodiversity Information Facility',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4f4510f3-9bdb-45b1-b7a5-9f983a646a3b',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 126,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Invasives',
    'description' => 'Invasive species',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4ff3d629-78bf-4279-9833-36256885b805',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 238,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Mauritius',
    'description' => 'Mauritius',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '50264f01-2ef2-413f-a3e3-cb1542003779',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MU',
          'format' => NULL,
          'safe_value' => 'MU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guadeloupe',
    'description' => 'Guadeloupe',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '50ab0964-96ee-4cb7-885b-b8b99eee4be2',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GP',
          'format' => NULL,
          'safe_value' => 'GP',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '51828ec4-03a1-49d4-81fb-f6c010915c32',
    'vocabulary_machine_name' => 'topic',
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
  );
  $terms[] = array(
    'name' => 'node portals',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '51d64971-f17e-4cbe-b4a1-aa9a47169b16',
    'vocabulary_machine_name' => 'informatics',
  );
  $terms[] = array(
    'name' => 'Botswana',
    'description' => 'Botswana',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5265cfdc-dd51-47c6-a236-86326622bbd1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BW',
          'format' => NULL,
          'safe_value' => 'BW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saudi Arabia',
    'description' => 'Saudi Arabia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '52cfcad2-4931-4c3c-b84a-abfee55f2cec',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SA',
          'format' => NULL,
          'safe_value' => 'SA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF nodes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '53185ea2-bba9-46e0-813b-2cf141e86353',
    'vocabulary_machine_name' => 'about_gbif',
  );
  $terms[] = array(
    'name' => 'San Marino',
    'description' => 'San Marino',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5372b721-0f2c-4ad2-9173-0fe10bd3e1e4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SM',
          'format' => NULL,
          'safe_value' => 'SM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF delegations',
    'description' => 'GBIF delegations Including heads',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '53755208-be27-4e0b-a559-2c5bd03897e6',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 187,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Web services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '53d6f09f-413f-41cd-bf68-02d66741080b',
    'vocabulary_machine_name' => 'data_use',
    'field_ims_keyword_id' => array(),
  );
  $terms[] = array(
    'name' => 'OBIS',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '53df3ddb-584f-4a6d-a80a-f4371dd0972f',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Document',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '540a0101-2bbd-4c08-b91c-ad3e6fdb4c55',
    'vocabulary_machine_name' => 'resource_type',
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
  );
  $terms[] = array(
    'name' => 'Syrian Arab Republic',
    'description' => 'Syrian Arab Republic',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '54ede682-a92e-4ed7-a5b6-8b8ca32e0765',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SY',
          'format' => NULL,
          'safe_value' => 'SY',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Policy use',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '54ee46b6-95e4-4c9f-bba4-3d1abec226a6',
    'vocabulary_machine_name' => 'data_use',
    'field_ims_keyword_id' => array(),
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
  );
  $terms[] = array(
    'name' => 'Ghana',
    'description' => 'Ghana',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '55751ef5-f934-45bd-bf61-75b6280b7a2f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GH',
          'format' => NULL,
          'safe_value' => 'GH',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => 'Education sector Including secondary education, university-level education, lecturers, professors, etc.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '557f1cd4-44cf-4e2b-8be1-0696363679e1',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 212,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'France',
    'description' => 'France',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '55ad36f0-e239-461f-92bc-966673c16590',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FR',
          'format' => NULL,
          'safe_value' => 'FR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'iOS',
    'description' => 'iOS',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '56a3450f-c318-47af-b35e-43016014ae29',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 158,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CE programme',
    'description' => 'Capacity enhancement programme',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '56d4f1cc-194e-4676-adb4-d200c364dc7f',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 284,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'ABCD',
    'description' => 'ABCD',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '56df83fd-faa9-4d84-ba09-a70f2f5ec6f6',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 105,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Publishing framework',
    'description' => 'Data publishing framework',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '57b1efd0-e982-4fed-baa3-371630c84f89',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 269,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'IR occurrences',
    'description' => 'Information resource (occurrence)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '57f897e3-3afd-49de-9233-7942a2d0ab0d',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 81,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Installation',
    'description' => 'Installation instructions',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5828ac3c-3641-4202-ba48-4fabd2e8886c',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 280,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Curaçao',
    'description' => 'Curaçao',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '58330a4b-e822-45a5-b999-39801cec0981',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CW',
          'format' => NULL,
          'safe_value' => 'CW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'British Indian Ocean Territory',
    'description' => 'British Indian Ocean Territory',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '587d0457-7674-46c8-a236-227486b1d98f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IO',
          'format' => NULL,
          'safe_value' => 'IO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Niger',
    'description' => 'Niger',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5892085d-efc0-49b1-a389-dfd8ac9d1c09',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NE',
          'format' => NULL,
          'safe_value' => 'NE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ecosystem services',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58d2aee9-cb5a-4574-b9a4-2a77e292a3fc',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Burundi',
    'description' => 'Burundi',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '593013bd-aee0-4604-bc29-bd4e5955bd43',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BI',
          'format' => NULL,
          'safe_value' => 'BI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Papua New Guinea',
    'description' => 'Papua New Guinea',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '596c5b01-fd2a-4b35-b281-bf85d88df109',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PG',
          'format' => NULL,
          'safe_value' => 'PG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF partnerships',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '597a8eb6-d33d-4bda-8d5e-6540bc67f116',
    'vocabulary_machine_name' => 'about_gbif',
  );
  $terms[] = array(
    'name' => 'Mali',
    'description' => 'Mali',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5a112434-55b1-4def-b67f-3e3d2f8a30d7',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ML',
          'format' => NULL,
          'safe_value' => 'ML',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Togo',
    'description' => 'Togo',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5bab1bee-709f-43e8-b228-67f2261f7295',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TG',
          'format' => NULL,
          'safe_value' => 'TG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Resource managers',
    'description' => 'Natural resource managers',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5bf2443e-0a9a-4aca-a9fb-1d88eda87b3d',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 239,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Europe',
    'description' => 'Europe',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c06982b-b8da-4e1b-b306-9b443879edd2',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 134,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'IPT',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c306b78-0c21-40af-aecb-a03267b49c96',
    'vocabulary_machine_name' => 'informatics',
  );
  $terms[] = array(
    'name' => 'Brazil',
    'description' => 'Brazil',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5d1a246e-2bec-44be-bd02-23335089c5d8',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BR',
          'format' => NULL,
          'safe_value' => 'BR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cook Islands',
    'description' => 'Cook Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5d1c4b06-3406-4c0d-9d71-4c679057ee39',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CK',
          'format' => NULL,
          'safe_value' => 'CK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Norway',
    'description' => 'Norway',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5d419187-7688-4e5f-8f7f-160433c83aec',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NO',
          'format' => NULL,
          'safe_value' => 'NO',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Niue',
    'description' => 'Niue',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5d978eb6-e49f-4921-a066-3914b34ccda1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NU',
          'format' => NULL,
          'safe_value' => 'NU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'South Africa',
    'description' => 'South Africa',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5dee07bb-8384-47a7-99b9-13ee58ab543d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZA',
          'format' => NULL,
          'safe_value' => 'ZA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Darwin Core',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5e6ba8a3-ec40-44d3-b605-e334023f7be6',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 104,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Not supported',
    'description' => 'Not supported',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5eb2524d-65c8-4d81-b708-308a48f1fd14',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 274,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Freshwater',
    'description' => 'Freshwater data',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5ed8fa7b-40cf-4f39-8e89-4a2fae06a24e',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 237,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'DOI',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5faf6460-3147-469c-bb4e-c09a63df321b',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Research bodies',
    'description' => 'Research councils / foundations',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5ff669c0-39a5-4fb6-8209-f5c64ad598c8',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 204,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Sierra Leone',
    'description' => 'Sierra Leone',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '602e4313-9d2d-4a4c-bacd-f111d90ce2b7',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SL',
          'format' => NULL,
          'safe_value' => 'SL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF recommended',
    'description' => 'GBIF recommended',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6155e7e0-5964-4c37-8628-bcb93f64ef37',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 125,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Not commercial',
    'description' => 'Not commercial',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '61e1dc6c-2db4-409f-9df9-8d892651a125',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 271,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Estonia',
    'description' => 'Estonia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '62987217-dd0a-4d26-86d2-6aa8a35cdb75',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EE',
          'format' => NULL,
          'safe_value' => 'EE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cameroon',
    'description' => 'Cameroon',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '62a79909-1547-4dd0-8fe7-5d5d3ae87616',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CM',
          'format' => NULL,
          'safe_value' => 'CM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data analysis',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '62a89fae-5e7b-4ac3-8988-06b5136774d6',
    'vocabulary_machine_name' => 'purpose',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 26,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Windows ME',
    'description' => 'MS Windows Mobile',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62f7273e-d85a-4d6e-a74d-c027c27246ff',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 117,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Europe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '64887079-9091-4843-9a82-acfe2104d66f',
    'vocabulary_machine_name' => 'continent',
  );
  $terms[] = array(
    'name' => 'IPBES',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6552ba22-414e-45e3-9408-bb478e64c7b3',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'MS Windows',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6666be28-a907-4d69-9308-eb1fe7300f7a',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 100,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Multimedia data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6737bd20-499e-4394-a3d8-856be5eba0e8',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 194,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Iraq',
    'description' => 'Iraq',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '675771d7-d031-47c0-8e30-e2dfb21d1b13',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IQ',
          'format' => NULL,
          'safe_value' => 'IQ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Saint Vincent and the Grenadines',
    'description' => 'Saint Vincent and the Grenadines',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '67beb2e4-7241-4af5-8775-8b2437db78d9',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VC',
          'format' => NULL,
          'safe_value' => 'VC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Vocabularies',
    'description' => 'Vocabularies and ontologies',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '685a3c36-20df-46b9-8daf-d98a9c0423fc',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 259,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Nicaragua',
    'description' => 'Nicaragua',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '68fd6eb8-864e-4709-855e-316109adc358',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NI',
          'format' => NULL,
          'safe_value' => 'NI',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'IR vocabulary',
    'description' => 'Information resource (vocabulary)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6baf1402-22d9-474b-b89d-aa6f666e1bb0',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 82,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'OGC',
    'description' => 'Open Geospatial Consortium (OGC)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6bdad830-7bad-4509-b9a6-6043a610168c',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 106,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chile',
    'description' => 'Chile',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6c533887-76c9-4831-9018-801d7b4692dd',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CL',
          'format' => NULL,
          'safe_value' => 'CL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IR species',
    'description' => 'Information resource (species)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6c80f4b2-1da0-4557-b894-63a5b327fcc9',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 80,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Macedonia, The former Yugoslav Republic of',
    'description' => 'Macedonia, The former Yugoslav Republic of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6d51e671-e6af-425a-a5fc-da2505c00ef4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MK',
          'format' => NULL,
          'safe_value' => 'MK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Canadensys',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6dc57289-cad1-4119-96fe-b822d589e925',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Strategic app.',
    'description' => 'Use of data in strategic applications',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6e4d53ca-c2f7-4eea-95e2-1da7c497141c',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 225,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Taxonomic research',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6f20d102-38ba-48e7-8c0d-aaf5f2cda263',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Cape Verde',
    'description' => 'Cape Verde',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6f2382ff-db8b-48fa-bda6-21b795f468b0',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CV',
          'format' => NULL,
          'safe_value' => 'CV',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Faroe Islands',
    'description' => 'Faroe Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '706e9e1e-1acc-483e-829b-dccaaf193196',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FO',
          'format' => NULL,
          'safe_value' => 'FO',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'DublinC',
    'description' => 'Dublin Core',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72a901e9-12bc-4948-a08d-83ffbb0c5930',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 107,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'GBIF regions',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '7392baa3-9929-4691-81e4-b7efc2959aaf',
    'vocabulary_machine_name' => 'about_gbif',
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
  );
  $terms[] = array(
    'name' => 'Data curation & quality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '74367725-c5b2-4e00-bb53-c75636be9b1d',
    'vocabulary_machine_name' => 'purpose',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 127,
        ),
        1 => array(
          'value' => 13,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Plazi',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7439073e-501a-4338-b963-56dd0f1ca07a',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
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
  );
  $terms[] = array(
    'name' => 'Mongolia',
    'description' => 'Mongolia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '74fde75b-8b13-484f-8e91-edc428daf5b6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MN',
          'format' => NULL,
          'safe_value' => 'MN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cambodia',
    'description' => 'Cambodia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '750a4883-ec82-4e70-abe8-6a86eba2ae3c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KH',
          'format' => NULL,
          'safe_value' => 'KH',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Mauritania',
    'description' => 'Mauritania',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '75521864-00ec-4d9c-af83-bb533bb87c5d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MR',
          'format' => NULL,
          'safe_value' => 'MR',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Singapore',
    'description' => 'Singapore',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '783ef34f-8e80-4c73-8f04-eadc27bfc982',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SG',
          'format' => NULL,
          'safe_value' => 'SG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Andorra',
    'description' => 'Andorra',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '78b6f030-6e12-47c1-8c1d-a723544e3996',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AD',
          'format' => NULL,
          'safe_value' => 'AD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => '',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '796cf142-6eb5-4dae-870d-d6bdad9f79ca',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(),
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
  );
  $terms[] = array(
    'name' => 'United Kingdom',
    'description' => 'United Kingdom',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7a2e309a-3634-4838-96d7-28da5f613b80',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guernsey',
    'description' => 'Guernsey',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7a2edf1f-8b8b-4837-91de-ce011d0de3cc',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GG',
          'format' => NULL,
          'safe_value' => 'GG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Policy use',
    'description' => 'Use of biodiversity data for policy',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7a354832-c072-4b05-9e44-3745529f799f',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 148,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF tools',
    'description' => 'GBIF tools It specifically includes small tools in addition to the IPT, NPT and Portal.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7a7c653e-38f4-4ca8-bc70-f026dd346b90',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 247,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Costa Rica',
    'description' => 'Costa Rica',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7a919810-384e-4a3c-a8e9-1b8f3e96cce1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CR',
          'format' => NULL,
          'safe_value' => 'CR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antarctic',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7a91eeb6-2a0a-4752-81f3-dcb40e051604',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(),
  );
  $terms[] = array(
    'name' => 'Uzbekistan',
    'description' => 'Uzbekistan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7af9a246-e248-4871-9a38-f7de0ca53d5b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UZ',
          'format' => NULL,
          'safe_value' => 'UZ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Terrestrial',
    'description' => 'Terrestrial data',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7cdb6070-bd51-457f-9f52-3acca8eaa918',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 263,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Namibia',
    'description' => 'Namibia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7d2f1530-6fc7-4fc2-8f90-adff08819683',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NA',
          'format' => NULL,
          'safe_value' => 'NA',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'El Salvador',
    'description' => 'El Salvador',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e0aa17d-37b7-4712-9eaa-d372faf1cff8',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SV',
          'format' => NULL,
          'safe_value' => 'SV',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bolivia',
    'description' => 'Bolivia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e723ef8-792a-4fd1-9e5d-197773245d7c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BO',
          'format' => NULL,
          'safe_value' => 'BO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hungary',
    'description' => 'Hungary',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7f42deb1-b090-4fe5-a137-156f3fc29f81',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HU',
          'format' => NULL,
          'safe_value' => 'HU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Informaticians',
    'description' => 'Informaticians / IT professionals',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7f9b5e2a-5f76-43f4-8792-cd308a230e28',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 98,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gibraltar',
    'description' => 'Gibraltar',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '80271cba-8fed-4ca8-978a-49662eb542f5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GI',
          'format' => NULL,
          'safe_value' => 'GI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'KML',
    'description' => 'Google Earth (KML/KMZ)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '807d847b-f422-44ad-9c88-167091e07eb9',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 113,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Philippines',
    'description' => 'Philippines',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '816e7035-1e77-4e3c-b2f6-e4807798159a',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PH',
          'format' => NULL,
          'safe_value' => 'PH',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Bulgaria',
    'description' => 'Bulgaria',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '81f95233-7f1c-49db-ae83-a8d65e84ff1c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BG',
          'format' => NULL,
          'safe_value' => 'BG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lebanon',
    'description' => 'Lebanon',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '82b9480b-f722-40ad-aa11-790b35708e70',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LB',
          'format' => NULL,
          'safe_value' => 'LB',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Evolution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8320fbb4-0a78-47b4-a050-2b1fb63ed6d3',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Genetic data',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8342eb51-472a-48d7-933f-36780b1189fd',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 192,
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Honduras',
    'description' => 'Honduras',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '84538d25-63ab-4eb0-b88d-d97ad8da5dce',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HN',
          'format' => NULL,
          'safe_value' => 'HN',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Data publishing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '854eb407-fac0-4b5c-9473-b6ddc7dbf9ff',
    'vocabulary_machine_name' => 'purpose',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 6,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF awards',
    'description' => 'GBIF awards',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8553c1d5-2b75-47f0-aa99-410859db30b4',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 229,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Private sector',
    'description' => 'Private sector',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '857919e6-fc0e-4e70-bd5a-0985ce335706',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 215,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Modellers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '858c6273-e6b6-485e-8bb2-3e6d1ede09cc',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 93,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GEO',
    'description' => 'GEO/GEOSS/GEO BON',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '85da8bb1-4a77-404c-aa97-19db287a0177',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 235,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Desktop app',
    'description' => 'Desktop application',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '86591b7a-1288-4f4c-b6e3-9b7664f0b0d4',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 56,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Algeria',
    'description' => 'Algeria',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '866a02d4-ae98-4569-bcf9-66cbdc6f53ad',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DZ',
          'format' => NULL,
          'safe_value' => 'DZ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Aruba',
    'description' => 'Aruba',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '86de3406-c5bf-4cc7-8a9b-e61cc80a2814',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AW',
          'format' => NULL,
          'safe_value' => 'AW',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'North America',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8723c0c2-5e99-4d1d-b7f8-0eab5a6cf9a9',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(
      'und' => array(
        0 => array(
          'value' => 40,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Iceland',
    'description' => 'Iceland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '872a2c64-3b50-47a5-931c-1d2b048f6c02',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IS',
          'format' => NULL,
          'safe_value' => 'IS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Zambia',
    'description' => 'Zambia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8826c079-59a2-4e16-876b-43329addae7e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZM',
          'format' => NULL,
          'safe_value' => 'ZM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Turkey',
    'description' => 'Turkey',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '88cf1c7d-e2ab-4006-a997-338934f316fe',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TR',
          'format' => NULL,
          'safe_value' => 'TR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data quality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8903de7e-fe81-4359-9485-b0260f364059',
    'vocabulary_machine_name' => 'informatics',
  );
  $terms[] = array(
    'name' => 'IR names',
    'description' => 'Information resource (names)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8974588e-8221-4e7f-9565-7c0cf8496936',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 79,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'IPBES',
    'description' => 'IPBES',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '89b106e8-03c0-4748-87e4-51153a7a6f7a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 231,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Cyprus',
    'description' => 'Cyprus',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '89fbef8a-0721-4987-934d-c4d898f88f51',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CY',
          'format' => NULL,
          'safe_value' => 'CY',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Data citation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8a6f0542-925a-4adc-9ca9-36335e82abe2',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Biodiversity knowledge experts',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8b4a9a45-6a80-438a-a95e-7ccf3abab872',
    'vocabulary_machine_name' => 'audience',
  );
  $terms[] = array(
    'name' => 'Oman',
    'description' => 'Oman',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8bf5cdff-8ca0-42ed-8d41-4691ca7d4c83',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'OM',
          'format' => NULL,
          'safe_value' => 'OM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Video',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '8c5bb93a-5623-4323-9d08-07a0ab7ab0be',
    'vocabulary_machine_name' => 'resource_type',
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
  );
  $terms[] = array(
    'name' => 'Czech Republic',
    'description' => 'Czech Republic',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8c8e888d-2592-4483-9508-39ce5c61edce',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CZ',
          'format' => NULL,
          'safe_value' => 'CZ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Scientists',
    'description' => 'Scientists',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8d6c2a69-1000-403a-8bb1-09a6220fa5e4',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 157,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tunisia',
    'description' => 'Tunisia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8eb3553e-be65-49f7-9e23-fad5a2daed62',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TN',
          'format' => NULL,
          'safe_value' => 'TN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pakistan',
    'description' => 'Pakistan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8f0c4df6-4b3f-4bfc-8de4-aa282b7445a2',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PK',
          'format' => NULL,
          'safe_value' => 'PK',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Alpha',
    'description' => 'Prototype / experimental / alpha',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f6af47c-e90c-4014-b8b6-22e622504e70',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 50,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF partners',
    'description' => 'GBIF partners (=GBIF Friends)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8fa987c3-6510-46ac-84dd-f188b569dfa3',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 207,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Tokelau',
    'description' => 'Tokelau',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8ffbf3c4-7913-4f13-9ad6-c02f037d8b76',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TK',
          'format' => NULL,
          'safe_value' => 'TK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Liechtenstein',
    'description' => 'Liechtenstein',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9007ac95-acaf-4a3e-9b52-26a317a1247b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LI',
          'format' => NULL,
          'safe_value' => 'LI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tanzania, United Republic of',
    'description' => 'Tanzania, United Republic of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9097ef9c-0517-4d2f-99df-b9f916ca935c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TZ',
          'format' => NULL,
          'safe_value' => 'TZ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Global',
    'description' => 'Global scope',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '91f62def-4310-4748-9f83-241d44101991',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 129,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Puerto Rico',
    'description' => 'Puerto Rico',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '92940614-f8bc-4b56-a2e9-f2841619d4a5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PR',
          'format' => NULL,
          'safe_value' => 'PR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Invasives',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9321fe73-3bc0-453e-aea0-9ca1b56828d0',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Tool type',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '935db795-c191-4146-91e8-14189b5935ea',
    'vocabulary_machine_name' => 'term_attribute',
    'field_term_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'Tool type',
          'format' => NULL,
          'safe_value' => 'Tool type',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => 'Training level',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '941c9330-a7e6-46dc-8cad-7026293dd53a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 166,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Climate change',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '94391d7e-1ffe-474b-89f5-243d2d89675b',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Slovenia',
    'description' => 'Slovenia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9491da52-5073-4cb3-a8d7-5406ae3dc9dc',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SI',
          'format' => NULL,
          'safe_value' => 'SI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IR ecology',
    'description' => 'Information resource (ecology)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '95761452-fe2e-4846-b68b-b5207dd46634',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 85,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Vocabularies',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '95a0bcf9-daf8-4329-a430-267991314ce0',
    'vocabulary_machine_name' => 'informatics',
  );
  $terms[] = array(
    'name' => 'Production',
    'description' => 'Production ready',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9652654b-2adc-4150-83e4-1c20c460be3a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 48,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kyrgyzstan',
    'description' => 'Kyrgyzstan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '96952fd5-19ef-473e-91f8-d22892be9084',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KG',
          'format' => NULL,
          'safe_value' => 'KG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Kitts and Nevis',
    'description' => 'Saint Kitts and Nevis',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9696134f-454a-4ea2-931a-4191847157cc',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KN',
          'format' => NULL,
          'safe_value' => 'KN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Belarus',
    'description' => 'Belarus',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9707cee0-6e0a-4fa4-b5ca-3fae1dea9cb3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BY',
          'format' => NULL,
          'safe_value' => 'BY',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bioversity',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '973fce85-d246-430e-89ca-89b0687826ef',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
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
  );
  $terms[] = array(
    'name' => 'Palestinian Territory, Occupied',
    'description' => 'Palestinian Territory, Occupied',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '97643be0-f0ea-4308-97cf-e9d5bb5b6a6c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PS',
          'format' => NULL,
          'safe_value' => 'PS',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'GBIF WS',
    'description' => 'Uses GBIF web services',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '991d6ed0-3ac0-410b-bf83-09f4e178b773',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 119,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Montenegro',
    'description' => 'Montenegro',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9954ab1c-80fa-40bd-a848-b009c0095495',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ME',
          'format' => NULL,
          'safe_value' => 'ME',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Slovakia',
    'description' => 'Slovakia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9b5242bb-328d-4e53-88fb-cf3c60aa0405',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SK',
          'format' => NULL,
          'safe_value' => 'SK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latvia',
    'description' => 'Latvia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9bc69136-97ca-443c-ba0e-5b5cb5c555e5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LV',
          'format' => NULL,
          'safe_value' => 'LV',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Citizen science',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9cc37535-d63d-4360-9b5e-de71bc1ad823',
    'vocabulary_machine_name' => 'topic',
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
  );
  $terms[] = array(
    'name' => 'Angola',
    'description' => 'Angola',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9d4a57e1-fd46-4238-ac59-ca3da803c95b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AO',
          'format' => NULL,
          'safe_value' => 'AO',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => 'Agriculture',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9d8e3406-0d9f-41d1-82c0-f5e8e3210c1d',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 251,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Equatorial Guinea',
    'description' => 'Equatorial Guinea',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9ddd4ee9-fbb7-40df-b153-600cbcafdc02',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GQ',
          'format' => NULL,
          'safe_value' => 'GQ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Biodiversity Indicators Partnership',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9feedcaa-5f6b-489e-9b85-0532210d8324',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
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
  );
  $terms[] = array(
    'name' => 'Basic',
    'description' => 'Basic level',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a06eae0a-2c53-4c8a-9cb6-ac0743ae6594',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 164,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Commercial',
    'description' => 'Commercial Any sort of commercial arrangement: one-time payments, subscriptions, payment required for support, etc.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a16a7925-65c0-4967-9ebc-c5f10b8dbfc5',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 270,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Svalbard and Jan Mayen',
    'description' => 'Svalbard and Jan Mayen',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a29fbacd-3c8a-48b7-83fd-90c506e7a9ac',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SJ',
          'format' => NULL,
          'safe_value' => 'SJ',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Malta',
    'description' => 'Malta',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a2f2a637-8d03-4509-a243-bbeb360860ae',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MT',
          'format' => NULL,
          'safe_value' => 'MT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Names and checklists',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a361e3d0-6903-4e62-b4d7-2652dcea646f',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 24,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Libyan Arab Jamahiriya',
    'description' => 'Libyan Arab Jamahiriya',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a448216b-8381-4b86-91c5-485b3a261b64',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LY',
          'format' => NULL,
          'safe_value' => 'LY',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Presentation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a561dc09-8fbb-4216-98c3-9bc223ffb17d',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Taxonomist',
    'description' => 'Taxonomists',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a568fb99-f2ea-4a39-97e8-3a6901ac1b51',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 99,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nepal',
    'description' => 'Nepal',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a581e838-70b2-4c46-9f16-d08ae3313b89',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NP',
          'format' => NULL,
          'safe_value' => 'NP',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IR literature',
    'description' => 'Information resource (literature)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a5a8e99a-b9cf-4cc7-bf53-fe098ce2fa89',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 86,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'GBIF governance',
    'description' => 'GBIF governance, structure and finance',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a6c84026-60da-43f0-b67a-4015caf8131b',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 190,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Burkina Faso',
    'description' => 'Burkina Faso',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a7529eb6-cd41-4b67-94a3-81600d6f8e5d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BF',
          'format' => NULL,
          'safe_value' => 'BF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF publishing',
    'description' => 'Publishing tool',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a7c1510f-bfc9-4fe5-8955-3058aa872c51',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 123,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Bonaire, Sint Eustatius and Saba',
    'description' => 'Bonaire, Sint Eustatius and Saba',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a932fe47-fbcf-410c-84c8-7e342e330a6d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BQ',
          'format' => NULL,
          'safe_value' => 'BQ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Eritrea',
    'description' => 'Eritrea',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a9b263ac-e008-4aa9-b1d7-17b3d287e57f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ER',
          'format' => NULL,
          'safe_value' => 'ER',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Greece',
    'description' => 'Greece',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aa034614-0d0a-4da3-9586-2bb9865aaf38',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GR',
          'format' => NULL,
          'safe_value' => 'GR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data access',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'ab6cb471-9159-44e7-8833-43b8b901855f',
    'vocabulary_machine_name' => 'purpose',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 128,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Trinidad and Tobago',
    'description' => 'Trinidad and Tobago',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ac1701f0-9544-4f98-ad7b-a2295e74a297',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TT',
          'format' => NULL,
          'safe_value' => 'TT',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Linux',
    'description' => 'Linux / Unix',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'adad8377-9de8-437e-a372-2b82ecf73b81',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 101,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antarctica',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'adeda92a-1c71-4290-8cad-4d89851a1e77',
    'vocabulary_machine_name' => 'continent',
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
  );
  $terms[] = array(
    'name' => 'Heard Island and McDonald Islands',
    'description' => 'Heard Island and McDonald Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aec5adb4-0a47-4209-a054-c2d25977f0e1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HM',
          'format' => NULL,
          'safe_value' => 'HM',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Italy',
    'description' => 'Italy',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'af84f6a7-1eb3-4086-aace-6f4bda03235e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IT',
          'format' => NULL,
          'safe_value' => 'IT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antarctica',
    'description' => 'Antarctica',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'afbe38ab-d24c-4131-9ac1-73d7c906894b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AQ',
          'format' => NULL,
          'safe_value' => 'AQ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cimate',
    'description' => 'Climate impacts',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'afe6241c-7867-46ab-8fd3-31fe1308755b',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 255,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Falkland Islands (Malvinas)',
    'description' => 'Falkland Islands (Malvinas)',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b10e5416-c7db-469b-a6b8-bf22fb241adb',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FK',
          'format' => NULL,
          'safe_value' => 'FK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sao Tome and Principe',
    'description' => 'Sao Tome and Principe',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b16ac877-b7d2-427d-8378-3ec48b304702',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ST',
          'format' => NULL,
          'safe_value' => 'ST',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Cayman Islands',
    'description' => 'Cayman Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b23e7425-77a8-42d3-a372-56f059c749a1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KY',
          'format' => NULL,
          'safe_value' => 'KY',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Panama',
    'description' => 'Panama',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b367ded9-4027-48b7-b128-b1234816e75d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PA',
          'format' => NULL,
          'safe_value' => 'PA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF network',
    'description' => 'GBIF family is potentially an extended vocabulary that includes the following terms: Node managers,&nbsp;Heads of delegation, Node staff, Affiliates, Governance, Partners.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3b32a4d-208d-4ba8-b204-621ab587e73f',
    'vocabulary_machine_name' => 'audience',
  );
  $terms[] = array(
    'name' => 'Manual',
    'description' => 'User manual',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3bebbdb-c963-43e5-930c-2693713ad7e0',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 281,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Virgin Islands, British',
    'description' => 'Virgin Islands, British',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5450b82-c68a-4e0c-9e96-337436a0c19c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VG',
          'format' => NULL,
          'safe_value' => 'VG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'DELTA',
    'description' => 'DELTA',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b5c09137-81ea-4df4-8986-fbdef74a91a9',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 109,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bahamas',
    'description' => 'Bahamas',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5d12cc0-0c05-4f55-8567-159a1053f410',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BS',
          'format' => NULL,
          'safe_value' => 'BS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Technical doc',
    'description' => 'Technical documentation available',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b5f0b085-a8b0-46b4-87ad-c941748ea008',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 283,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Cuba',
    'description' => 'Cuba',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5fc7719-c8fe-431c-95ea-75e500bd2b63',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CU',
          'format' => NULL,
          'safe_value' => 'CU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Standards & protocols',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b79e124c-6356-4a4f-8a52-3412fa26a64f',
    'vocabulary_machine_name' => 'informatics',
  );
  $terms[] = array(
    'name' => 'Intellectual property rights',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b7a0693b-5be1-4c4f-b3ca-4a4076439903',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => 'Training opportunities available',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b8847979-9d85-4ec7-8ea0-027db3c9a770',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 282,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Europe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b91592f0-aee9-40d5-9ccc-65aa529ab2d1',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(
      'und' => array(
        0 => array(
          'value' => 38,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Asia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b95005ac-f121-44ae-ac4a-1b7371ab72ea',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(
      'und' => array(
        0 => array(
          'value' => 37,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Reunion',
    'description' => 'Reunion',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b9fca004-abfd-48d6-a77d-b893e40b7a37',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RE',
          'format' => NULL,
          'safe_value' => 'RE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BID',
    'description' => '<p>Biodiversity information for development. EU funded.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ba1e6ed3-b1b0-444a-83a5-3b721c2d5210',
    'vocabulary_machine_name' => 'programme',
  );
  $terms[] = array(
    'name' => 'Cocos (Keeling) Islands',
    'description' => 'Cocos (Keeling) Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ba31199c-7fe0-4f3e-bf09-77c912ee169d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CC',
          'format' => NULL,
          'safe_value' => 'CC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Policy groups',
    'description' => 'Policy and funding groups Administrators / policy makers / politicians',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bace0cac-1b83-42d9-879d-960e6a1c1f0e',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 95,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'B. N. community',
    'description' => 'Biodiversity knowledge community e.g. IUCN, Diversitas, IPBES-related groups, etc.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bad68dba-369f-4811-990c-aa42d7fcf87a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 209,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Metadata',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bb2e30bc-72c5-4c2c-90fb-b5bd15f81f2f',
    'vocabulary_machine_name' => 'data_type',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 22,
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Haiti',
    'description' => 'Haiti',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bbf4a58b-1599-43f0-bf66-d2c8cf08aafa',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HT',
          'format' => NULL,
          'safe_value' => 'HT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Strategic application',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bd34be41-9192-4840-a714-790ed0b3e100',
    'vocabulary_machine_name' => 'data_use',
    'field_ims_keyword_id' => array(),
  );
  $terms[] = array(
    'name' => 'Monaco',
    'description' => 'Monaco',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bd8c704f-4e47-4b7e-856a-8c4f755ed824',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MC',
          'format' => NULL,
          'safe_value' => 'MC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Asia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bf79eaff-3fa7-45b0-b4ba-a071e4435918',
    'vocabulary_machine_name' => 'continent',
  );
  $terms[] = array(
    'name' => 'Japan',
    'description' => 'Japan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bf9646b9-355d-4499-90c0-26010f13b020',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JP',
          'format' => NULL,
          'safe_value' => 'JP',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Zimbabwe',
    'description' => 'Zimbabwe',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c025a882-e561-4701-ab6e-2d6168dcebfe',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZW',
          'format' => NULL,
          'safe_value' => 'ZW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biogeography',
    'description' => 'Species distribution / biogeography',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c17180f3-74b3-4297-b61e-08ebfebcc96b',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 254,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'China',
    'description' => 'China',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c23f40e3-c5bb-4be1-9273-6ecef88f5228',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CN',
          'format' => NULL,
          'safe_value' => 'CN',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Data publishers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c39ca38a-74c6-46e9-9b68-4cf315f70e8e',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 161,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'CBOL',
    'description' => 'Consortium for Barcode of Life',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c4614934-50fe-484f-ae23-c53e6478f05e',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
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
  );
  $terms[] = array(
    'name' => 'Beta',
    'description' => 'Beta',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c56b7004-7d91-4b34-8c0d-2e5a84a68d12',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 49,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ethiopia',
    'description' => 'Ethiopia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c593b825-f0b0-473a-9659-b5169e79fee4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ET',
          'format' => NULL,
          'safe_value' => 'ET',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mexico',
    'description' => 'Mexico',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c64f5502-b758-4596-9d44-0a668aa1246c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MX',
          'format' => NULL,
          'safe_value' => 'MX',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tool',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'c6782d43-9d2e-422f-a566-dd4fdc61913d',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Suriname',
    'description' => 'Suriname',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c6acf411-9659-4a38-88f4-9a993cae316d',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SR',
          'format' => NULL,
          'safe_value' => 'SR',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Bahrain',
    'description' => 'Bahrain',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c753c6e3-f294-4c47-8e4d-783c2a112aa3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BH',
          'format' => NULL,
          'safe_value' => 'BH',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Regional',
    'description' => 'Regional scope',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c76cefd4-70d3-4604-a41c-59ee33a2b9ff',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 130,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Tonga',
    'description' => 'Tonga',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c7d18842-6be6-4cac-82b6-8926031d62f5',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TO',
          'format' => NULL,
          'safe_value' => 'TO',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'ENM',
    'description' => 'Ecological niche modelling',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c9c0efed-c075-4fe3-9099-e0bbc8825bc3',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 8,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Publishing soft.',
    'description' => 'Data publishing software use',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ca4a799b-25b7-423f-9a28-39232be1fa4b',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 7,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Anguilla',
    'description' => 'Anguilla',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cb45469f-27c7-4ba4-b65b-d6a93639c7ff',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AI',
          'format' => NULL,
          'safe_value' => 'AI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marshall Islands',
    'description' => 'Marshall Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cb906e13-b0f4-4880-99a1-ff6d98bf3c49',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MH',
          'format' => NULL,
          'safe_value' => 'MH',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dominican Republic',
    'description' => 'Dominican Republic',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cd26731c-830c-4e40-b88f-cd3e17d50896',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DO',
          'format' => NULL,
          'safe_value' => 'DO',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Framework',
    'description' => 'Framework',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cd6809b0-8074-40dc-9709-bf123af9e160',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 59,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Incentives',
    'description' => 'Incentives for data publishing It includes attribution, credits and recognition.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cdb8d33a-35df-4054-aeaf-db15878a9236',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 144,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Central African Republic',
    'description' => 'Central African Republic',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cea282ef-ddc7-4630-8744-2597ef128d63',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CF',
          'format' => NULL,
          'safe_value' => 'CF',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Georgia',
    'description' => 'Georgia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd09e87d1-88c8-4ebc-868c-0325e5e38f04',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GE',
          'format' => NULL,
          'safe_value' => 'GE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF architecture',
    'description' => 'GBIF architecture It includes all its elements, including the registry and the indexing mechanism.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd0b2b869-206b-4240-8106-bf318d2db46a',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 189,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Kiribati',
    'description' => 'Kiribati',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd0ed9af9-bc7e-4cf2-9d7a-9acdb891e578',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KI',
          'format' => NULL,
          'safe_value' => 'KI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF committees',
    'description' => 'Standing committee members',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd0faa1bd-5c2a-4e43-831a-98745591b434',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 243,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Qatar',
    'description' => 'Qatar',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd1f35d9d-93a2-48c0-8104-95d336f5fde6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'QA',
          'format' => NULL,
          'safe_value' => 'QA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Android',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd207e0dd-da4e-419e-a9e3-7e4ae7e3be86',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 118,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Lucia',
    'description' => 'Saint Lucia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd25c3cee-5a7c-494d-bfcc-24c3c863bbf6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LC',
          'format' => NULL,
          'safe_value' => 'LC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'French Polynesia',
    'description' => 'French Polynesia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd347cab0-9bfc-4263-aa32-adf1d875b6f0',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PF',
          'format' => NULL,
          'safe_value' => 'PF',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Advanced',
    'description' => 'Advanced/detailed level',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd44f6665-c8b2-408c-be4e-77406407b427',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 165,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Bosnia and Herzegovina',
    'description' => 'Bosnia and Herzegovina',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd482c32b-7adb-4f00-a917-066a63d95581',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BA',
          'format' => NULL,
          'safe_value' => 'BA',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Madagascar',
    'description' => 'Madagascar',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd4bba440-f509-4916-bc6e-bf7c90296063',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MG',
          'format' => NULL,
          'safe_value' => 'MG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Georeferencing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd4e1c6ec-a24a-4a41-ad56-2395d9b45430',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Virgin Islands, U.S.',
    'description' => 'Virgin Islands, U.S.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd4fa8d08-5aa7-496d-93d8-acb2e50d42f4',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VI',
          'format' => NULL,
          'safe_value' => 'VI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Website',
    'description' => 'Website',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd509cf1a-f95a-4f33-944e-d68e2779c713',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 279,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Marine',
    'description' => 'Marine data',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd50b5dbd-08fe-47e3-ac30-a854dfdf8fbd',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 236,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF awards',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => 'd51ad957-256f-4e7a-acbf-285cd6b0e783',
    'vocabulary_machine_name' => 'about_gbif',
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
  );
  $terms[] = array(
    'name' => 'Development status',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
    'vocabulary_machine_name' => 'term_attribute',
    'field_term_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'Status',
          'format' => NULL,
          'safe_value' => 'Status',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'GBIF.org',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd65b547b-6241-4edc-996f-e2dd9a6e3b6a',
    'vocabulary_machine_name' => 'data_use',
    'field_ims_keyword_id' => array(),
  );
  $terms[] = array(
    'name' => 'Digitization soft.',
    'description' => 'Data capture software use',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd65ce7fa-8f31-4fd6-9b41-6e5745249eb8',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 20,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Côte d\'Ivoire',
    'description' => 'Côte d\'Ivoire',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd78fc3f5-9717-4a1c-a81c-714ae41d0ff1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CI',
          'format' => NULL,
          'safe_value' => 'CI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Species distributions',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7ae36c3-a398-445a-b78f-23315ea04f7e',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'IUCN',
    'description' => 'IUCN',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7c9d21c-140d-4b37-99cf-b9e213e69fc2',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 246,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'GML',
    'description' => 'Geography Markup Language (GML)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7edd955-9216-44e8-bc75-ae840f4c9b4d',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 114,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Israel',
    'description' => 'Israel',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd876c356-1a09-438a-9a63-bf845204208b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IL',
          'format' => NULL,
          'safe_value' => 'IL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data resource',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'd9212fee-33af-4fc9-99f6-af45c4ff07e6',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Spain',
    'description' => 'Spain',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd95372da-4a87-43e2-9edf-39abd878ece1',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ES',
          'format' => NULL,
          'safe_value' => 'ES',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Mayotte',
    'description' => 'Mayotte',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'da36c8d8-a8ef-4186-a0ac-d4d60ea51d91',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'YT',
          'format' => NULL,
          'safe_value' => 'YT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Threatened species',
    'description' => 'Threatened species',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da98a2bf-f641-4d74-a661-f0dcc1f2d6b5',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 252,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Sri Lanka',
    'description' => 'Sri Lanka',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dad9cc37-c8ca-42b8-ad5a-86384a6bb51e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LK',
          'format' => NULL,
          'safe_value' => 'LK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CBD',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'db7f21c6-ec51-40aa-ab99-bbd5d84355ef',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
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
  );
  $terms[] = array(
    'name' => 'National',
    'description' => 'National scope',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dbb3ea46-4493-445c-a4ef-10dfb85e47e8',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 131,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Hong Kong',
    'description' => 'Hong Kong',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dcdd633e-2f9c-48a2-bdee-2e5f3c33c5cf',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HK',
          'format' => NULL,
          'safe_value' => 'HK',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mobile app',
    'description' => 'Mobile application',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dd984937-90c1-4469-aed6-f3cd55dd3b03',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 116,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '935db795-c191-4146-91e8-14189b5935ea',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'EU',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'de9d276f-43e7-49cc-a5cb-861dd1fe9a24',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Naturalists',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'deddfd8f-6462-4e58-a3a1-eb5141d2d710',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 89,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'iOS',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'df5d9500-cc6c-433c-9c12-ce05fdcfb4bf',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Data provenance & citation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df68044d-094c-4263-adee-2ec1c06e32f7',
    'vocabulary_machine_name' => 'informatics',
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
  );
  $terms[] = array(
    'name' => 'IR multimedia',
    'description' => 'Information resource (Multimedia)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e012b59b-0385-47ca-835f-0721c74920ce',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 257,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Biogeography',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e069cdd8-cf1e-470d-9ef0-c3917db87c1c',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Governments',
    'description' => 'Government officials / politicians / international organizations',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e0c6d214-369f-4680-8ab1-0b02f9f89b16',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 203,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jamaica',
    'description' => 'Jamaica',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e18f302c-807f-46f2-b933-7ebccc4e4fe9',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JM',
          'format' => NULL,
          'safe_value' => 'JM',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Standards & protocols',
    'description' => 'Biodiversity data standards & protocols It includes data schemas',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e1d55110-eac1-448e-b7a9-c088ba16ca6f',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 10,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Endorsement',
    'description' => 'Endorsement process',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e1e6442e-c7b5-4084-bec1-78cbd591ea3c',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 288,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Architecture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e26d4e52-a037-43ce-a68f-1ca5c59a6562',
    'vocabulary_machine_name' => 'informatics',
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
  );
  $terms[] = array(
    'name' => 'United States Minor Outlying Islands',
    'description' => 'United States Minor Outlying Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e462ccb3-54ad-4b72-8d4f-a9f65b6f4590',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UM',
          'format' => NULL,
          'safe_value' => 'UM',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Type digitization',
    'description' => 'Digitization of biological types',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e54e7472-1c35-48fd-b9a6-0f257d608055',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 141,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'Arctic',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e57c893b-d39f-4f9d-a23b-cd06f9bcf000',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(),
  );
  $terms[] = array(
    'name' => 'Viet Nam',
    'description' => 'Viet Nam',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e58e602e-1eed-456a-9fbd-1315e26f4fc9',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VN',
          'format' => NULL,
          'safe_value' => 'VN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Peru',
    'description' => 'Peru',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e63e7ee0-c917-469f-8a88-240915b3479f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PE',
          'format' => NULL,
          'safe_value' => 'PE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF Nodes',
    'description' => 'GBIF Nodes and node management',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e72903b5-8b0a-4893-801d-23b38b3bcb9f',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Data users',
    'description' => 'Data users Including potential data users',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e78ae7e6-025f-4b83-b52b-b3b41c937644',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 197,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data holders',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e7dadb3e-13de-4bdc-a01a-3add4b8a64c9',
    'vocabulary_machine_name' => 'audience',
  );
  $terms[] = array(
    'name' => 'GBIF.org',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e7dd054a-94ae-45aa-a79c-4765e157098c',
    'vocabulary_machine_name' => 'about_gbif',
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
  );
  $terms[] = array(
    'name' => 'In development',
    'description' => 'In development (no public release)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e8df629e-471b-438f-8ee6-9116642c85ca',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 53,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Afghanistan',
    'description' => 'Afghanistan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e90489ce-5a90-4b63-961d-ae1c2696cf76',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AF',
          'format' => NULL,
          'safe_value' => 'AF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Palau',
    'description' => 'Palau',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e96e0d30-edba-42a0-9f78-e90d4cd34b83',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PW',
          'format' => NULL,
          'safe_value' => 'PW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => 'Training programme',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e9e4918b-67bf-426e-8879-5742c94fd213',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 219,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Biodiversity Heritage Library',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e9ef672a-93f0-4262-a729-5760b8f3adfc',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
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
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea8d1a9c-240f-49c1-9847-21b6e19e3b61',
    'vocabulary_machine_name' => 'capacity_enhancement',
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
  );
  $terms[] = array(
    'name' => 'Northern Mariana Islands',
    'description' => 'Northern Mariana Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eaf6a545-a777-4db0-90a7-b6fa1da7502e',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MP',
          'format' => NULL,
          'safe_value' => 'MP',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Western Sahara',
    'description' => 'Western Sahara',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eb3c247a-2b66-4557-8f0a-46c345a5f89c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EH',
          'format' => NULL,
          'safe_value' => 'EH',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Citation',
    'description' => 'Citation',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ebc380a4-d221-46b4-b8c9-b665a8e35bf3',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 145,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'CapEnh & training',
    'description' => 'Capacity enhancement and training',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ebe6d4ac-11b6-4d54-8c0a-d993672979c1',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 195,
        ),
      ),
    ),
    'field_term_attributes' => array(),
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
  );
  $terms[] = array(
    'name' => 'South Sudan',
    'description' => 'South Sudan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ed382799-5ce7-45d2-86be-5f4a34e26131',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SS',
          'format' => NULL,
          'safe_value' => 'SS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chinese Taipei',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ed85e8ea-7c8f-4593-a508-5fef462a5eb4',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'Lesotho',
    'description' => 'Lesotho',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ed90650b-2a1f-4371-84da-48fa51ec1607',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LS',
          'format' => NULL,
          'safe_value' => 'LS',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Guinea-Bissau',
    'description' => 'Guinea-Bissau',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eddee4dc-45b7-495d-9b42-4dffea5f2522',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GW',
          'format' => NULL,
          'safe_value' => 'GW',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Science use',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ee225a07-2f39-4801-9c2a-2a8ff1fdfeb4',
    'vocabulary_machine_name' => 'data_use',
    'field_ims_keyword_id' => array(),
  );
  $terms[] = array(
    'name' => 'Group',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
    'vocabulary_machine_name' => 'term_attribute',
    'field_term_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'Group',
          'format' => NULL,
          'safe_value' => 'Group',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'South America',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'eea011a5-00db-48cc-b083-bd5f5ff3eff7',
    'vocabulary_machine_name' => 'continent',
  );
  $terms[] = array(
    'name' => 'Chad',
    'description' => 'Chad',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eece470f-08b7-422a-ad86-6867029e5652',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TD',
          'format' => NULL,
          'safe_value' => 'TD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'French Guiana',
    'description' => 'French Guiana',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef3caefa-a3bc-473e-9b52-13230bc84d9f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GF',
          'format' => NULL,
          'safe_value' => 'GF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Informatics',
    'description' => 'Informatics (BI)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'efc2b2e7-f743-4025-9a9b-62ab1eeb0a68',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Saint Helena',
    'description' => 'Saint Helena',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eff01174-03d6-46f1-9718-5c4bcf13e55c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SH',
          'format' => NULL,
          'safe_value' => 'SH',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Seychelles',
    'description' => 'Seychelles',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f03349c9-3f1b-4a5c-b426-09772577ec73',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SC',
          'format' => NULL,
          'safe_value' => 'SC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Practitioners',
    'description' => 'Experts / Engineers / practitioners This includes environmental impact assessment practitioners and producers.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f0c903f8-81a6-49c8-a4a1-9886145e40ca',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 205,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'OS independent',
    'description' => 'OS independent',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f124aa21-06be-47be-8ff8-054eb275b811',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 103,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Korea, Republic of',
    'description' => 'Korea, Republic of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f1628d49-9c25-4dcb-8f85-545e4c8e5abb',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KR',
          'format' => NULL,
          'safe_value' => 'KR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'NPT',
    'description' => 'GBIF Nodes Portal Toolkit - NPT',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f1915551-e83b-4dc3-92f1-27c9ec252583',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 44,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Press',
    'description' => 'Press/media',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f1b19921-ee6b-4c06-876c-8c78aac9d4d8',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 211,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guinea',
    'description' => 'Guinea',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f20dccb3-a989-4ada-9085-042cfae77391',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GN',
          'format' => NULL,
          'safe_value' => 'GN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Denmark',
    'description' => 'Denmark',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f2235b39-a384-4fdc-bd9c-f3aa3021f16a',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DK',
          'format' => NULL,
          'safe_value' => 'DK',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Ukraine',
    'description' => 'Ukraine',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f3be59a2-5c2c-40d5-8c52-db9e69c345e3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UA',
          'format' => NULL,
          'safe_value' => 'UA',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'South Georgia and the South Sandwich Islands',
    'description' => 'South Georgia and the South Sandwich Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f544c338-7ee2-4e2f-87f5-ca86ea18df08',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GS',
          'format' => NULL,
          'safe_value' => 'GS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pitcairn',
    'description' => 'Pitcairn',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6011828-ac2e-459d-8429-69ea3b8b23f3',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PN',
          'format' => NULL,
          'safe_value' => 'PN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Switzerland',
    'description' => 'Switzerland',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f66584e3-1437-4e07-a2fe-cc61aefd9b0c',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CH',
          'format' => NULL,
          'safe_value' => 'CH',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Field biologists',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f691704d-b1c8-4d4a-aec9-6a50f09c01d4',
    'vocabulary_machine_name' => 'tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 88,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Tajikistan',
    'description' => 'Tajikistan',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6a92e7e-f758-4f8a-bea3-e5a70cea0a16',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TJ',
          'format' => NULL,
          'safe_value' => 'TJ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public stakeholders',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6d5f64d-6fd6-42f5-9b5c-1223ef8096b1',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Fiji',
    'description' => 'Fiji',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f7249842-84b2-458b-b2e4-e691dd2d4d5b',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FJ',
          'format' => NULL,
          'safe_value' => 'FJ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF standards',
    'description' => 'Compatible with GBIF-supported standards',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f74fe5ab-8581-40aa-9643-28bbf2eb7cb8',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 120,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Mobilization strategies',
    'description' => 'Strategies for data discovery and publishing It includes data publishing framework, demand-driven publishing and content-needs assessment.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f75fe10c-7921-4d85-9d46-91985188b657',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 47,
        ),
      ),
    ),
    'field_term_attributes' => array(),
  );
  $terms[] = array(
    'name' => 'Solomon Islands',
    'description' => 'Solomon Islands',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f822259e-2a83-4c52-b63d-8ba715a265d6',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SB',
          'format' => NULL,
          'safe_value' => 'SB',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'French Southern Territories',
    'description' => 'French Southern Territories',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f8b9e66f-7e53-43e1-9b4b-fdde3a603769',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TF',
          'format' => NULL,
          'safe_value' => 'TF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Romania',
    'description' => 'Romania',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f8bcaf94-50fd-4d8e-a088-bbc0d19b9071',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RO',
          'format' => NULL,
          'safe_value' => 'RO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'EU BON',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f8ee979a-9a31-4a5b-9f72-fb8000b8dc6c',
    'vocabulary_machine_name' => 'organizations',
    'field_gbif_node_uuid' => array(),
  );
  $terms[] = array(
    'name' => 'GBIF governance',
    'description' => 'GBIF governance (= GBIF Family)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f984bedb-5fc9-4d7b-8037-d28cfd398e1b',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 206,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Iran, Islamic Republic of',
    'description' => 'Iran, Islamic Republic of',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f98d7abf-465f-44e8-a0b3-bedbb6e33053',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IR',
          'format' => NULL,
          'safe_value' => 'IR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'India',
    'description' => 'India',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f9e9ef72-9cbb-4efe-850d-bec132f45f97',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IN',
          'format' => NULL,
          'safe_value' => 'IN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public stakeholders',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => 'fa004904-7bac-4c44-93b6-3232c80533cf',
    'vocabulary_machine_name' => 'audience',
  );
  $terms[] = array(
    'name' => 'Ecuador',
    'description' => 'Ecuador',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fa818ff7-bf09-4d56-bd76-7128b50d575f',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EC',
          'format' => NULL,
          'safe_value' => 'EC',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Vanuatu',
    'description' => 'Vanuatu',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fd234df5-9bbc-4fa5-9e2e-e1411ed881cb',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VU',
          'format' => NULL,
          'safe_value' => 'VU',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'SHP',
    'description' => 'ESRI shapefiles (SHP)',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fdfe5b33-c7f0-496b-9a13-8fd954ffb499',
    'vocabulary_machine_name' => 'internal_tags',
    'field_ims_keyword_id' => array(
      'und' => array(
        0 => array(
          'value' => 112,
        ),
      ),
    ),
    'field_term_attributes' => array(
      'und' => array(
        0 => array(
          'tid' => '456100c5-b75e-4dad-b681-74046c7a0c8f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Africa',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fe4f1b8c-83cc-4050-864e-b755f750d888',
    'vocabulary_machine_name' => 'gbif_area',
    'ge_ims_kp_id' => array(
      'und' => array(
        0 => array(
          'value' => 36,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Montserrat',
    'description' => 'Montserrat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fe723d51-fc78-44c0-89d7-0c682da8b960',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MS',
          'format' => NULL,
          'safe_value' => 'MS',
        ),
      ),
    ),
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
  );
  $terms[] = array(
    'name' => 'Liberia',
    'description' => 'Liberia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fed465e1-2f0e-4fa9-8ed4-993c540f2762',
    'vocabulary_machine_name' => 'countries',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LR',
          'format' => NULL,
          'safe_value' => 'LR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Link',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'ff25fe1c-d969-474d-bf36-fc3ff8dbcc7f',
    'vocabulary_machine_name' => 'resource_type',
  );
  return $terms;
}
