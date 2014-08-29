<?php

/**
 * @file
 * Fields settings for this modules. They are placed here to avoid cluttered
 * .install file.
 */

function _gbif_ims_tables() {
	$schema = array(
		'gbif_ims_contact' => array(
			'ims_eqv' => '__Contact',
			'description' => 'Contact',
			'fields' => array(),
			'primary key' => array('contactID'),
			'indexes' => array(
				'first_name' => array(array('first_name', 20)),
				'last_name' => array(array('last_name', 20)),
				'middle_name' => array(array('middle_name', 20)),
			),
		),
		'gbif_ims_country' => array(
			'ims_eqv' => '__Country',
			'description' => 'Defines how GBIF sees countries.',
			'fields' => array(),
			'indexes' => array(
				'countryID' => array('countryID'),
				'iso2' => array('iso2'),
				'iso3' => array('iso3'),
				'name' => array(array('name', 32)),
				'regionID' => array('regionID'),
			),
		),
		'gbif_ims_group' => array(
			'ims_eqv' => '__Group',
			'description' => 'Groups are standing committees, task groups and various projects.',
			'fields' => array(),
			'indexes' => array(
				'groupID' => array('groupID'),
			),
		),
		'gbif_ims_group_role' => array(
			'ims_eqv' => '__Grouprole',
			'description' => 'Roles in various groups of table gbif_ims_group.',
			'fields' => array(),
			'indexes' => array(
				'groupID' => array('groupID'),
				'group_role_ID' => array('group_role_ID'),
			),
		),
		'gbif_ims_institution' => array(
			'ims_eqv' => '__Institution',
			'description' => 'Institution profile',
			'fields' => array(),
			'indexes' => array(
				'acronym' => array('acronym'),
				'countryID' => array('countryID'),
				'institutionID' => array('institutionID'),
				'name' => array(array('name', 32)),
			),
		),
		'gbif_ims_node' => array(
			'ims_eqv' => '__Node',
			'description' => 'Node profile',
			'fields' => array(),
			'indexes' => array(
				'name_acronym' => array('name_acronym'),
				'name_full' => array(array('name_full', 32)),
				'nodeID' => array('nodeID'),
				'participantID' => array('participantID'),
			),
		),
		'gbif_ims_participant' => array(
			'ims_eqv' => '__Participant',
			'description' => 'Participant description',
			'fields' => array(),
			'primary key' => array('participantID'),
			'indexes' => array(
				'countryID' => array('countryID'),
				'institutionID' => array('institutionID'),
				'name_full' => array(array('name_full', 64)),
				'name_short' => array('name_short'),
				'regionID' => array('regionID'),
			),
		),
		'gbif_ims_gbif_area' => array(
			'ims_eqv' => '__GBIFarea',
			'description' => 'Defines how GBIF sees continental areas.',
			'fields' => array(),
		),
		'gbif_ims_contact_group_role_node_participant' => array(
			'ims_eqv' => '__ContactGrouproleNodeParticipant',
			'description' => 'a relation table',
			'fields' => array(),
			'primary key' => array('contact_group_role_node_participant_ID'),
			'indexes' => array(
				'contactID' => array('contactID'),
				'group_role_ID' => array('group_role_ID'),
				'nodeID' => array('nodeID'),
				'participantID' => array('participantID'),
			),
		),
	);
	foreach ($schema as $table_name => $table) {
		$field_source = '_' . $table_name . '_fields';
		$schema[$table_name]['fields'] = $field_source();
	}
	return $schema;
}

/**
 * Settings and mappings of fields between FileMaker Pro and Drupal MySQL.
 */
