<?php
/**
 * @file
 * gbif_project.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function gbif_project_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Europe',
    'description' => '<p>Europe</p>',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '0125c796-6e46-4936-ba99-3d0de7d64b84',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'Latvia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '01972288-b94d-46d2-9d9a-9d8839e9a36b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LV',
          'format' => NULL,
          'safe_value' => 'LV',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 137,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Latvia',
          'format' => NULL,
          'safe_value' => 'Latvia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Netherlands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '01be7f69-5ccd-4671-8ad0-4e67a49506af',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NL',
          'format' => NULL,
          'safe_value' => 'NL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 173,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1310421600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Netherlands',
          'format' => NULL,
          'safe_value' => 'Netherlands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Viet Nam',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '03ad5980-129a-49fa-ba32-da44a52cea21',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VN',
          'format' => NULL,
          'safe_value' => 'VN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 266,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Viet Nam',
          'format' => NULL,
          'safe_value' => 'Viet Nam',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Helena, Ascension and Tristan da Cunha',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '049539c6-c42a-4d3f-a7d2-3c9857934580',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SH',
          'format' => NULL,
          'safe_value' => 'SH',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 208,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Helena, Ascension and Tristan da Cunha',
          'format' => NULL,
          'safe_value' => 'Saint Helena, Ascension and Tristan da Cunha',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Finland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05867933-dc5e-4c32-91fa-c1a3753946b2',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FI',
          'format' => NULL,
          'safe_value' => 'FI',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 986076000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 83,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1316124000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Finland',
          'format' => NULL,
          'safe_value' => 'Finland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gibraltar',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05b7383f-5868-4a5f-9c10-58655db2117b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GI',
          'format' => NULL,
          'safe_value' => 'GI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 94,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Gibraltar',
          'format' => NULL,
          'safe_value' => 'Gibraltar',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Society for the Preservation of Natural History Collections',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05f0647f-3328-4cfa-9302-270b92650d07',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1167606000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 307,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1306879200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'SPNHC',
          'format' => NULL,
          'safe_value' => 'SPNHC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Namibia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '07f469c6-e1c6-40b2-871b-ec2cb73a9288',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NA',
          'format' => NULL,
          'safe_value' => 'NA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 170,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Namibia',
          'format' => NULL,
          'safe_value' => 'Namibia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oman',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '098368a1-3a4b-4df4-a845-46cc00f5a252',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'OM',
          'format' => NULL,
          'safe_value' => 'OM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 185,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Oman',
          'format' => NULL,
          'safe_value' => 'Oman',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Niue',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '099ddcc3-081d-416d-91d6-0e80fcf6eabb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NU',
          'format' => NULL,
          'safe_value' => 'NU',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 180,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Niue',
          'format' => NULL,
          'safe_value' => 'Niue',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jordan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0a55f078-8b6d-4f6b-a19c-b344ea537047',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JO',
          'format' => NULL,
          'safe_value' => 'JO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 126,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jordan',
          'format' => NULL,
          'safe_value' => 'Jordan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sint Maarten (Dutch part)',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ad4423b-909a-4613-89e2-e6c31e6017d6',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 358,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sint Maarten (Dutch part)',
          'format' => NULL,
          'safe_value' => 'Sint Maarten (Dutch part)',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ireland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0c913566-d5d6-4901-8e58-c60ac7ccb7c1',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IE',
          'format' => NULL,
          'safe_value' => 'IE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1199142000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 118,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1322521200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ireland',
          'format' => NULL,
          'safe_value' => 'Ireland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Comoros',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0d5fa3a3-3b6a-4f7e-921c-f14981472589',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KM',
          'format' => NULL,
          'safe_value' => 'KM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 56,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Comoros',
          'format' => NULL,
          'safe_value' => 'Comoros',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Morocco',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0d80d9c7-aab4-4b23-8a4f-98acb056766c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MA',
          'format' => NULL,
          'safe_value' => 'MA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1041375600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 166,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Morocco',
          'format' => NULL,
          'safe_value' => 'Morocco',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Eritrea',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0f337591-12da-445e-b64f-c87df2308453',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ER',
          'format' => NULL,
          'safe_value' => 'ER',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 76,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Eritrea',
          'format' => NULL,
          'safe_value' => 'Eritrea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Inter-American Biodiversity Information Network',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0f4f6518-5b36-4de7-8b3c-b0a75f5e2bb6',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 988668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 296,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1381874400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'IABIN',
          'format' => NULL,
          'safe_value' => 'IABIN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Oceania',
    'description' => '<p>Oceania</p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0f54315c-caed-4474-b449-80f35c83481d',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'Philippines',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '11879bdd-c7a8-40aa-9546-a4e2d3c8aff2',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PH',
          'format' => NULL,
          'safe_value' => 'PH',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1109631600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 194,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1314050400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Philippines',
          'format' => NULL,
          'safe_value' => 'Philippines',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'International Centre for Integrated Mountain Development',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '12380e84-2bcb-4bdb-8040-06a5c848909c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NP',
          'format' => NULL,
          'safe_value' => 'NP',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1251756000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 320,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1307570400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ICIMOD',
          'format' => NULL,
          'safe_value' => 'ICIMOD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Encyclopedia of Life',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '13860047-9faf-4e85-9cbb-a1894a3443d8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1199142000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 291,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1343253600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'EOL',
          'format' => NULL,
          'safe_value' => 'EOL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United Nations Educational Scientific and Cultural Organisation, Man and the Biosphere Programme',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '14369618-851e-4691-986f-d2a7cf2baacd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 988668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 348,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'UNESCO-MAB',
          'format' => NULL,
          'safe_value' => 'UNESCO-MAB',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'French Polynesia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '145ea0fe-6069-4ca5-9187-688d2784000e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PF',
          'format' => NULL,
          'safe_value' => 'PF',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 86,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'French Polynesia',
          'format' => NULL,
          'safe_value' => 'French Polynesia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IUCN',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '14d3a795-290d-488f-92fe-9e92bffafb9b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1057010400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 346,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'IUCN',
          'format' => NULL,
          'safe_value' => 'IUCN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pitcairn',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '157bce2d-c0bb-4d89-b93a-2caf30b71ef0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PN',
          'format' => NULL,
          'safe_value' => 'PN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 195,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Pitcairn',
          'format' => NULL,
          'safe_value' => 'Pitcairn',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Venezuela, Bolivarian Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '15b79745-41e0-46aa-b35a-c15e3c732943',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VE',
          'format' => NULL,
          'safe_value' => 'VE',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 265,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Venezuela, Bolivarian Republic of',
          'format' => NULL,
          'safe_value' => 'Venezuela, Bolivarian Republic of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rwanda',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '15ea47b4-2819-4db7-9212-2684bcc920ed',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RW',
          'format' => NULL,
          'safe_value' => 'RW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 205,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Rwanda',
          'format' => NULL,
          'safe_value' => 'Rwanda',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guinea-Bissau',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '16ac382a-3464-4d0e-b815-e876200ad3fc',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GW',
          'format' => NULL,
          'safe_value' => 'GW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 103,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guinea-Bissau',
          'format' => NULL,
          'safe_value' => 'Guinea-Bissau',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Slovakia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '17fd89bb-0068-4ebb-b72f-0cacc7f06a03',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SK',
          'format' => NULL,
          'safe_value' => 'SK',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 996616800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 223,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Slovakia',
          'format' => NULL,
          'safe_value' => 'Slovakia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Turks and Caicos Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '18197d9f-9095-4e57-8465-ed82a815c9b8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TC',
          'format' => NULL,
          'safe_value' => 'TC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 251,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Turks and Caicos Islands',
          'format' => NULL,
          'safe_value' => 'Turks and Caicos Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Romania',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '18d8cf79-bc6b-4c16-be83-17e6f2ff1cee',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RO',
          'format' => NULL,
          'safe_value' => 'RO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 203,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Romania',
          'format' => NULL,
          'safe_value' => 'Romania',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Costa Rica',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '19d7d5a6-7e07-436f-b018-ed33b29cc22f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CR',
          'format' => NULL,
          'safe_value' => 'CR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 988668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 60,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1321484400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Costa Rica',
          'format' => NULL,
          'safe_value' => 'Costa Rica',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'North America',
    'description' => '<p>North America</p>',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '19e9f180-72bc-4edb-abf9-57a00876bb01',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'British Indian Ocean Territory',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1becdf8b-b218-4755-88b5-76c2a69223b6',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IO',
          'format' => NULL,
          'safe_value' => 'IO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 38,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'British Indian Ocean Territory',
          'format' => NULL,
          'safe_value' => 'British Indian Ocean Territory',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Kitts and Nevis',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1d0672df-c5a6-47b7-9a5b-e0dc3b33fa76',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KN',
          'format' => NULL,
          'safe_value' => 'KN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 209,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Kitts and Nevis',
          'format' => NULL,
          'safe_value' => 'Saint Kitts and Nevis',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sao Tome And Principe',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1dd4588d-51b5-4ee4-8be2-e514feb6d997',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 216,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sao Tome And Principe',
          'format' => NULL,
          'safe_value' => 'Sao Tome And Principe',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Northern Mariana Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1e417d66-bfb1-4f2a-bfe2-18fcb0fa5562',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MP',
          'format' => NULL,
          'safe_value' => 'MP',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 182,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Northern Mariana Islands',
          'format' => NULL,
          'safe_value' => 'Northern Mariana Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sri Lanka',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1e5aebb0-6002-4a40-b9ff-c7d0222788f2',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LK',
          'format' => NULL,
          'safe_value' => 'LK',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 230,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sri Lanka',
          'format' => NULL,
          'safe_value' => 'Sri Lanka',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Svalbard and Jan Mayen',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1ebcb094-7586-44d2-8e0a-97950c1dd8ac',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 233,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Svalbard and Jan Mayen',
          'format' => NULL,
          'safe_value' => 'Svalbard and Jan Mayen',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lithuania',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '208c23f5-b8a4-4262-84b3-ab198033b8fd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LT',
          'format' => NULL,
          'safe_value' => 'LT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 143,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lithuania',
          'format' => NULL,
          'safe_value' => 'Lithuania',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'European Environment Agency',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '20e768d4-5fd2-4df4-93ec-59dea119ef8e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DK',
          'format' => NULL,
          'safe_value' => 'DK',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1283292000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 349,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1317765600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'EEA',
          'format' => NULL,
          'safe_value' => 'EEA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mauritania',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '21bc636c-8881-48bb-822a-259583984ef3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MR',
          'format' => NULL,
          'safe_value' => 'MR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1249077600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 156,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1303250400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mauritania',
          'format' => NULL,
          'safe_value' => 'Mauritania',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mayotte',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '24092af2-213e-4036-ad4f-9d3ca0e7a224',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'YT',
          'format' => NULL,
          'safe_value' => 'YT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 158,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mayotte',
          'format' => NULL,
          'safe_value' => 'Mayotte',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Qatar',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '25bb726c-c98e-4e0c-b3de-a56647a3044a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'QA',
          'format' => NULL,
          'safe_value' => 'QA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 200,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Qatar',
          'format' => NULL,
          'safe_value' => 'Qatar',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Botanic Gardens Conservation International',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '26e8ddbc-0d05-4698-ba95-408cf0b3ae3b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1091311200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 283,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1319061600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BGCI',
          'format' => NULL,
          'safe_value' => 'BGCI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sudan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '27bbe15c-459c-462a-a21e-3a613ad96959',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SD',
          'format' => NULL,
          'safe_value' => 'SD',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 231,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sudan',
          'format' => NULL,
          'safe_value' => 'Sudan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Panama',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '28ec21c7-f91d-4103-a898-aa57fdfc34d1',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PA',
          'format' => NULL,
          'safe_value' => 'PA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 190,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Panama',
          'format' => NULL,
          'safe_value' => 'Panama',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tokelau',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '29075c86-146d-49ae-8c39-b87bce9055d4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TK',
          'format' => NULL,
          'safe_value' => 'TK',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 245,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tokelau',
          'format' => NULL,
          'safe_value' => 'Tokelau',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kiribati',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2aeaa7fb-9f46-47e4-bfb6-fec53f319aa8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KI',
          'format' => NULL,
          'safe_value' => 'KI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 130,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kiribati',
          'format' => NULL,
          'safe_value' => 'Kiribati',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Portugal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2b90c5b3-4958-4671-8b24-b70c5b0bfd28',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PT',
          'format' => NULL,
          'safe_value' => 'PT',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 991346400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 197,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1308520800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Portugal',
          'format' => NULL,
          'safe_value' => 'Portugal',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Singapore',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2bc6aea9-3180-4fda-88fe-4f9e027363fb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SG',
          'format' => NULL,
          'safe_value' => 'SG',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 222,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Singapore',
          'format' => NULL,
          'safe_value' => 'Singapore',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dominica',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2c2e0311-36fc-4b2f-b105-61c531afe65b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DM',
          'format' => NULL,
          'safe_value' => 'DM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 69,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Dominica',
          'format' => NULL,
          'safe_value' => 'Dominica',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Barbados',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2d2faeb2-b2de-448e-8ba4-f60de9c6a1eb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BB',
          'format' => NULL,
          'safe_value' => 'BB',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 26,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Barbados',
          'format' => NULL,
          'safe_value' => 'Barbados',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kazakhstan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e2e33d6-38ec-49ed-894a-cb2675768ff9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KZ',
          'format' => NULL,
          'safe_value' => 'KZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 128,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kazakhstan',
          'format' => NULL,
          'safe_value' => 'Kazakhstan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Western Sahara',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e58eee9-6dbb-4eb3-b045-3e2de319ab67',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EH',
          'format' => NULL,
          'safe_value' => 'EH',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 268,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Western Sahara',
          'format' => NULL,
          'safe_value' => 'Western Sahara',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gambia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e8759d0-de55-469e-a20f-e91c84a2f670',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GM',
          'format' => NULL,
          'safe_value' => 'GM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 90,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Gambia',
          'format' => NULL,
          'safe_value' => 'Gambia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Holy See (Vatican City State)',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2f0e6a8a-2f8f-4121-8af0-2e1d18881aac',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 108,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Holy See (Vatican City State) ',
          'format' => NULL,
          'safe_value' => 'Holy See (Vatican City State) ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Intergovernmental Oceanographic Commission of the United Nations Educational Scientific and Cultural Organisation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '30933853-3046-44fb-8c71-06a9986814dd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BE',
          'format' => NULL,
          'safe_value' => 'BE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1412114400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 368,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'ga',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'IOC/UNESCO',
          'format' => NULL,
          'safe_value' => 'IOC/UNESCO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Belgium',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '31801b7c-4553-4c90-9bf9-502999f183c5',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BE',
          'format' => NULL,
          'safe_value' => 'BE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 28,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1341525600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Belgium',
          'format' => NULL,
          'safe_value' => 'Belgium',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Réunion',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '337dd547-2cbe-4e5b-b708-ccb2855111e5',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RE',
          'format' => NULL,
          'safe_value' => 'RE',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 202,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Réunion',
          'format' => NULL,
          'safe_value' => 'Réunion',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Aruba',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '33eecaed-e6d2-4185-ad4e-6afb791d2d94',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AW',
          'format' => NULL,
          'safe_value' => 'AW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 18,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Aruba',
          'format' => NULL,
          'safe_value' => 'Aruba',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Martinique',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '344b6f72-d688-4f27-b2e5-8b694fa665c9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MQ',
          'format' => NULL,
          'safe_value' => 'MQ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 155,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Martinique',
          'format' => NULL,
          'safe_value' => 'Martinique',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pacific Biodiversity Information Forum',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '34eef354-4e46-4d0b-b4be-d56a045e7cdb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1091311200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 305,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1327446000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'PBIF',
          'format' => NULL,
          'safe_value' => 'PBIF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Malasya',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3584f68e-625f-44de-9b57-ec074b544b08',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MY',
          'format' => NULL,
          'safe_value' => 'MY',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 150,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Malasya',
          'format' => NULL,
          'safe_value' => 'Malasya',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data Observation Network for Earth',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '36ad64e8-8180-48e3-8a92-0ab4a42a222e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1406844000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 367,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'ga',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'DataONE',
          'format' => NULL,
          'safe_value' => 'DataONE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bosnia and Herzegovina',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '36ed4166-c6a5-4844-9e0b-be2fa7950f6e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BA',
          'format' => NULL,
          'safe_value' => 'BA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 34,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bosnia and Herzegovina',
          'format' => NULL,
          'safe_value' => 'Bosnia and Herzegovina',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Czech Republic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3720cc35-3809-44f2-93cc-d9ef126e272b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CZ',
          'format' => NULL,
          'safe_value' => 'CZ',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1033423200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 65,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Czech Republic',
          'format' => NULL,
          'safe_value' => 'Czech Republic',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cape Verde',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3776127c-5c72-4d28-b494-dfb460adc088',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CV',
          'format' => NULL,
          'safe_value' => 'CV',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 47,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cape Verde',
          'format' => NULL,
          'safe_value' => 'Cape Verde',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cambodia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '383d0c6c-2295-452c-a3c6-80d1fdf68ecb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KH',
          'format' => NULL,
          'safe_value' => 'KH',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 44,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cambodia',
          'format' => NULL,
          'safe_value' => 'Cambodia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Congo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '396fb528-f8ca-4635-a90f-e1aa7327bfca',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CG',
          'format' => NULL,
          'safe_value' => 'CG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1304200800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 57,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1305496800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Congo',
          'format' => NULL,
          'safe_value' => 'Congo',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'World Federation for Culture Collections',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3a615fe8-612f-4ae4-949a-cafd0d02b5d4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CN',
          'format' => NULL,
          'safe_value' => 'CN',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1033423200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 313,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1325631600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'WFCC',
          'format' => NULL,
          'safe_value' => 'WFCC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Malta',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3a63415c-d566-4961-a875-5f829aeb9ff4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MT',
          'format' => NULL,
          'safe_value' => 'MT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 153,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Malta',
          'format' => NULL,
          'safe_value' => 'Malta',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Iceland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3a741168-6af4-41cb-93f3-50dd6f09e929',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IS',
          'format' => NULL,
          'safe_value' => 'IS',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 991346400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 113,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1331074800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Iceland',
          'format' => NULL,
          'safe_value' => 'Iceland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Montserrat',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3dbff154-2708-4be6-8ce5-5ab64982e23b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MS',
          'format' => NULL,
          'safe_value' => 'MS',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 165,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Montserrat',
          'format' => NULL,
          'safe_value' => 'Montserrat',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Argentina',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3de23fd1-20c5-4511-9e14-762d2ba2f933',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AR',
          'format' => NULL,
          'safe_value' => 'AR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1014937200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 16,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Argentina',
          'format' => NULL,
          'safe_value' => 'Argentina',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tonga',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3e721e15-c641-4496-b9b5-2d0ff43a7d6b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TO',
          'format' => NULL,
          'safe_value' => 'TO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 246,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tonga',
          'format' => NULL,
          'safe_value' => 'Tonga',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Croatia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3ed1b135-35c8-48e0-b317-9aaaca304732',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HR',
          'format' => NULL,
          'safe_value' => 'HR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 62,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Croatia',
          'format' => NULL,
          'safe_value' => 'Croatia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Somalia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3f7c2773-9aa2-4579-b65f-761559a6f97a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SO',
          'format' => NULL,
          'safe_value' => 'SO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 226,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Somalia',
          'format' => NULL,
          'safe_value' => 'Somalia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Afghanistan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4116349e-d2ac-415b-bcab-6cf3f537794f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AF',
          'format' => NULL,
          'safe_value' => 'AF',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 6,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Afghanistan',
          'format' => NULL,
          'safe_value' => 'Afghanistan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lao People\'s Democratic Republic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4258a7b6-cc8b-4a39-acc5-e790781f365d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 136,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lao People\'s Democratic Republic',
          'format' => NULL,
          'safe_value' => 'Lao People&#039;s Democratic Republic',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Uzbekistan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4321523d-4d57-4982-848b-1a038d84ed6a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UZ',
          'format' => NULL,
          'safe_value' => 'UZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 261,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Uzbekistan',
          'format' => NULL,
          'safe_value' => 'Uzbekistan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Lucia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '448c8b45-cd94-4a41-948b-5053773c5e63',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LC',
          'format' => NULL,
          'safe_value' => 'LC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 210,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Lucia',
          'format' => NULL,
          'safe_value' => 'Saint Lucia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Central African Republic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4508cbe2-8f47-4d32-8323-4e9a797cc438',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CF',
          'format' => NULL,
          'safe_value' => 'CF',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1298934000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 49,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1298502000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Central African Republic',
          'format' => NULL,
          'safe_value' => 'Central African Republic',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ETI Bioinformatics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4785abaa-2e80-4d14-be48-574abdb7d4ff',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NL',
          'format' => NULL,
          'safe_value' => 'NL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 292,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1307311200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ETI Bioinformatics',
          'format' => NULL,
          'safe_value' => 'ETI Bioinformatics',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Macao',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4787251f-c8e5-47fd-a964-d0cb6fb69304',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 146,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Macao',
          'format' => NULL,
          'safe_value' => 'Macao',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Belize',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4834336f-f011-4cea-9049-0a2e6f1856e4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BZ',
          'format' => NULL,
          'safe_value' => 'BZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 29,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Belize',
          'format' => NULL,
          'safe_value' => 'Belize',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bulgaria',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '483bc407-c3c8-44ff-9e5b-6eae7a1dd949',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BG',
          'format' => NULL,
          'safe_value' => 'BG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 996616800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 40,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bulgaria',
          'format' => NULL,
          'safe_value' => 'Bulgaria',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bhutan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4a677083-3c3c-4e77-a643-79522febda63',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BT',
          'format' => NULL,
          'safe_value' => 'BT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 32,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bhutan',
          'format' => NULL,
          'safe_value' => 'Bhutan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mauritius',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4b7321e9-bec4-4303-b66d-6a7fac9801c9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MU',
          'format' => NULL,
          'safe_value' => 'MU',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 157,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mauritius',
          'format' => NULL,
          'safe_value' => 'Mauritius',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Discover Life',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4d81d5ed-f031-4031-a1ec-1538e0c7b9ae',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1201820400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 289,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1317333600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Discover Life',
          'format' => NULL,
          'safe_value' => 'Discover Life',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Haiti',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4db1ff9c-45fe-4718-95f2-68f609f9f45b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HT',
          'format' => NULL,
          'safe_value' => 'HT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 106,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Haiti',
          'format' => NULL,
          'safe_value' => 'Haiti',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sierra Leone',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4ef1718f-2ab8-4b06-9fc3-670fcf230295',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SL',
          'format' => NULL,
          'safe_value' => 'SL',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 221,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sierra Leone',
          'format' => NULL,
          'safe_value' => 'Sierra Leone',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Integrated Taxonomic Information System',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '50db39f4-265c-40af-ba86-8b3b520c4628',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 295,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1330642800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ITIS',
          'format' => NULL,
          'safe_value' => 'ITIS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hungary',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '51ed6ed4-412f-49a9-a4de-cfb37de41bc7',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HU',
          'format' => NULL,
          'safe_value' => 'HU',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 111,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Hungary',
          'format' => NULL,
          'safe_value' => 'Hungary',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Israel',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '52a622f7-6488-4d32-b153-7a93d7895b0a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IL',
          'format' => NULL,
          'safe_value' => 'IL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1364767200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 120,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1366149600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Israel',
          'format' => NULL,
          'safe_value' => 'Israel',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Austria',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '52af78db-c52f-4200-b504-1b24234e12e3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AT',
          'format' => NULL,
          'safe_value' => 'AT',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 999295200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 20,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1306792800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Austria',
          'format' => NULL,
          'safe_value' => 'Austria',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Africa',
    'description' => '<p>Africa</p>',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '52b1baee-e250-49a0-abc6-e0745cc3c325',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'Albania',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '539c45cc-ccad-432d-ba3e-3b60384ec116',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AL',
          'format' => NULL,
          'safe_value' => 'AL',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 8,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Albania',
          'format' => NULL,
          'safe_value' => 'Albania',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cyprus',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '53dee346-faa9-40d4-8a71-688562920d08',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CY',
          'format' => NULL,
          'safe_value' => 'CY',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 64,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cyprus',
          'format' => NULL,
          'safe_value' => 'Cyprus',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Estonia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '548c457e-6a8e-4b9a-ae6b-02ca898e2be1',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EE',
          'format' => NULL,
          'safe_value' => 'EE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1062367200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 77,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1329260400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Estonia',
          'format' => NULL,
          'safe_value' => 'Estonia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ukraine',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '56cc6654-d0d8-4873-b99f-2bcee22668b1',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UA',
          'format' => NULL,
          'safe_value' => 'UA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 255,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ukraine',
          'format' => NULL,
          'safe_value' => 'Ukraine',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'New Zealand',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '56de313c-3f17-4ea0-bd7f-399ca57d1d96',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NZ',
          'format' => NULL,
          'safe_value' => 'NZ',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 176,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1335736800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'New Zealand',
          'format' => NULL,
          'safe_value' => 'New Zealand',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guadaloupe',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5838ba45-4b13-492b-ac3c-1638321c94fa',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GP',
          'format' => NULL,
          'safe_value' => 'GP',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 98,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guadaloupe',
          'format' => NULL,
          'safe_value' => 'Guadaloupe',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jersey',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5a1f03b1-75c2-4e88-8cb6-10878f1edad4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 125,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jersey',
          'format' => NULL,
          'safe_value' => 'Jersey',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nauru',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5a846071-2a63-4423-9ac9-415c09a4cce3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NR',
          'format' => NULL,
          'safe_value' => 'NR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 171,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nauru',
          'format' => NULL,
          'safe_value' => 'Nauru',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Peru',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5cf46ccf-1328-4fac-ac6e-f46c210de9b6',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PE',
          'format' => NULL,
          'safe_value' => 'PE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1030831200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 193,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1423522800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Peru',
          'format' => NULL,
          'safe_value' => 'Peru',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Marshall Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5d286f53-8b71-4259-9825-b08401172af4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MH',
          'format' => NULL,
          'safe_value' => 'MH',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 154,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Marshall Islands',
          'format' => NULL,
          'safe_value' => 'Marshall Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Netherlands Antilles',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5dbd1d0c-4a22-4822-8a97-4e1b11aeb9b9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AN',
          'format' => NULL,
          'safe_value' => 'AN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 174,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Netherlands Antilles',
          'format' => NULL,
          'safe_value' => 'Netherlands Antilles',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Italy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5eb87d0d-906f-4b96-8a01-6bd5bb31dda0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IT',
          'format' => NULL,
          'safe_value' => 'IT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 121,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Italy',
          'format' => NULL,
          'safe_value' => 'Italy',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Channel Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5f6e087a-5f3b-40f3-b8dc-648c213fbf33',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 273,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Channel Islands',
          'format' => NULL,
          'safe_value' => 'Channel Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bahamas',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5f767b8d-030c-4284-9098-920a147dc52d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BS',
          'format' => NULL,
          'safe_value' => 'BS',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 23,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bahamas',
          'format' => NULL,
          'safe_value' => 'Bahamas',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Society for the Management of Electronic Biodiversity Data',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '609e2f42-2740-4c31-b223-9a51b15c7fdf',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NZ',
          'format' => NULL,
          'safe_value' => 'NZ',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1235862000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 318,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1306879200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'SMEBD',
          'format' => NULL,
          'safe_value' => 'SMEBD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Iraq',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '60d2749b-2214-44c4-9897-4887cc8e7b83',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IQ',
          'format' => NULL,
          'safe_value' => 'IQ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 117,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Iraq',
          'format' => NULL,
          'safe_value' => 'Iraq',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'People’s Republic of China',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '61cd2c2a-b5e9-415e-9013-be3ff8eacda6',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CN',
          'format' => NULL,
          'safe_value' => 'CN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 52,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'China',
          'format' => NULL,
          'safe_value' => 'China',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chile',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '63a0bbc3-866b-410a-97f3-4ca41aa5906c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CL',
          'format' => NULL,
          'safe_value' => 'CL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1259622000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 51,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1359932400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Chile',
          'format' => NULL,
          'safe_value' => 'Chile',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bahrain',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '63a20c40-8c2f-4333-a41f-528ca7abf71e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BH',
          'format' => NULL,
          'safe_value' => 'BH',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 24,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bahrain',
          'format' => NULL,
          'safe_value' => 'Bahrain',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Endangered Wildlife Trust',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '65532f44-9c18-4e44-8b2c-56e25304af6e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZA',
          'format' => NULL,
          'safe_value' => 'ZA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1214863200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 316,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1303336800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'EWT',
          'format' => NULL,
          'safe_value' => 'EWT',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Arctic',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => '6660d126-5549-40bb-9ebf-8a5fb829d82e',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'Dominican Republic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '685696de-ef04-4c2a-89eb-e728ce6f4574',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DO',
          'format' => NULL,
          'safe_value' => 'DO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 70,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Dominican Republic',
          'format' => NULL,
          'safe_value' => 'Dominican Republic',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hong Kong',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '69650928-a730-435a-9097-d242739bdde8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 110,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Hong Kong',
          'format' => NULL,
          'safe_value' => 'Hong Kong',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Senegal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6a534018-5b34-46b1-9381-eaa2c88bf23d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SN',
          'format' => NULL,
          'safe_value' => 'SN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 218,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Senegal',
          'format' => NULL,
          'safe_value' => 'Senegal',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Asia',
    'description' => '<p>Asia</p>',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '6bec3edf-8402-4b54-9985-1e76d7fdd10f',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'Malawi',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6c2a94c1-129e-40f0-82b7-f4edaa5f71b8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MW',
          'format' => NULL,
          'safe_value' => 'MW',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1420066800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 149,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1399500000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Malawi',
          'format' => NULL,
          'safe_value' => 'Malawi',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Zimbabwe',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6ecd3bb0-51cf-4671-9cd5-5a206dcd0f74',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZW',
          'format' => NULL,
          'safe_value' => 'ZW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 271,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Zimbabwe',
          'format' => NULL,
          'safe_value' => 'Zimbabwe',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nordic Genetic Resource Center',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6f56d2d0-fe75-4b32-8c84-47300de010ba',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SE',
          'format' => NULL,
          'safe_value' => 'SE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1078095600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 303,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1313445600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'NORDGEN',
          'format' => NULL,
          'safe_value' => 'NORDGEN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Uruguay',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '71f11959-08fb-4e77-821b-108ed56e3ad8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UY',
          'format' => NULL,
          'safe_value' => 'UY',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1230764400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 260,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1412287200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Uruguay',
          'format' => NULL,
          'safe_value' => 'Uruguay',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Puerto Rico',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '725ee680-8d53-41d7-9fb4-2d6b8961a845',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PR',
          'format' => NULL,
          'safe_value' => 'PR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 198,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Puerto Rico',
          'format' => NULL,
          'safe_value' => 'Puerto Rico',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antarctica',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '73d31353-950f-43b4-812f-7d385e4c3e47',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AQ',
          'format' => NULL,
          'safe_value' => 'AQ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 14,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Antarctica',
          'format' => NULL,
          'safe_value' => 'Antarctica',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Spain',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '74216036-d9f4-4c44-b5f5-df17b6244004',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ES',
          'format' => NULL,
          'safe_value' => 'ES',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(
      'und' => array(
        0 => array(
          'url' => 'http://web.micinn.es/contenido.asp?menu1=&amp;menu2=&amp;menu3=&amp;dir=01_Portada&amp;idioma=en',
          'title' => '',
          'attributes' => array(),
        ),
      ),
    ),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1316988000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Spain',
          'format' => NULL,
          'safe_value' => 'Spain',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Maldives',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '745b756a-9ba5-4373-86e7-8cb913b6d536',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MV',
          'format' => NULL,
          'safe_value' => 'MV',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 151,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Maldives',
          'format' => NULL,
          'safe_value' => 'Maldives',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ecuador',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '74fb097b-f40a-46c3-8ae0-fb6eb633b5d5',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EC',
          'format' => NULL,
          'safe_value' => 'EC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 72,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ecuador',
          'format' => NULL,
          'safe_value' => 'Ecuador',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Turkey',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '75a1f98f-fff5-4eb9-8992-9bf42aaf4333',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TR',
          'format' => NULL,
          'safe_value' => 'TR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 249,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Turkey',
          'format' => NULL,
          'safe_value' => 'Turkey',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'South Africa',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '761573f6-51e9-4807-a643-5c718a3fb936',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZA',
          'format' => NULL,
          'safe_value' => 'ZA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1049148000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 227,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1324508400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'South Africa',
          'format' => NULL,
          'safe_value' => 'South Africa',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guernsey',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '76451a47-2fda-4368-8454-33b754aeb134',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 101,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guernsey',
          'format' => NULL,
          'safe_value' => 'Guernsey',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Micronesia, Federated States of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '766fc532-6c56-42dc-a666-9aa1626ee0c0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 160,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Micronesia, Federated States of',
          'format' => NULL,
          'safe_value' => 'Micronesia, Federated States of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Faroe Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '77149f8d-24d3-45f3-9281-4c8b8c4aa81a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 81,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Faroe Islands',
          'format' => NULL,
          'safe_value' => 'Faroe Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Iran, Islamic Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7735bb47-6bfd-4c40-877d-974adc655dbb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 116,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Iran, Islamic Republic of',
          'format' => NULL,
          'safe_value' => 'Iran, Islamic Republic of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cocos (Keeling) Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7852b0e3-9404-486a-b19c-4de25740c127',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 54,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cocos (Keeling) Islands',
          'format' => NULL,
          'safe_value' => 'Cocos (Keeling) Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Togo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '79028162-956b-4d79-9931-821a8a61b727',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TG',
          'format' => NULL,
          'safe_value' => 'TG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1254348000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 244,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1423782000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Togo',
          'format' => NULL,
          'safe_value' => 'Togo',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nepal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '79ced281-1b74-4df2-8859-3f8fc2d5d88c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NP',
          'format' => NULL,
          'safe_value' => 'NP',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 172,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nepal',
          'format' => NULL,
          'safe_value' => 'Nepal',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Luxembourg',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7a4f54fe-a104-402b-87fe-f86e8c5d6328',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LU',
          'format' => NULL,
          'safe_value' => 'LU',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1207000800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 144,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1366840800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Luxembourg',
          'format' => NULL,
          'safe_value' => 'Luxembourg',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lesotho',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7aeba1eb-aed2-4cb9-bcdf-1b580efa5aba',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LS',
          'format' => NULL,
          'safe_value' => 'LS',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 139,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lesotho',
          'format' => NULL,
          'safe_value' => 'Lesotho',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Barthélemy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7c3de1f1-04db-42b7-b927-ca022910d35b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 207,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Barthélemy',
          'format' => NULL,
          'safe_value' => 'Saint Barthélemy',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Denmark',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e5a157a-7aeb-4896-8322-1fc2de39825e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DK',
          'format' => NULL,
          'safe_value' => 'DK',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 978303600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1303855200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Denmark',
          'format' => NULL,
          'safe_value' => 'Denmark',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Naturalis Biodiversity Center',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e89d808-01da-4f66-ab14-d368a87e93eb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NL',
          'format' => NULL,
          'safe_value' => 'NL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1404165600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 364,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1405116000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Naturalis',
          'format' => NULL,
          'safe_value' => 'Naturalis',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guam',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7f353536-6dd7-4013-8d68-85772aeedbe9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GU',
          'format' => NULL,
          'safe_value' => 'GU',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 99,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guam',
          'format' => NULL,
          'safe_value' => 'Guam',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Brazil',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8027e5a9-3e8f-486b-b662-a95cafaabbcb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BR',
          'format' => NULL,
          'safe_value' => 'BR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1349042400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 37,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1351029600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Brazil',
          'format' => NULL,
          'safe_value' => 'Brazil',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Suriname',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8041dd0f-145a-4509-8121-eef449ca5f87',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SR',
          'format' => NULL,
          'safe_value' => 'SR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 232,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Suriname',
          'format' => NULL,
          'safe_value' => 'Suriname',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Moldova, Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '804975aa-f521-4b53-b89a-fb4b1b2e85df',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MD',
          'format' => NULL,
          'safe_value' => 'MD',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 161,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Moldova, Republic of',
          'format' => NULL,
          'safe_value' => 'Moldova, Republic of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Djibouti',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8168bb60-6ed5-43fc-9c2e-4404393172de',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DJ',
          'format' => NULL,
          'safe_value' => 'DJ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 68,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Djibouti',
          'format' => NULL,
          'safe_value' => 'Djibouti',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Papua New Guinea',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8173ea02-aeb0-4791-b585-01bc0ca4dc86',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PG',
          'format' => NULL,
          'safe_value' => 'PG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1075590000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 191,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Papua New Guinea',
          'format' => NULL,
          'safe_value' => 'Papua New Guinea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guatemala',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8189cfb6-f943-4ace-9d0d-d9840ef59ffb',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GT',
          'format' => NULL,
          'safe_value' => 'GT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 100,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guatemala',
          'format' => NULL,
          'safe_value' => 'Guatemala',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Seychelles',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '829dd739-f638-4b51-9066-2341e6add434',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SC',
          'format' => NULL,
          'safe_value' => 'SC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 220,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Seychelles',
          'format' => NULL,
          'safe_value' => 'Seychelles',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'New Caledonia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8397c1fd-cd98-4a92-b772-9913a6212e67',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NC',
          'format' => NULL,
          'safe_value' => 'NC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 175,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'New Caledonia',
          'format' => NULL,
          'safe_value' => 'New Caledonia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Niger',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8566e8ce-3016-4f50-9aff-eed9ea913451',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NE',
          'format' => NULL,
          'safe_value' => 'NE',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 178,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Niger',
          'format' => NULL,
          'safe_value' => 'Niger',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chinese Academy of Sciences',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85afcb84-7900-4a7a-bcd8-45fb999a0e0c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CN',
          'format' => NULL,
          'safe_value' => 'CN',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1377986400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 363,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1379109600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CAS',
          'format' => NULL,
          'safe_value' => 'CAS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cook Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8700f0ad-3631-4065-8a24-923c34834072',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CK',
          'format' => NULL,
          'safe_value' => 'CK',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 59,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cook Islands',
          'format' => NULL,
          'safe_value' => 'Cook Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Angola',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '87c261d5-219d-47c6-8d46-1c1077dd2ffa',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AO',
          'format' => NULL,
          'safe_value' => 'AO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 12,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Angola',
          'format' => NULL,
          'safe_value' => 'Angola',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bolivia, Plurinational State of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '898b1eb4-18ba-492a-bbcd-98071c41b1f8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BO',
          'format' => NULL,
          'safe_value' => 'BO',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 33,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bolivia',
          'format' => NULL,
          'safe_value' => 'Bolivia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Major Systematic Entomology Facilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '89a1e8ec-cc25-4583-9ad8-4e761b7936ad',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1138748400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 300,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'MSEF',
          'format' => NULL,
          'safe_value' => 'MSEF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Libya',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8a62a5d7-cfc5-4e59-867f-9810e3596803',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 141,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Libya',
          'format' => NULL,
          'safe_value' => 'Libya',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Species 2000',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8af76ba0-bb7e-4650-91fe-49f51c852cad',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NL',
          'format' => NULL,
          'safe_value' => 'NL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 308,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1317852000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Species 2000',
          'format' => NULL,
          'safe_value' => 'Species 2000',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United Arab Emirates',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8c017f1d-3306-4aa7-ab63-6896b2c1de96',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AE',
          'format' => NULL,
          'safe_value' => 'AE',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 256,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'United Arab Emirates',
          'format' => NULL,
          'safe_value' => 'United Arab Emirates',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bermuda',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8d37671d-1992-4ccd-9b3a-00302df9cafc',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BM',
          'format' => NULL,
          'safe_value' => 'BM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 31,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bermuda',
          'format' => NULL,
          'safe_value' => 'Bermuda',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Belarus',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8dd67c24-00d8-4a34-9fea-9c6735054ca9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BY',
          'format' => NULL,
          'safe_value' => 'BY',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 27,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Belarus',
          'format' => NULL,
          'safe_value' => 'Belarus',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guinea',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8e6acea6-62be-4278-8a9c-db76afce95d3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GN',
          'format' => NULL,
          'safe_value' => 'GN',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1109631600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 102,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1312236000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guinea',
          'format' => NULL,
          'safe_value' => 'Guinea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Madagascar',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8ef9c5ac-418e-41d3-bcd8-4afd35fb06c3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MG',
          'format' => NULL,
          'safe_value' => 'MG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1041375600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 148,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1307311200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Madagascar',
          'format' => NULL,
          'safe_value' => 'Madagascar',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'European Commission',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8f044d2b-a48a-4c45-bb3e-4804f5f29774',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 345,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
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
    'name' => 'Azerbaijan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8f1d153d-2ee9-4e68-9d43-d6d21660aec2',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AZ',
          'format' => NULL,
          'safe_value' => 'AZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 21,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Azerbaijan',
          'format' => NULL,
          'safe_value' => 'Azerbaijan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cameroon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9023b163-07d8-4ab5-81e1-915e84439fc8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CM',
          'format' => NULL,
          'safe_value' => 'CM',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1109631600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 45,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'ob',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cameroon',
          'format' => NULL,
          'safe_value' => 'Cameroon',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Consortium for the Barcode of Life',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '907bdb92-8f9e-4c9d-a936-8d323b7c79ae',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1109631600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 287,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1369173600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CBOL',
          'format' => NULL,
          'safe_value' => 'CBOL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Paraguay',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '91d51146-b51e-4ee3-92f3-ef3913193c31',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PY',
          'format' => NULL,
          'safe_value' => 'PY',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 192,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Paraguay',
          'format' => NULL,
          'safe_value' => 'Paraguay',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Macedonia, the Former Yugoslav Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '93a59c5a-ca89-49f3-aa72-26519e1cac8b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MK',
          'format' => NULL,
          'safe_value' => 'MK',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 147,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Macedonia, the Former Yugoslav Republic of ',
          'format' => NULL,
          'safe_value' => 'Macedonia, the Former Yugoslav Republic of ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'International Centre for Insect Physiology and Ecology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '96cf3c93-f4c7-4e9b-a876-b8569384aec4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KE',
          'format' => NULL,
          'safe_value' => 'KE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1078095600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 297,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1306965600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ICIPE',
          'format' => NULL,
          'safe_value' => 'ICIPE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cayman Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '979da1a1-53de-4e00-8310-3e5e1d85416d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KY',
          'format' => NULL,
          'safe_value' => 'KY',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 48,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cayman Islands',
          'format' => NULL,
          'safe_value' => 'Cayman Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'International Species Information System',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98c2e602-c34f-469d-8556-9249dde10f54',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1146434400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 299,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ISIS',
          'format' => NULL,
          'safe_value' => 'ISIS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ASEAN Centre for Biodiversity',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '997ad7dc-5f4d-4820-b567-a9556f21d02e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PH',
          'format' => NULL,
          'safe_value' => 'PH',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1249077600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 322,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1329692400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ACB',
          'format' => NULL,
          'safe_value' => 'ACB',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Solomon Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '99bd95ae-7baf-4bdf-ad61-294e0c797650',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SB',
          'format' => NULL,
          'safe_value' => 'SB',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 225,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Solomon Islands',
          'format' => NULL,
          'safe_value' => 'Solomon Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'El Salvador',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9a733c8f-1ee9-4176-be2b-d086876b9918',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SV',
          'format' => NULL,
          'safe_value' => 'SV',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 74,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'El Salvador',
          'format' => NULL,
          'safe_value' => 'El Salvador',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'NatureServe',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9ad89ec1-5d02-41e2-8480-12fa096814a3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 991346400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 302,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1308693600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'NatureServe',
          'format' => NULL,
          'safe_value' => 'NatureServe',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ICLEI – Local Governments for Sustainability',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9b2dbfd3-6d39-4558-803a-6146ece5895e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZA',
          'format' => NULL,
          'safe_value' => 'ZA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1285884000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 351,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1313272800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ICLEI',
          'format' => NULL,
          'safe_value' => 'ICLEI',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'International Barcode of Life Consortium',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9ba20218-ecbc-419e-8acf-bf0342208e1d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1301608800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 353,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1302559200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'iBOL',
          'format' => NULL,
          'safe_value' => 'iBOL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Liechtenstein',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9d37cc94-b713-4601-a7a0-aed088810e56',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LI',
          'format' => NULL,
          'safe_value' => 'LI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 142,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Liechtenstein',
          'format' => NULL,
          'safe_value' => 'Liechtenstein',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Armenia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9da790c9-0512-476b-a2f2-9c3ec1c6d071',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AM',
          'format' => NULL,
          'safe_value' => 'AM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 17,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Armenia',
          'format' => NULL,
          'safe_value' => 'Armenia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Falkland Islands (Malvinas)',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9dabc7a9-df69-4c2c-9eb4-55fb42d0f04a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 80,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Falkland Islands (Malvinas) ',
          'format' => NULL,
          'safe_value' => 'Falkland Islands (Malvinas) ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Heard Island and McDonald Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9dc4507e-c866-4d5c-adcb-f9cd259a7a1b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 107,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Heard Island and McDonald Islands ',
          'format' => NULL,
          'safe_value' => 'Heard Island and McDonald Islands ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Palau',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a06872e8-3dc4-47da-a4be-629214b685ff',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PW',
          'format' => NULL,
          'safe_value' => 'PW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 188,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Palau',
          'format' => NULL,
          'safe_value' => 'Palau',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ciencia y Tecnología para el Desarrollo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a0dfb77e-4d9d-41c0-8e89-2f6eb037b8d1',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ES',
          'format' => NULL,
          'safe_value' => 'ES',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1143842400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 286,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1360623600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CYTED',
          'format' => NULL,
          'safe_value' => 'CYTED',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Canadensys',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a1230a93-26f1-4490-966f-e5bf79c8a953',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1406844000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 365,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1407708000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Canadensys',
          'format' => NULL,
          'safe_value' => 'Canadensys',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Equatorial Guinea',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a2081a35-e478-4afb-be40-2d909fda7d99',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GQ',
          'format' => NULL,
          'safe_value' => 'GQ',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1109631600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 75,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Equatorial Guinea',
          'format' => NULL,
          'safe_value' => 'Equatorial Guinea',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Côte d\'Ivoire',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a35c312b-5c75-48ac-934a-228d93b08916',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CI',
          'format' => NULL,
          'safe_value' => 'CI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 61,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Côte d\'Ivoire ',
          'format' => NULL,
          'safe_value' => 'Côte d&#039;Ivoire ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Timor-Leste',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a36bdcce-f3f3-4ad1-86cc-d460dada40ce',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 243,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Timor-Leste',
          'format' => NULL,
          'safe_value' => 'Timor-Leste',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Norfolk Island',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a497ce47-3723-42ae-867a-be0f3a854f28',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NF',
          'format' => NULL,
          'safe_value' => 'NF',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 181,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Norfolk Island',
          'format' => NULL,
          'safe_value' => 'Norfolk Island',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'All Species Foundation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a519b35c-ddb0-4c0f-b4f0-933ebb1b525d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1014937200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 342,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'All Species Foundation',
          'format' => NULL,
          'safe_value' => 'All Species Foundation',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cuba',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a51ae06f-04cf-4d78-9456-3fb0c67c5620',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CU',
          'format' => NULL,
          'safe_value' => 'CU',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1217541600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 63,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'ob',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cuba',
          'format' => NULL,
          'safe_value' => 'Cuba',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wildscreen',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a69f8274-c71c-4c8c-a8bb-9199747210e9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1041375600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 311,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1317160800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Wildscreen',
          'format' => NULL,
          'safe_value' => 'Wildscreen',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'French Guiana',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a8741d70-9334-4d21-90e8-72b1bbb302ff',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GF',
          'format' => NULL,
          'safe_value' => 'GF',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 85,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'French Guiana',
          'format' => NULL,
          'safe_value' => 'French Guiana',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Vanuatu',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a9e9bd53-ca6f-470c-a3c0-e1afb93aa2c5',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VU',
          'format' => NULL,
          'safe_value' => 'VU',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 263,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Vanuatu',
          'format' => NULL,
          'safe_value' => 'Vanuatu',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Secrétariat Intérimaire du Volet Environnement du NEPAD',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aa5b3cf1-6136-4e19-af6f-492de182afd2',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1246399200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 319,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'SINEPAD',
          'format' => NULL,
          'safe_value' => 'SINEPAD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Isle of Man',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ab8c263e-6bdb-4eb0-b340-036425fa1921',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 119,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Isle of Man',
          'format' => NULL,
          'safe_value' => 'Isle of Man',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antarctic',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => 'ae116499-1272-4a12-bda2-80643962ba56',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'Russian Federation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ae3afdab-035a-4167-b032-c35c6dd8ca7f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RU',
          'format' => NULL,
          'safe_value' => 'RU',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 204,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Russian Federation',
          'format' => NULL,
          'safe_value' => 'Russian Federation',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Freshwater Biological Association - FreshwaterLife',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'af2a4033-3879-4181-a448-9ea48a2450f3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1059688800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 294,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'FreshwaterLife',
          'format' => NULL,
          'safe_value' => 'FreshwaterLife',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mali',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'af5e7d01-e1ef-4b43-892c-fef93e77f95a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ML',
          'format' => NULL,
          'safe_value' => 'ML',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 152,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mali',
          'format' => NULL,
          'safe_value' => 'Mali',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'American Samoa',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'afbfda09-b2eb-4fb2-b676-c65b3a5bfc80',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AS',
          'format' => NULL,
          'safe_value' => 'AS',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 10,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'American Samoa',
          'format' => NULL,
          'safe_value' => 'American Samoa',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Scientific Committee on Antarctic Research',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b1486e47-bdf6-494b-8739-88915c825797',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1201820400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 306,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1308520800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'SCAR',
          'format' => NULL,
          'safe_value' => 'SCAR',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bonaire, Sint Eustatius and Saba',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b1666b15-7ca0-4017-bffb-4e67ecdcbb31',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 356,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bonaire, Sint Eustatius and Saba													',
          'format' => NULL,
          'safe_value' => 'Bonaire, Sint Eustatius and Saba													',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Burkina Faso',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b1b74759-b9f6-4444-9800-a3f968afac3c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BF',
          'format' => NULL,
          'safe_value' => 'BF',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1167606000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 41,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1340661600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Burkina Faso',
          'format' => NULL,
          'safe_value' => 'Burkina Faso',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mozambique',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b271135c-09ce-4102-888a-d1c7d0d697e7',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MZ',
          'format' => NULL,
          'safe_value' => 'MZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 167,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mozambique',
          'format' => NULL,
          'safe_value' => 'Mozambique',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Andean Network of BioNET-INTERNATIONAL',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b2919495-15a2-4155-9a6a-604f615024f6',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VE',
          'format' => NULL,
          'safe_value' => 'VE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1191189600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 277,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1311717600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BioNet-AndinoNet',
          'format' => NULL,
          'safe_value' => 'BioNet-AndinoNet',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'San Marino',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b3d45101-2fe8-4eff-8124-65a55cb6461c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SM',
          'format' => NULL,
          'safe_value' => 'SM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 215,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'San Marino',
          'format' => NULL,
          'safe_value' => 'San Marino',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Monaco',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b4422fdc-7a7c-4613-a424-3939ced5a363',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MC',
          'format' => NULL,
          'safe_value' => 'MC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 162,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Monaco',
          'format' => NULL,
          'safe_value' => 'Monaco',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lebanon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b486ad5a-c2f6-43ad-8d76-7b759827d742',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LB',
          'format' => NULL,
          'safe_value' => 'LB',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 138,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lebanon',
          'format' => NULL,
          'safe_value' => 'Lebanon',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Georgia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b50c6fbc-cce5-41c8-8ee2-9b47745f752f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GE',
          'format' => NULL,
          'safe_value' => 'GE',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 91,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Georgia',
          'format' => NULL,
          'safe_value' => 'Georgia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bouvet Island',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b6460414-cc2a-4241-9192-2d60b7c2f7ec',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 36,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bouvet Island ',
          'format' => NULL,
          'safe_value' => 'Bouvet Island ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Japan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b6e2bf99-28a3-4bd8-a3f6-e98d963e3c0b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JP',
          'format' => NULL,
          'safe_value' => 'JP',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 124,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1417474800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Japan',
          'format' => NULL,
          'safe_value' => 'Japan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Taxonomic Databases Working Group',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b6f678ac-a046-49ef-b891-3c5533b1ac70',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1014937200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 309,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1317679200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'TDWG',
          'format' => NULL,
          'safe_value' => 'TDWG',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Thailand',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b7d6f5e6-e2ab-47d9-874e-1213eb382e06',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TH',
          'format' => NULL,
          'safe_value' => 'TH',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 242,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Thailand',
          'format' => NULL,
          'safe_value' => 'Thailand',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tuvalu',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b8d1d5a7-37d7-4bf7-bfea-e3f5ab60013a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TV',
          'format' => NULL,
          'safe_value' => 'TV',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 252,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tuvalu',
          'format' => NULL,
          'safe_value' => 'Tuvalu',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Benin',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b9626544-2f1f-42f6-ba1f-1da70d4c30df',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BJ',
          'format' => NULL,
          'safe_value' => 'BJ',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1101855600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 30,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1320015600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Benin',
          'format' => NULL,
          'safe_value' => 'Benin',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pakistan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'baf7c45c-806c-4462-a0fc-f3b9bbb27507',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PK',
          'format' => NULL,
          'safe_value' => 'PK',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 996616800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 187,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1304373600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Pakistan',
          'format' => NULL,
          'safe_value' => 'Pakistan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'South Sudan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bd724024-41da-445e-bcdb-c4b215ef8d01',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 359,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'South Sudan',
          'format' => NULL,
          'safe_value' => 'South Sudan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BioNET-ASEANET',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bdcd7518-4972-4d73-a932-0253ecaaa781',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MY',
          'format' => NULL,
          'safe_value' => 'MY',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1033423200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 278,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BioNET-ASEANET',
          'format' => NULL,
          'safe_value' => 'BioNET-ASEANET',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Poland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c01ad033-6e8b-4986-988e-8c19ce5769ee',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PL',
          'format' => NULL,
          'safe_value' => 'PL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 196,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1316642400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Poland',
          'format' => NULL,
          'safe_value' => 'Poland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latin America',
    'description' => '<p>Latin America</p>',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'c03f3b71-4c5c-4402-bd79-7e801c412601',
    'vocabulary_machine_name' => 'regions',
  );
  $terms[] = array(
    'name' => 'World Data Center for Biodiversity and Ecology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c0f687c0-0321-4ff8-8778-044fa6bcfc6f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1112306400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 312,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'WDCBE',
          'format' => NULL,
          'safe_value' => 'WDCBE',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saudi Arabia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c1495303-5088-4dd4-9309-7c3ce2e8ee85',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SA',
          'format' => NULL,
          'safe_value' => 'SA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 217,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saudi Arabia',
          'format' => NULL,
          'safe_value' => 'Saudi Arabia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Virgin Islands, U.S.',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c1d188ff-abdb-4d8f-b992-30bd61601359',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VI',
          'format' => NULL,
          'safe_value' => 'VI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 275,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Virgin Islands, U.S. ',
          'format' => NULL,
          'safe_value' => 'Virgin Islands, U.S. ',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tajikistan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c1f562a1-f0e2-4c3c-82fc-6e69248dd3d2',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TJ',
          'format' => NULL,
          'safe_value' => 'TJ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 240,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tajikistan',
          'format' => NULL,
          'safe_value' => 'Tajikistan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'International Commission on Zoological Nomenclature',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c216c165-7dea-400f-b2a8-9f0a6d577b36',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1117576800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 298,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ICZN',
          'format' => NULL,
          'safe_value' => 'ICZN',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mongolia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c27d1522-b346-4b32-93c4-ae8217107ca0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MN',
          'format' => NULL,
          'safe_value' => 'MN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 163,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mongolia',
          'format' => NULL,
          'safe_value' => 'Mongolia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Andorra',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c2b8a677-0c97-49d6-b7d6-765fb85f6eff',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AD',
          'format' => NULL,
          'safe_value' => 'AD',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1283292000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 350,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1366322400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Andorra',
          'format' => NULL,
          'safe_value' => 'Andorra',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Turkmenistan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c3785dfe-96b9-4a66-bb73-90d2857e1a41',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TM',
          'format' => NULL,
          'safe_value' => 'TM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 250,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Turkmenistan',
          'format' => NULL,
          'safe_value' => 'Turkmenistan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biodiversity Heritage Library',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c3ba5f95-1635-4078-b17b-6c1c20154279',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1406844000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 366,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1407967200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BHL',
          'format' => NULL,
          'safe_value' => 'BHL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ethiopia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c4baf624-9ea1-4a74-82a9-e2aa2a3f9f8e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ET',
          'format' => NULL,
          'safe_value' => 'ET',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 78,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ethiopia',
          'format' => NULL,
          'safe_value' => 'Ethiopia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jamaica',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c4bc32db-9269-4687-9248-eec1a53f7415',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'JM',
          'format' => NULL,
          'safe_value' => 'JM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 123,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jamaica',
          'format' => NULL,
          'safe_value' => 'Jamaica',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ocean Biogeographic Information System',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5387937-289d-47da-912c-1e30e307fbd1',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BE',
          'format' => NULL,
          'safe_value' => 'BE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 991346400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 304,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'OBIS',
          'format' => NULL,
          'safe_value' => 'OBIS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Serbia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c575d91e-22ad-4ec8-8c2f-343e70f067ef',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'RS',
          'format' => NULL,
          'safe_value' => 'RS',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 219,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Serbia',
          'format' => NULL,
          'safe_value' => 'Serbia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BioNET-INTERNATIONAL',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5ac80f4-71f6-484a-9f16-216e6735dee0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 988668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 280,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1322780400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BioNET-INTERNATIONAL',
          'format' => NULL,
          'safe_value' => 'BioNET-INTERNATIONAL',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'UNEP-WCMC',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5c949ec-fb2f-4c93-83ec-1cafb5e632c5',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 988668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 310,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1310335200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'UNEP-WCMC',
          'format' => NULL,
          'safe_value' => 'UNEP-WCMC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bioversity International',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c796e76c-744c-4eea-b4a9-daad68110c3b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IT',
          'format' => NULL,
          'safe_value' => 'IT',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1167606000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 282,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1305669600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bioversity International',
          'format' => NULL,
          'safe_value' => 'Bioversity International',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Christmas Island',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c7d9a2e0-9f43-42b8-b83b-9bf9542f7c78',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 53,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Christmas Island',
          'format' => NULL,
          'safe_value' => 'Christmas Island',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GBIF Secretariat',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ca1bfd8c-7414-4687-875d-aa309011461e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 360,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'GBIFS',
          'format' => NULL,
          'safe_value' => 'GBIFS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United States',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cb202d5b-05c1-43f3-b2ce-0d192a54c008',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 978303600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 258,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1366668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'United States',
          'format' => NULL,
          'safe_value' => 'United States',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Zambia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cb4f3f19-6261-483d-8a15-f1c55107aecc',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZM',
          'format' => NULL,
          'safe_value' => 'ZM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 270,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Zambia',
          'format' => NULL,
          'safe_value' => 'Zambia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United Kingdom',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cca88ebc-2aa5-4ff7-ab5f-8f1f4103528e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 996616800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 257,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1316642400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'United Kingdom',
          'format' => NULL,
          'safe_value' => 'United Kingdom',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'VertNet',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cd364241-64ce-4f64-8e7b-be0253b1af16',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1375308000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 361,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1376690400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'VertNet',
          'format' => NULL,
          'safe_value' => 'VertNet',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Canada',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cd43c182-2424-4d10-b4c0-a2829a609144',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 46,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1323126000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Canada',
          'format' => NULL,
          'safe_value' => 'Canada',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wallis and Futuna',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ce3cb556-ce3e-408d-9c51-19315adeda58',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'WF',
          'format' => NULL,
          'safe_value' => 'WF',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 267,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Wallis and Futuna',
          'format' => NULL,
          'safe_value' => 'Wallis and Futuna',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nicaragua',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ce7d35a7-d595-4413-96de-80a7545c6647',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NI',
          'format' => NULL,
          'safe_value' => 'NI',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 991346400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 177,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nicaragua',
          'format' => NULL,
          'safe_value' => 'Nicaragua',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Korea, Democratic People\'s Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cecb7670-1b1a-4867-a998-eef1e2cff8e9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KP',
          'format' => NULL,
          'safe_value' => 'KP',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 131,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Korea, Democratic People\'s Republic of',
          'format' => NULL,
          'safe_value' => 'Korea, Democratic People&#039;s Republic of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'DIVERSITAS',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf1749f0-51f6-40be-8829-cdd76baee96b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FR',
          'format' => NULL,
          'safe_value' => 'FR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1177970400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 290,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1310076000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'DIVERSITAS',
          'format' => NULL,
          'safe_value' => 'DIVERSITAS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gabon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf4560df-820b-4bd0-af37-dfb5905f0171',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GA',
          'format' => NULL,
          'safe_value' => 'GA',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 89,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Gabon',
          'format' => NULL,
          'safe_value' => 'Gabon',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Indonesia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf76f7f6-a07f-4934-8617-3f3ec474791d',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ID',
          'format' => NULL,
          'safe_value' => 'ID',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1096581600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 115,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Indonesia',
          'format' => NULL,
          'safe_value' => 'Indonesia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chinese Taipei',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cfe59a8c-0c24-426b-a6e8-14658e1efeab',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TW',
          'format' => NULL,
          'safe_value' => 'TW',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 239,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1321830000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Chinese Taipei',
          'format' => NULL,
          'safe_value' => 'Chinese Taipei',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BIOSIS',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd03238e0-934b-4ac9-acf6-e747721eb0f8',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1014937200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 344,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BIOSIS',
          'format' => NULL,
          'safe_value' => 'BIOSIS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'The Democratic Republic of the Congo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd17077de-33eb-49c5-a863-07ad22b3bd3a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CD',
          'format' => NULL,
          'safe_value' => 'CD',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 58,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'The Democratic Republic of the Congo',
          'format' => NULL,
          'safe_value' => 'The Democratic Republic of the Congo',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Switzerland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd1867f59-9a75-4857-85e5-c561d193ed20',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CH',
          'format' => NULL,
          'safe_value' => 'CH',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 236,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Switzerland',
          'format' => NULL,
          'safe_value' => 'Switzerland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Brunei Darussalam',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd1df3166-2917-4957-b59f-73f42ff96c71',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BN',
          'format' => NULL,
          'safe_value' => 'BN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 39,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Brunei Darussalam',
          'format' => NULL,
          'safe_value' => 'Brunei Darussalam',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kuwait',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd1ea22a2-22bc-42be-a08b-dd4841339bcd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KW',
          'format' => NULL,
          'safe_value' => 'KW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 133,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kuwait',
          'format' => NULL,
          'safe_value' => 'Kuwait',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Vincent and the Grenadines',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd1ec2646-361f-41e6-89d4-7c38be008e7a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VC',
          'format' => NULL,
          'safe_value' => 'VC',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 213,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Vincent and the Grenadines',
          'format' => NULL,
          'safe_value' => 'Saint Vincent and the Grenadines',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'French Southern Territories',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd277015d-ecae-43e1-ae07-76e55e072efa',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 87,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'French Southern Territories',
          'format' => NULL,
          'safe_value' => 'French Southern Territories',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Société de Bactériologie Systématique et Vétérinaire',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd2d308f1-2fe3-4d00-b754-07d3bc48b4d3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1038697200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 347,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'SBSV',
          'format' => NULL,
          'safe_value' => 'SBSV',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Pierre and Miquelon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd36f6b3b-988a-4ecc-b09e-35739217fa38',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'PM',
          'format' => NULL,
          'safe_value' => 'PM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 212,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Pierre and Miquelon',
          'format' => NULL,
          'safe_value' => 'Saint Pierre and Miquelon',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tanzania, United Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd37978c6-30e1-4ad4-8abd-baac49b4a3d7',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TZ',
          'format' => NULL,
          'safe_value' => 'TZ',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1030831200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 241,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1274652000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tanzania, United Republic of',
          'format' => NULL,
          'safe_value' => 'Tanzania, United Republic of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Colombia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd39e1c9b-88fb-4b96-9bf4-4695bc81c2db',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CO',
          'format' => NULL,
          'safe_value' => 'CO',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1062367200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 55,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1323039600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Colombia',
          'format' => NULL,
          'safe_value' => 'Colombia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Albertine Rift Conservation Society',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd63d3e5c-0339-47d2-b5ba-334531fda691',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UG',
          'format' => NULL,
          'safe_value' => 'UG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1262300400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 323,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1320015600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ARCOS',
          'format' => NULL,
          'safe_value' => 'ARCOS',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Trinidad and Tobago',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6b4f020-6ea2-4746-9871-fdc15582d5c7',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TT',
          'format' => NULL,
          'safe_value' => 'TT',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 247,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Trinidad and Tobago',
          'format' => NULL,
          'safe_value' => 'Trinidad and Tobago',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Uganda',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6baafe2-38ba-46f6-9d5f-6adbfd03bb0a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'UG',
          'format' => NULL,
          'safe_value' => 'UG',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1254348000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 254,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1307656800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Uganda',
          'format' => NULL,
          'safe_value' => 'Uganda',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Palestine, State of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd7b9d646-43c5-4ba6-8b9e-5ddeee07e36b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 189,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Palestine, State of',
          'format' => NULL,
          'safe_value' => 'Palestine, State of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Syrian Arab Republic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd911ec15-429f-4eff-9402-151fb6a9b1f3',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 237,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Syrian Arab Republic',
          'format' => NULL,
          'safe_value' => 'Syrian Arab Republic',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Natural Science Collections Alliance',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd994044a-ebbe-4cc6-8a4b-e885d992b7b7',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1101855600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 301,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1330297200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'NSCA',
          'format' => NULL,
          'safe_value' => 'NSCA',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Finding Species',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'da76e618-79c4-4185-84d8-52cab0927168',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'US',
          'format' => NULL,
          'safe_value' => 'US',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1070233200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 293,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Finding Species',
          'format' => NULL,
          'safe_value' => 'Finding Species',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Germany',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dc78827a-d6d3-4e94-a33c-aa251a3171be',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DE',
          'format' => NULL,
          'safe_value' => 'DE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 92,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1333404000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Germany',
          'format' => NULL,
          'safe_value' => 'Germany',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'France',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ddf24661-261f-417f-bc8f-4b033ab26147',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FR',
          'format' => NULL,
          'safe_value' => 'FR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 986076000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 84,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1306792800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'France',
          'format' => NULL,
          'safe_value' => 'France',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Grenada',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'de5208e8-2e15-41b5-a963-f36b2611a2d4',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GD',
          'format' => NULL,
          'safe_value' => 'GD',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 97,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Grenada',
          'format' => NULL,
          'safe_value' => 'Grenada',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Egypt',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e0728ac2-256f-4a74-b734-f3a243d78143',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'EG',
          'format' => NULL,
          'safe_value' => 'EG',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 73,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Egypt',
          'format' => NULL,
          'safe_value' => 'Egypt',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chad',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e17bbf79-9755-4d4b-be65-41ff2d6cac1c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TD',
          'format' => NULL,
          'safe_value' => 'TD',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 50,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Chad',
          'format' => NULL,
          'safe_value' => 'Chad',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Norway',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e1be5ea6-f590-48f3-9c28-63424d4a8b71',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NO',
          'format' => NULL,
          'safe_value' => 'NO',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1075590000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 183,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1309298400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Norway',
          'format' => NULL,
          'safe_value' => 'Norway',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint Martin (French part)',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e326b5d2-d7a1-4d1d-87c6-42d9a6fc05ed',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 211,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Saint Martin (French part)',
          'format' => NULL,
          'safe_value' => 'Saint Martin (French part)',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BioNet-SAFRINET',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e381619d-ab67-463b-b33e-7890d1d256cc',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ZA',
          'format' => NULL,
          'safe_value' => 'ZA',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1057010400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 281,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BioNet-SAFRINET',
          'format' => NULL,
          'safe_value' => 'BioNet-SAFRINET',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Greece',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e3a05744-a2cd-4a6c-a2c6-73dae3d5b0f0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GR',
          'format' => NULL,
          'safe_value' => 'GR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 95,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Greece',
          'format' => NULL,
          'safe_value' => 'Greece',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guyana',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e5913fc2-e32f-4407-b1e0-21535a041d66',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GY',
          'format' => NULL,
          'safe_value' => 'GY',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 104,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Guyana',
          'format' => NULL,
          'safe_value' => 'Guyana',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United States Minor Outlying Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e5df88b1-eb03-42b7-a2dc-81222a763803',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 259,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'United States Minor Outlying Islands',
          'format' => NULL,
          'safe_value' => 'United States Minor Outlying Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kenya',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e7b53a15-0a29-4a9d-b540-8e481ee1e480',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KE',
          'format' => NULL,
          'safe_value' => 'KE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1214863200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 129,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1302040800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kenya',
          'format' => NULL,
          'safe_value' => 'Kenya',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Anguilla',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e85b5e7b-f38c-430b-a2c6-d179517c314b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AI',
          'format' => NULL,
          'safe_value' => 'AI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 13,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Anguilla',
          'format' => NULL,
          'safe_value' => 'Anguilla',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Korea, Republic of',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e8b9573d-0cd1-4dc6-b14e-41494925fe03',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KR',
          'format' => NULL,
          'safe_value' => 'KR',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 988668000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 132,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1310421600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Korea, Republic of',
          'format' => NULL,
          'safe_value' => 'Korea, Republic of',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Åland Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e8cc79a8-80bf-4c13-a949-6f9375a93f5c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AX',
          'format' => NULL,
          'safe_value' => 'AX',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 7,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Åland Islands',
          'format' => NULL,
          'safe_value' => 'Åland Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Antigua and Barbuda',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e954e20d-b323-47cf-9422-89f971b38d08',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AG',
          'format' => NULL,
          'safe_value' => 'AG',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 15,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Antigua and Barbuda',
          'format' => NULL,
          'safe_value' => 'Antigua and Barbuda',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Montenegro',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ec15afcc-d193-4aa0-9669-87601d48d6c0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'ME',
          'format' => NULL,
          'safe_value' => 'ME',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 164,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Montenegro',
          'format' => NULL,
          'safe_value' => 'Montenegro',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Burundi',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ece9feaa-8316-45d6-9350-b73be5dcea36',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BI',
          'format' => NULL,
          'safe_value' => 'BI',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 42,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Burundi',
          'format' => NULL,
          'safe_value' => 'Burundi',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Samoa',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'edd7f736-86d8-4831-80e1-b6dce359c49f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'WS',
          'format' => NULL,
          'safe_value' => 'WS',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 214,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Samoa',
          'format' => NULL,
          'safe_value' => 'Samoa',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Consortium of European Taxonomic Facilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef1af94b-838e-4a8f-9be8-0d19de66ee13',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DE',
          'format' => NULL,
          'safe_value' => 'DE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1180648800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 288,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1327878000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CETAF',
          'format' => NULL,
          'safe_value' => 'CETAF',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Kyrgyzstan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f0fba397-0844-4957-9b46-91580e1cd94a',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'KG',
          'format' => NULL,
          'safe_value' => 'KG',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 134,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kyrgyzstan',
          'format' => NULL,
          'safe_value' => 'Kyrgyzstan',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Curaçao',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f17d4443-f7df-4387-b1ce-fb192590f45f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 357,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Curaçao',
          'format' => NULL,
          'safe_value' => 'Curaçao',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Myanmar',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f2e9b70d-790a-458b-ad8f-28d2e87f2f5b',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MM',
          'format' => NULL,
          'safe_value' => 'MM',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 168,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Myanmar',
          'format' => NULL,
          'safe_value' => 'Myanmar',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mexico',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f360def0-c258-4be9-b0f1-49d7b73b4742',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'MX',
          'format' => NULL,
          'safe_value' => 'MX',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 159,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1320361200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mexico',
          'format' => NULL,
          'safe_value' => 'Mexico',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Greenland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f3ba9e99-243f-4ee1-9e67-4c903f9efc27',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GL',
          'format' => NULL,
          'safe_value' => 'GL',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 96,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Greenland',
          'format' => NULL,
          'safe_value' => 'Greenland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bangladesh',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f3cb3ecd-c7b6-4a4e-83b6-7e77a1b6d5bd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BD',
          'format' => NULL,
          'safe_value' => 'BD',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 25,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bangladesh',
          'format' => NULL,
          'safe_value' => 'Bangladesh',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Algeria',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f3fe3ac9-f7f3-47d2-817a-43a554713dac',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'DZ',
          'format' => NULL,
          'safe_value' => 'DZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 9,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Algeria',
          'format' => NULL,
          'safe_value' => 'Algeria',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'South Georgia and the South Sandwich Islands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f4839cf4-97ae-4198-9e8d-e2b0a0356676',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 228,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'South Georgia and the South Sandwich Islands',
          'format' => NULL,
          'safe_value' => 'South Georgia and the South Sandwich Islands',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fiji',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f4855139-cac1-462f-8f3e-3ab8d53211ef',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'FJ',
          'format' => NULL,
          'safe_value' => 'FJ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 82,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Fiji',
          'format' => NULL,
          'safe_value' => 'Fiji',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Australia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f536715d-34ea-4af1-929e-4f1d2b196c48',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'AU',
          'format' => NULL,
          'safe_value' => 'AU',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 19,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1346882400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Australia',
          'format' => NULL,
          'safe_value' => 'Australia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Swaziland',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f55ea3ce-296f-4cb8-b1ea-2257e417c291',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SZ',
          'format' => NULL,
          'safe_value' => 'SZ',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 234,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Swaziland',
          'format' => NULL,
          'safe_value' => 'Swaziland',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ghana',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f5fe1ff3-52b2-4d8f-8f81-60ffb1b5bb4c',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GH',
          'format' => NULL,
          'safe_value' => 'GH',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 983401200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 93,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1302645600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ghana',
          'format' => NULL,
          'safe_value' => 'Ghana',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sweden',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f60dc12e-536a-4d74-8adb-306eb767dacd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SE',
          'format' => NULL,
          'safe_value' => 'SE',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 235,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1320706800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sweden',
          'format' => NULL,
          'safe_value' => 'Sweden',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Yemen',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f61c287a-ec3f-4c2e-b231-2849eb1607cc',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'YE',
          'format' => NULL,
          'safe_value' => 'YE',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 269,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Yemen',
          'format' => NULL,
          'safe_value' => 'Yemen',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Virgin Islands, British',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6234c49-5f7d-48f1-b9b6-64ca2c4f87ee',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'VG',
          'format' => NULL,
          'safe_value' => 'VG',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 272,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Virgin Islands, British',
          'format' => NULL,
          'safe_value' => 'Virgin Islands, British',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'BioNet-EASIANET',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f62edb33-a722-41e2-ae11-07bf7aec6ece',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'format' => NULL,
          'safe_value' => '',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1033423200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 279,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'BioNet-EASIANET',
          'format' => NULL,
          'safe_value' => 'BioNet-EASIANET',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Plazi',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f71e7ee0-b8af-4a89-851c-fd8c90505eda',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'CH',
          'format' => NULL,
          'safe_value' => 'CH',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1422745200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 369,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1423954800,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Plazi',
          'format' => NULL,
          'safe_value' => 'Plazi',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nigeria',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f784c022-35a6-4316-9909-9b70641437ec',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'NG',
          'format' => NULL,
          'safe_value' => 'NG',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 179,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nigeria',
          'format' => NULL,
          'safe_value' => 'Nigeria',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Liberia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f795b953-8a6a-4244-8e9c-0e568a265575',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'LR',
          'format' => NULL,
          'safe_value' => 'LR',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 140,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Liberia',
          'format' => NULL,
          'safe_value' => 'Liberia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Slovenia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f8716694-52ca-460f-b47d-ea86aef107f9',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'SI',
          'format' => NULL,
          'safe_value' => 'SI',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 980982000,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 224,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'vp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Slovenia',
          'format' => NULL,
          'safe_value' => 'Slovenia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'International Long Term Ecological Research',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fb5de914-53dc-4212-b656-8bf1b5e49ab0',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IL',
          'format' => NULL,
          'safe_value' => 'IL',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1214863200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 317,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'oap',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1324508400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ILTER',
          'format' => NULL,
          'safe_value' => 'ILTER',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'India',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fbaafd03-a23a-4f69-87d6-bcbbbd6257cd',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'IN',
          'format' => NULL,
          'safe_value' => 'IN',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1057010400,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 114,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'acp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(
      'und' => array(
        0 => array(
          'value' => 1356303600,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'India',
          'format' => NULL,
          'safe_value' => 'India',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Honduras',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fcb09f82-a642-48d5-abe6-c08551252781',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'HN',
          'format' => NULL,
          'safe_value' => 'HN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 109,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Honduras',
          'format' => NULL,
          'safe_value' => 'Honduras',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tunisia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fcfdc161-ad2c-43a9-a77b-ce93cd352c8f',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'TN',
          'format' => NULL,
          'safe_value' => 'TN',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 248,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tunisia',
          'format' => NULL,
          'safe_value' => 'Tunisia',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ASEAN Regional Centre for Biodiversity Conservation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fe727831-360e-4433-b667-051555123664',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 1070233200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 343,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'ARCBC',
          'format' => NULL,
          'safe_value' => 'ARCBC',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CABI Bioscience',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fe95383f-da8e-4c41-873e-d03c459c6953',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'GB',
          'format' => NULL,
          'safe_value' => 'GB',
        ),
      ),
    ),
    'field_member_as_of' => array(
      'und' => array(
        0 => array(
          'value' => 999295200,
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 284,
        ),
      ),
    ),
    'field_gbif_membership' => array(
      'und' => array(
        0 => array(
          'value' => 'fp',
        ),
      ),
    ),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CABI Bioscience',
          'format' => NULL,
          'safe_value' => 'CABI Bioscience',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Botswana',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fe9849d5-26fa-4420-abe8-58d24f8aa13e',
    'vocabulary_machine_name' => 'participant',
    'field_iso2' => array(
      'und' => array(
        0 => array(
          'value' => 'BW',
          'format' => NULL,
          'safe_value' => 'BW',
        ),
      ),
    ),
    'field_member_as_of' => array(),
    'field_url' => array(),
    'field_participant_id' => array(
      'und' => array(
        0 => array(
          'value' => 35,
        ),
      ),
    ),
    'field_gbif_membership' => array(),
    'field_mou_2012_date' => array(),
    'field_short_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Botswana',
          'format' => NULL,
          'safe_value' => 'Botswana',
        ),
      ),
    ),
  );
  return $terms;
}