function _gbif_ims_contact_fields() {
	$fields = array(
		'contactID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Contact ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'countryID_address' => array(
			'ims_eqv' => '_kf_CountryID_Address',
			'description' => 'Country ID used in addresses',
			'type' => 'int',
			'not null' => FALSE,
		),
		'institutionID' => array(
			'ims_eqv' => '_kf_InstitutionID',
			'description' => 'Institution ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'first_name' => array(
			'ims_eqv' => 'Name_First',
			'description' => 'First name',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'middle_name' => array(
			'ims_eqv' => 'Name_Middle',
			'description' => 'Middle name',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'last_name' => array(
			'ims_eqv' => 'Name_Last',
			'description' => 'Last name',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'address' => array(
			'ims_eqv' => 'Address',
			'description' => 'Postal address',
			'type' => 'varchar',
			'length' => '4096',
			'not null' => FALSE,
		),
		'city' => array(
			'ims_eqv' => 'City',
			'description' => 'City',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'email_address' => array(
			'ims_eqv' => 'Email',
			'description' => 'Email address',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'job_description' => array(
			'ims_eqv' => 'Job_Description',
			'description' => 'Job description',
			'type' => 'varchar',
			'length' => '4096',
			'not null' => FALSE,
		),
		'fax' => array(
			'ims_eqv' => 'Fax',
			'description' => 'Fax number. Some have multiple fax numbers.',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'on_the_web' => array(
			'ims_eqv' => 'OnTheWeb',
			'description' => 'Whether to show this record in public.',
			'type' => 'int',
			'size' => 'tiny',
			'not null' => FALSE,
		),
		'job_position' => array(
			'ims_eqv' => 'Job_Position',
			'description' => 'Job Position',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'phone_office' => array(
			'ims_eqv' => 'Phone_Office',
			'description' => 'Telephone number. Some have multiple fax numbers.',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'zip_code' => array(
			'ims_eqv' => 'ZipCode',
			'description' => 'Postal Zip code',
			'type' => 'varchar',
			'length' => '32',
			'not null' => FALSE,
		),
		'sort_weight' => array(
			'ims_eqv' => 'GBIF_Order',
			'description' => 'Was GBIF_Order. The bit to decide the sorting weight.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'profile_image' => array(
			'ims_eqv' => 'zz__PEOP_SuperContainer_IMGURL__lct',
			'description' => 'URL that points to the profile image in FileMaker.',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'profile_url' => array(
			'ims_eqv' => 'URL',
			'description' => 'URL of public website.',
			'type' => 'varchar',
			'length' => '2048',
			'not null' => FALSE,
		),
		'is_gbif_staff' => array(
			'ims_eqv' => 'GBIF_Staff',
			'description' => 'Whether the person is a GBIF staff.',
			'type' => 'int',
			'size' => 'tiny',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_country_fields() {
	$fields = array(
		'countryID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Country ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'regionID' => array(
			'ims_eqv' => '_kf_RegionID',
			'description' => 'Region ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'iso2' => array(
			'ims_eqv' => 'ISO2',
			'description' => 'ISO 3166-1 alpha-2 2-digit country code.',
			'type' => 'char',
			'length' => '4',
			'not null' => FALSE,
		),
		'iso3' => array(
			'ims_eqv' => 'ISO3',
			'description' => 'ISO 3166-1 alpha-3 3-digit country code.',
			'type' => 'char',
			'length' => '4',
			'not null' => FALSE,
		),
		'name' => array(
			'ims_eqv' => 'Name',
			'description' => 'Names of the countries according to GBIF.',
			'type' => 'varchar',
			'length' => '256',
			'not null' => TRUE,
		),
	);
	return $fields;
}

function _gbif_ims_group_fields() {
	$fields = array(
		'groupID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Group ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'name' => array(
			'ims_eqv' => 'Name',
			'description' => 'Names of the groups',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_group_role_fields() {
	$fields = array(
		'group_role_ID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Group role ID.',
			'type' => 'int',
			'not null' => TRUE,
		),
		'groupID' => array(
			'ims_eqv' => '_kf_GroupID',
			'description' => 'Group ID of gbif_ims_group.',
			'type' => 'int',
			'not null' => TRUE,
		),
		'sort_weight' => array(
			'ims_eqv' => 'Sort_Order__lcn',
			'description' => 'Was SortOrder. The bit to decide the sorting weight.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'name' => array(
			'ims_eqv' => 'Name',
			'description' => 'Names of the roles in various groups.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_institution_fields() {
	$fields = array(
		'institutionID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Institution ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'countryID' => array(
			'ims_eqv' => '_kf_CountryID',
			'description' => 'Country ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'acronym' => array(
			'ims_eqv' => 'Acronym',
			'description' => 'Acronym',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'address' => array(
			'ims_eqv' => 'Address',
			'description' => 'Postal address',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'city' => array(
			'ims_eqv' => 'City',
			'description' => 'City',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'description' => array(
			'ims_eqv' => 'Description',
			'description' => 'Description',
			'type' => 'varchar',
			'length' => '4096',
			'not null' => FALSE,
		),
		'email' => array(
			'ims_eqv' => 'Email',
			'description' => 'email_address',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'name' => array(
			'ims_eqv' => 'Name',
			'description' => 'Name',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'state_province' => array(
			'ims_eqv' => 'State',
			'description' => 'Secondary administrative unit. State or province.',
			'type' => 'varchar',
			'length' => '512',
			'not null' => FALSE,
		),
		'telephone' => array(
			'ims_eqv' => 'Telephone',
			'description' => 'Telephone number',
			'type' => 'varchar',
			'length' => '512',
			'not null' => FALSE,
		),
		'zip_code' => array(
			'ims_eqv' => 'ZipCode',
			'description' => 'ZIP code',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_node_fields() {
	$fields = array(
		'nodeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Node ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'participantID' => array(
			'ims_eqv' => '_kf_ParticipantID',
			'description' => 'Participant ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'name_full' => array(
			'ims_eqv' => 'Name_Full',
			'description' => 'Full name',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'name_acronym' => array(
			'ims_eqv' => 'Name_Acronym',
			'description' => 'Acronym',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'url' => array(
			'ims_eqv' => 'URL',
			'description' => 'URL to a public page that represents the node.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_participant_fields() {
	$fields = array(
		'participantID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Participant ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'regionID' => array(
			'ims_eqv' => '_kf_RegionID',
			'description' => 'Region ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'countryID' => array(
			'ims_eqv' => '_kf_CountryID',
			'description' => 'Country ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'institutionID' => array(
			'ims_eqv' => '_kf_InstitutionID',
			'description' => 'Institution ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'gbif_membership' => array(
			'ims_eqv' => 'GBIFmembership',
			'description' => 'GBIF membership status: Voting participant, Associate country, Other associate participant, Former participant.',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'member_as_of' => array(
			'ims_eqv' => 'Member_AsOf',
			'description' => 'Start date of GBIF membership',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'name_full' => array(
			'ims_eqv' => 'Name_Full',
			'description' => 'Full name',
			'type' => 'varchar',
			'length' => '512',
			'not null' => FALSE,
		),
		'name_short' => array(
			'ims_eqv' => 'Name_Short',
			'description' => 'Short name',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'public_description' => array(
			'ims_eqv' => 'PublicDescription',
			'description' => 'Public description. To-be replaced by gbif_participant module.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'mou2012_date' => array(
			'ims_eqv' => 'MOU2012_Date',
			'description' => 'Date of signing the 2012 MOU.',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'url_hosting' => array(
			'ims_eqv' => 'Host_URL',
			'description' => 'URL of the hosting institution.',
			'type' => 'varchar',
			'length' => '512',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_gbif_area_fields() {
	$fields = array(
		'gbif_area_ID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'GBIF area ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'gbif_area' => array(
			'ims_eqv' => 'GBIFarea',
			'description' => 'Area name',
			'type' => 'varchar',
			'length' => '256',
			'not null' => TRUE,
		),
		'drupal_tid' => array(
			'ims_eqv' => '_kf_Drupal_tid',
			'description' => 'Drupal term id',
			'type' => 'int',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_contact_group_role_node_participant_fields() {
	$fields = array(
		'contact_group_role_node_participant_ID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Primary ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'contactID' => array(
			'ims_eqv' => '_kf_ContactID',
			'description' => 'Contact ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'group_role_ID' => array(
			'ims_eqv' => '_kf_GrouproleID',
			'description' => 'Group role ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'nodeID' => array(
			'ims_eqv' => '_kf_NodeID',
			'description' => 'Node ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'participantID' => array(
			'ims_eqv' => '_kf_ParticipantID',
			'description' => 'Participant ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'active' => array(
			'ims_eqv' => 'Active',
			'description' => 'Active',
			'type' => 'int',
			'size' => 'tiny',
			'not null' => FALSE,
		),
	);
	return $fields;
}