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
			'primary key' => array('countryID'),
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
			'primary key' => array('groupID'),
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
			'primary key' => array('institutionID'),
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
			'primary key' => array('nodeID'),
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
		'gbif_ims_event' => array(
			'ims_eqv' => '__Event',
			'description' => 'Equivalent of the event table.',
			'fields' => array(),
			'primary key' => array('eventID'),
			'indexes' => array(
				'eventID' => array('eventID'),
				'cityID' => array('cityID'),
			),
		),
		'gbif_ims_event_status' => array(
			'ims_eqv' => '__Eventstatus',
			'description' => 'Event status.',
			'fields' => array(),
			'primary key' => array('event_statusID'),
			'indexes' => array(
				'event_statusID' => array('event_statusID'),
			),
		),
		'gbif_ims_city' => array(
			'ims_eqv' => '__City',
			'description' => 'Cities.',
			'fields' => array(),
			'primary key' => array('cityID'),
			'indexes' => array(
				'cityID' => array('cityID'),
			),
		),
		'gbif_ims_event_w_list_people' => array(
			'ims_eqv' => 'W_ListPeopleEvent',
			'description' => 'List of people who attend an event.',
			'fields' => array(),
			'primary key' => array('event_peopleID'),
			'indexes' => array(
				'event_peopleID' => array('event_peopleID'),
				'_kf_eventID' => array('_kf_eventID'),
				'_kf_contactID' => array('_kf_contactID'),
			),
		),
		'gbif_ims_event_w_list_resources' => array(
			'ims_eqv' => 'W_ListResourcesEvent',
			'description' => 'List resources that are associated with an event.',
			'fields' => array(),
			'primary key' => array('event_resourceID'),
			'indexes' => array(
				'event_resourceID' => array('event_resourceID'),
				'_kf_eventID' => array('_kf_eventID'),
			),
		),
		/* Resource related tables */
		'gbif_ims_file' => array(
			'ims_eqv' => '__File',
			'description' => 'The base file table for resources.',
			'fields' => array(),
			'primary key' => array('fid'),
			'indexes' => array(
				'fid' => array('fid'),
				'_kf_file_pathID' => array('_kf_file_pathID'),
				'_kf_languageID' => array('_kf_languageID'),
				'_kf_typeID' => array('_kf_typeID'),
				'_kf_file_typeID' => array('_kf_file_typeID'),
			),
		),
		'gbif_ims_file_cluster' => array(
			'ims_eqv' => '__Filecluster',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_clusterID'),
			'indexes' => array(
				'file_clusterID' => array('file_clusterID'),
				'_kf_file_cluster_typeID' => array('_kf_file_cluster_typeID'),
				'file_cluster' => array('file_cluster'),
			),
		),
		'gbif_ims_file_cluster_type' => array(
			'ims_eqv' => '__Fileclustertype',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_cluster_typeID'),
			'indexes' => array(
				'file_cluster_typeID' => array('file_cluster_typeID'),
				'file_cluster_type' => array('file_cluster_type'),
			),
		),
		'gbif_ims_file_event_access_category' => array(
			'ims_eqv' => '__FileEventaccesscategory',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_event_access_categoryID'),
			'indexes' => array(
				'file_event_access_categoryID' => array('file_event_access_categoryID'),
				'_kf_event_access_categoryID' => array('_kf_event_access_categoryID'),
				'_kf_fileID' => array('_kf_fileID'),
			),
		),
		'gbif_ims_file_file_cluster' => array(
			'ims_eqv' => '__FileFilecluster',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_file_clusterID'),
			'indexes' => array(
				'file_file_clusterID' => array('file_file_clusterID'),
				'_kf_file_clusterID' => array('_kf_file_clusterID'),
				'_kf_fileID' => array('_kf_fileID'),
			),
		),
		'gbif_ims_file_group' => array(
			'ims_eqv' => '__FileGroup',
			'description' => '',
			'fields' => array(),
			//'primary key' => array('file_groupID'), // 6787 is duplicated in the IMS.
			'indexes' => array(
				'file_groupID' => array('file_groupID'),
				'_kf_fileID' => array('_kf_fileID'),
				'_kf_groupID' => array('_kf_groupID'),
			),
		),
		'gbif_ims_file_keyword' => array(
			'ims_eqv' => '__FileKeyword',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_keywordID'),
			'indexes' => array(
				'file_keywordID' => array('file_keywordID'),
				'_kf_fileID' => array('_kf_fileID'),
				'_kf_keywordID' => array('_kf_keywordID'),
				'sort' => array('sort'),
			),
		),
		'gbif_ims_file_path' => array(
			'ims_eqv' => '__Filepath',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_pathID'),
			'indexes' => array(
				'file_pathID' => array('file_pathID'),
				'_kf_file_pathID_parent' => array('_kf_file_pathID_parent'),
				'is_key_document' => array('is_key_document'),
				'name' => array('name'),
				'public' => array('public'),
			),
		),
		'gbif_ims_file_resource_tree' => array(
			'ims_eqv' => '__FileResourceTree',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_resource_treeID'),
			'indexes' => array(
				'file_resource_treeID' => array('file_resource_treeID'),
				'_kf_fileID' => array('_kf_fileID'),
				'_kf_resource_tree' => array('_kf_resource_tree'),
			),
		),
		'gbif_ims_file_type' => array(
			'ims_eqv' => '__Filetype',
			'description' => '',
			'fields' => array(),
			'primary key' => array('file_typeID'),
			'indexes' => array(
				'file_typeID' => array('file_typeID'),
				'icon_html' => array('icon_html'),
				'mime_type' => array('mime_type'),
				'suffix' => array('suffix'),
			),
		),
		'gbif_ims_keyword' => array(
			'ims_eqv' => '__Keyword',
			'description' => '',
			'fields' => array(),
			'primary key' => array('keywordID'),
			'indexes' => array(
				'keywordID' => array('keywordID'),
				'_kf_drupal_tid' => array('_kf_drupal_tid'),
				'code1' => array('code1'),
				'code2' => array('code2'),
				'keyword' => array('keyword'),
			),
		),
		'gbif_ims_keyword_keyword_type' => array(
			'ims_eqv' => '__KeywordKeywordType',
			'description' => '',
			'fields' => array(),
			'primary key' => array('keyword_keyword_typeID'),
			'indexes' => array(
				'keyword_keyword_typeID' => array('keyword_keyword_typeID'),
				'_kf_keywordID' => array('_kf_keywordID'),
				'_kf_keyword_typeID' => array('_kf_keyword_typeID'),
			),
		),
		'gbif_ims_keyword_language' => array(
			'ims_eqv' => '__Keyword_Language',
			'description' => '',
			'fields' => array(),
			'primary key' => array('keyword_languageID'),
			'indexes' => array(
				'keyword_languageID' => array('keyword_languageID'),
				'_kf_keywordID' => array('_kf_keywordID'),
				'_kf_language' => array('_kf_language'),
				'translated_text' => array('translated_text'),
			),
		),
		'gbif_ims_keyword_type' => array(
			'ims_eqv' => '__KeywordType',
			'description' => '',
			'fields' => array(),
			'primary key' => array('keyword_typeID'),
			'indexes' => array(
				'keyword_typeID' => array('keyword_typeID'),
				'keyword_type' => array('keyword_type'),
			),
		),
		'gbif_ims_language' => array(
			'ims_eqv' => '__Language',
			'description' => '',
			'fields' => array(),
			'primary key' => array('languageID'),
			'indexes' => array(
				'languageID' => array('languageID'),
				'language' => array('language'),
			),
		),
		'gbif_ims_resource_tree' => array(
			'ims_eqv' => '__ResourceTree',
			'description' => '',
			'fields' => array(),
			'primary key' => array('resource_treeID'),
			'indexes' => array(
				'resource_treeID' => array('resource_treeID'),
				'_kf_resource_tree' => array('_kf_resource_tree'),
				'knot_description' => array('knot_description'),
				'knot_name' => array('knot_name'),
				'knot_order' => array('knot_order'),
				'on_the_web' => array('on_the_web'),
			),
		),
		'gbif_ims_resource_tree_language' => array(
			'ims_eqv' => '__ResourceTree_Language',
			'description' => '',
			'fields' => array(),
			'primary key' => array('resource_tree_languageID'),
			'indexes' => array(
				'resource_tree_languageID' => array('resource_tree_languageID'),
				'_kf_language' => array('_kf_language'),
				'resource_treeID' => array('resource_treeID'),
			),
		),
		'gbif_ims_resource_type' => array(
			'ims_eqv' => '__ResourceType',
			'description' => '',
			'fields' => array(),
			'primary key' => array('resource_typeID'),
			'indexes' => array(
				'resource_typeID' => array('resource_typeID'),
				'resource_type' => array('resource_type'),
			),
		),
		'gbif_ims_resource_type_language' => array(
			'ims_eqv' => '__ResourceTypeLanguage',
			'description' => '',
			'fields' => array(),
			'primary key' => array('resource_type_languageID'),
			'indexes' => array(
				'resource_type_languageID' => array('resource_type_languageID'),
				'_kf_language' => array('_kf_language'),
				'resource_typeID' => array('resource_typeID'),
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

function _gbif_ims_event_fields() {
	$fields = array(
		'eventID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Event ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'cityID' => array(
			'ims_eqv' => '_kf_CityID',
			'description' => 'City ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'event_typeID' => array(
			'ims_eqv' => '_kf_EventtypeID',
			'description' => 'Event type ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'recordID' => array(
			'ims_eqv' => 'recordID',
			'description' => 'Record ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'date_end' => array(
			'ims_eqv' => 'Date_End',
			'description' => 'End date',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'date_start' => array(
			'ims_eqv' => 'Date_Start',
			'description' => 'Start date',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'date_text' => array(
			'ims_eqv' => 'Date_Text',
			'description' => 'End date',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'desc_long' => array(
			'ims_eqv' => 'Desc_Long',
			'description' => 'Long description',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'desc_short' => array(
			'ims_eqv' => 'Desc_Short',
			'description' => 'Short description',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'costs' => array(
			'ims_eqv' => 'Costs',
			'description' => 'Costs',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'evaluation' => array(
			'ims_eqv' => 'Evaluation',
			'description' => 'Evaluation',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'language' => array(
			'ims_eqv' => 'Language',
			'description' => 'Language',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'full_title' => array(
			'ims_eqv' => 'Name_Full',
			'description' => 'Full title of the event.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'promotion' => array(
			'ims_eqv' => 'Promotion',
			'description' => 'Promotion',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'report' => array(
			'ims_eqv' => 'Report',
			'description' => 'Report',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'event_statusID' => array(
			'ims_eqv' => '_kf_EventstatusID',
			'description' => 'Event status ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'how_to_contact' => array(
			'ims_eqv' => 'HowToContact',
			'description' => 'How to contact about the event.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'abbr_title' => array(
			'ims_eqv' => 'Name_Abr',
			'description' => 'Abbreviated title.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'no_participant' => array(
			'ims_eqv' => 'NumberParticipants',
			'description' => 'Number of participants.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'on_the_web' => array(
			'ims_eqv' => 'OnTheWeb',
			'description' => 'Whether to show on the web or not.',
			'type' => 'varchar',
			'length' => '4',
			'not null' => FALSE,
		),
		'schedule' => array(
			'ims_eqv' => 'Schedule',
			'description' => 'Meeting schedule',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'target_public' => array(
			'ims_eqv' => 'TargetPublic',
			'description' => 'Meeting schedule',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'venue' => array(
			'ims_eqv' => 'Venue',
			'description' => 'Event venue.',
			'type' => 'varchar',
			'length' => '256',
			'not null' => FALSE,
		),
		'zz_created_account_lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creator.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_created_timestamp_lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => 'Created time.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_modified_account_lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Modifier.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_modified_timestamp_lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => 'Modified time.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_import_city_name_lxt' => array(
			'ims_eqv' => 'zz__IMPORT_Cityname__lxt',
			'description' => 'City name.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_event_status_fields() {
	$fields = array(
		'event_statusID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Event status ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'status' => array(
			'ims_eqv' => 'Status',
			'description' => 'Event status',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_city_fields() {
	$fields = array(
		'cityID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'City ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_countryID' => array(
			'ims_eqv' => '_kf_CountryID',
			'description' => 'Country ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'cityname' => array(
			'ims_eqv' => 'Cityname',
			'description' => 'City name',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'latitude' => array(
			'ims_eqv' => 'Latitude',
			'description' => 'Latitude',
			'type' => 'int',
			'not null' => FALSE,
		),
		'longitude' => array(
			'ims_eqv' => 'Longitude',
			'description' => 'Longitude',
			'type' => 'int',
			'not null' => FALSE,
		),
		'zz_created_account_lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creator.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_created_timestamp_lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => 'Created time.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_modified_account_lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Modifier.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'zz_modified_timestamp_lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => 'Modified time.',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_event_w_list_people_fields() {
	$fields = array(
		'event_peopleID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Event people ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_contactID' => array(
			'ims_eqv' => '_kf_ContactID',
			'description' => 'Contact ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_eventID' => array(
			'ims_eqv' => '_kf_EventID',
			'description' => 'Event ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_event_roleID' => array(
			'ims_eqv' => '_kf_EventroleID',
			'description' => 'Event role ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'notes' => array(
			'ims_eqv' => 'Notes',
			'description' => 'Notes',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'_kf_participantID' => array(
			'ims_eqv' => '_kf_ParticipantID',
			'description' => 'Participant ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'name_abv__lct' => array(
			'ims_eqv' => 'WEVE_Event_ContactEventEventroleParticipant_Contact::Name_Abv__lct',
			'description' => 'Name',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'email' => array(
			'ims_eqv' => 'WEVE_Event_ContactEventEventroleParticipant_Contact::Email',
			'description' => 'Email',
			'type' => 'varchar',
			'length' => '128',
			'not null' => FALSE,
		),
		'people_role' => array(
			'ims_eqv' => 'WEVE_Event_ContactEventEventroleParticipant_Eventrole::Peoplerole',
			'description' => 'People role',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'role_category' => array(
			'ims_eqv' => 'WEVE_Event_ContactEventEventroleParticipant_Eventrole::Rolecategory',
			'description' => 'Role category',
			'type' => 'varchar',
			'length' => '64',
			'not null' => FALSE,
		),
		'name_full' => array(
			'ims_eqv' => 'WEVE_Event::Name_Full',
			'description' => 'Full name',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'name_abr' => array(
			'ims_eqv' => 'WEVE_Event::Name_Abr',
			'description' => 'Abbreviated name',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_event_w_list_resources_fields() {
	$fields = array(
		'event_resourceID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Event resource ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_eventID' => array(
			'ims_eqv' => '_kf_EventID',
			'description' => 'Event ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'description' => array(
			'ims_eqv' => 'Description',
			'description' => 'Description',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'note' => array(
			'ims_eqv' => 'Note',
			'description' => 'Notes',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'url' => array(
			'ims_eqv' => 'URL',
			'description' => 'URL',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'kf_event_resource_typeID' => array(
			'ims_eqv' => '_kf_EventresourcetypeID',
			'description' => 'Event ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'on_the_web' => array(
			'ims_eqv' => 'OnTheWeb',
			'description' => 'Whether to show on the web or not.',
			'type' => 'char',
			'length' => '4',
			'not null' => FALSE,
		),
		'name_abr' => array(
			'ims_eqv' => 'WEVE_Event::Name_Abr',
			'description' => 'Abbreviated name.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'resource_type' => array(
			'ims_eqv' => 'WEVE_Event_Eventresourcetype_Eventresourcetype::Resourcetype',
			'description' => 'Resource type',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_fields() {
	$fields = array(
		'fid' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_file_pathID' => array(
			'ims_eqv' => '_kf_FilepathID',
			'description' => 'Filepath ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_file_typeID' => array(
			'ims_eqv' => '_kf_FiletypeID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_languageID' => array(
			'ims_eqv' => '_kf_LanguageID',
			'description' => 'Language ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_typeID' => array(
			'ims_eqv' => '_kf_TypeID',
			'description' => 'DCMI type - from Dublin Core standard. The nature or genre of the resource.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'abstract' => array(
			'ims_eqv' => 'Abstract',
			'description' => 'DCMI abstract - from Dublin Core standard. A summary of the resource.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'access_restriction' => array(
			'ims_eqv' => 'AccessRestriction',
			'description' => 'Blank=All or EC or BC for restricted.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		/* access_restriction_lct */
		'alternative_title' => array(
			'ims_eqv' => 'AlternativeTitle',
			'description' => 'DCMI alternative - from Dublin Core Standard. An alternative (more used, shorter) title for the resource.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'audience' => array(
			'ims_eqv' => 'Audience',
			'description' => 'DCMI audience- from Dublin Core Standard. From whom the resource is intended or useful.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'author' => array(
			'ims_eqv' => 'Author',
			'description' => 'Author',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'bibliographic_citation' => array(
			'ims_eqv' => 'BibliographicCitation',
			'description' => 'DCMI bibliographicCitation - from Dublin Core Standard. A bibliographic citation for this resource.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'contributor' => array(
			'ims_eqv' => 'Contributor',
			'description' => 'DCMI contributor - from Dublin Core Standard. The entity responsible for making contributions to this resource.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'coverage' => array(
			'ims_eqv' => 'Coverage',
			'description' => 'DCMI coverage - from Dublin Core Standard. The spatial or temporal topic of the resource, the spatial aplicability of the resource, or the jurisdiction under which the resource is relevant.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'date_of_publication' => array(
			'ims_eqv' => 'DateOfPublication',
			'description' => '',
			'type' => 'varchar',
			'length' => 128,
			'not null' => FALSE,
		),
		'description' => array(
			'ims_eqv' => 'Description',
			'description' => 'Description',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'extend' => array(
			'ims_eqv' => 'Extend',
			'description' => 'DCMI extend - from Dublin Core standard. The size or duration of the resource in pages, minutes, etc.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'featured' => array(
			'ims_eqv' => 'Featured',
			'description' => 'Yes/No. Only 10 elements can be featured at a time.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'filename' => array(
			'ims_eqv' => 'Filename',
			'description' => 'Filename',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		/* Filename_Suffix__lct */
		'hexID' => array(
			'ims_eqv' => 'HexID',
			'description' => 'Hex ID.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'num_downloads' => array(
			'ims_eqv' => 'NumDownloads',
			'description' => 'Number of times that the resource has been downloaded.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'on_the_web' => array(
			'ims_eqv' => 'OnTheWeb',
			'description' => 'Yes/No. Determines of the resource and its metadata can be made public on the web.',
			'type' => 'varchar',
			'length' => '4',
			'not null' => FALSE,
		),
		'publisher' => array(
			'ims_eqv' => 'Publisher',
			'description' => 'Publisher.',
			'type' => 'varchar',
			'length' => '1024',
			'not null' => FALSE,
		),
		'restricted__lcn' => array(
			'ims_eqv' => 'Restricted__lcn',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'rights' => array(
			'ims_eqv' => 'Rights',
			'description' => 'DCMI rights - from Dublin Core standard. Information about the rights held in and over the resource.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'rights_holder' => array(
			'ims_eqv' => 'RightsHolder',
			'description' => 'DCMI rightsHolder - from Dublin Core standard. A person or organisation owning or managing rights over the resource.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'short_listed' => array(
			'ims_eqv' => 'ShortListed',
			'description' => 'Yes/No. These are the preselected resources that are shown in the browser and appear in general search results.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'sort_order' => array(
			'ims_eqv' => 'SortOrder',
			'description' => 'Sort order.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'subject' => array(
			'ims_eqv' => 'Subject',
			'description' => 'Publisher.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'title_text' => array(
			'ims_eqv' => 'Title_Text',
			'description' => 'Title.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'url' => array(
			'ims_eqv' => 'Url',
			'description' => 'Internet URL to access the resource - ONLY FOR EXTERNAL RESOURCES.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'web_rating_abs' => array(
			'ims_eqv' => 'Web_RatingAbs',
			'description' => 'Sum of all ratings received by the file [ SHOULD THIS FIELD BE DELETED? ].',
			'type' => 'int',
			'not null' => FALSE,
		),
		'web_rating_average' => array(
			'ims_eqv' => 'Web_RatingAverage',
			'description' => 'The average rating used by the web maintained "non-dynamically" by the php-script when rating is taking place. [JS/15.12.2010].',
			'type' => 'int',
			'not null' => FALSE,
		),
		'web_rating_count' => array(
			'ims_eqv' => 'Web_RatingCount',
			'description' => 'Number of times that the resource has been rated.',
			'type' => 'int',
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		/* zz__ORCSearchGeneral__lct, Concatenated field of searchable words used in the ORC web GUI. Consists of title, author, description keywords. Character set is simplified by custom function for searchability.  */
		'zz__orc_search_keyword_id__lxt' => array(
			'ims_eqv' => 'zz__ORCSearchKeywordID__lxt',
			'description' => 'IConcatenated field of keyword IDs used in the ORC web GUI. Character set is simplified by custom function for searchability.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__orc_search_keyword_unicode__lxt' => array(
			'ims_eqv' => 'zz__ORCSearchKeywordUnicode__lxt',
			'description' => 'Concatenated field of keywords (unicode) used in the ORC web GUI. Character set is simplified by custom function for searchability.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		/* zz__PATH_Count_Groups__lcn */
		/* zz__Web_RatingAverage__lcn, Average of all web ratings received for the file */
	);
	return $fields;
}

function _gbif_ims_file_cluster_fields() {
	$fields = array(
		'file_clusterID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File Cluster ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_file_cluster_typeID' => array(
			'ims_eqv' => '_kf_FileclustertypeID',
			'description' => 'File cluster type ID',
			'type' => 'int',
			'not null' => FALSE,
		),
		'file_cluster' => array(
			'ims_eqv' => 'Filecluster',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_cluster_type_fields() {
	$fields = array(
		'file_cluster_typeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File cluster type ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'file_cluster_type' => array(
			'ims_eqv' => 'Fileclustertype',
			'description' => '',
			'type' => 'varchar',
			'length' => 128,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_event_access_category_fields() {
	$fields = array(
		'file_event_access_categoryID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File event access category ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_event_access_categoryID' => array(
			'ims_eqv' => '_kf_EventaccesscategoryID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_fileID' => array(
			'ims_eqv' => '_kf_FileID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_file_cluster_fields() {
	$fields = array(
		'file_file_clusterID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File file cluster ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_file_clusterID' => array(
			'ims_eqv' => '_kf_FileclusterID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_fileID' => array(
			'ims_eqv' => '_kf_FileID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'version' => array(
			'ims_eqv' => 'Version',
			'description' => '',
			'type' => 'varchar',
			'length' => 64,
			'not null' => FALSE,
		),
		/* zz__Constant_1__lcn */
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_group_fields() {
	$fields = array(
		'file_groupID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File group ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_fileID' => array(
			'ims_eqv' => '_kf_FileID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_groupID' => array(
			'ims_eqv' => '_kf_GroupID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_keyword_fields() {
	$fields = array(
		'file_keywordID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File group ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_fileID' => array(
			'ims_eqv' => '_kf_FileID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_keywordID' => array(
			'ims_eqv' => '_kf_KeywordID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'notes' => array(
			'ims_eqv' => 'Notes',
			'description' => '',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'sort' => array(
			'ims_eqv' => 'Sort',
			'description' => '',
			'type' => 'varchar',
			'length' => 64,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_path_fields() {
	$fields = array(
		'file_pathID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File path ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_file_pathID_parent' => array(
			'ims_eqv' => '_kf_FilepathID_Parent',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'description' => array(
			'ims_eqv' => 'Description',
			'description' => '',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'is_key_document' => array(
			'ims_eqv' => 'IsKeydocument',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'name' => array(
			'ims_eqv' => 'Name',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'public' => array(
			'ims_eqv' => 'Public',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'sort_order' => array(
			'ims_eqv' => 'SortOrder',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		/* zz__PATH__Count_Files__lcn */
		/* zz__PATH__Fullpath__lct */
	);
	return $fields;
}

function _gbif_ims_file_resource_tree_fields() {
	$fields = array(
		'file_resource_treeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File resource tree ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_fileID' => array(
			'ims_eqv' => '_kf_FileID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_resource_tree' => array(
			'ims_eqv' => '_kf_ResourceTree',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_file_type_fields() {
	$fields = array(
		'file_typeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'File type ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'icon_html' => array(
			'ims_eqv' => 'Icon_HTML',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		/* Icon_Image */
		'mime_type' => array(
			'ims_eqv' => 'MIMEtype',
			'description' => '',
			'type' => 'varchar',
			'length' => 256,
			'not null' => FALSE,
		),
		'suffix' => array(
			'ims_eqv' => 'Suffix',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_keyword_fields() {
	$fields = array(
		'keywordID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Keyword ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_drupal_tid' => array(
			'ims_eqv' => '_kf_Drupal_tid',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'code1' => array(
			'ims_eqv' => 'Code1',
			'description' => 'Code dividing the different domains',
			'type' => 'char',
			'length' => 6,
			'not null' => FALSE,
		),
		'code2' => array(
			'ims_eqv' => 'Code2',
			'description' => 'Code within the different domains',
			'type' => 'char',
			'length' => 2,
			'not null' => FALSE,
		),
		/* CodesAndName */
		'explanation' => array(
			'ims_eqv' => 'Explanation',
			'description' => 'Further explanation of the meaning of the keyword, which elements should be tagged with it, etc.',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'keyword' => array(
			'ims_eqv' => 'Keyword',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'keyword_short' => array(
			'ims_eqv' => 'Keyword_short',
			'description' => '',
			'type' => 'varchar',
			'length' => 512,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_keyword_keyword_type_fields() {
	$fields = array(
		'keyword_keyword_typeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Keyword type ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_keywordID' => array(
			'ims_eqv' => '_kf_KeywordID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_keyword_typeID' => array(
			'ims_eqv' => '_kf_KeywordTypeID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		/* KeywordKeywordTypeText */
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_keyword_language_fields() {
	$fields = array(
		'keyword_languageID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Keyword language ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_keywordID' => array(
			'ims_eqv' => '_kf_KeywordID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'_kf_language' => array(
			'ims_eqv' => '_kf_Language',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'translated_text' => array(
			'ims_eqv' => 'TranslatedText',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__translated_text_unicode_search__lct' => array(
			'ims_eqv' => 'zz__TranslatedTextUnicodeSearch__lct',
			'description' => 'Unicode-encoded version of TranslatedText to support multi-language search. All text is put in lowercase to avoid the case-sensitivity of unicode. Alle accented characters are simplified. (e.g. »â« -> »a«) ',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_keyword_type_fields() {
	$fields = array(
		'keyword_typeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Keyword type ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'keyword_type' => array(
			'ims_eqv' => 'KeywordType',
			'description' => '',
			'type' => 'varchar',
			'length' => 256,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_language_fields() {
	$fields = array(
		'languageID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Keyword type ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'iso_639_1' => array(
			'ims_eqv' => 'ISO_639_1',
			'description' => '',
			'type' => 'char',
			'length' => 8,
			'not null' => FALSE,
		),
		'iso_639_2' => array(
			'ims_eqv' => 'ISO_639_2',
			'description' => '',
			'type' => 'char',
			'length' => 16,
			'not null' => FALSE,
		),
		'language' => array(
			'ims_eqv' => 'Language',
			'description' => '',
			'type' => 'varchar',
			'length' => 256,
			'not null' => FALSE,
		),
		'language_original_name' => array(
			'ims_eqv' => 'Language_OriginalName',
			'description' => 'Name of the language in that language for drop-down menus',
			'type' => 'varchar',
			'length' => 256,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_resource_tree_fields() {
	$fields = array(
		'resource_treeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Resource tree ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_resource_tree' => array(
			'ims_eqv' => '_kf_ResourceTree',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'knot_description' => array(
			'ims_eqv' => 'KnotDescription',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'knot_name' => array(
			'ims_eqv' => 'KnotName',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'knot_order' => array(
			'ims_eqv' => 'KnotOrder',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'on_the_web' => array(
			'ims_eqv' => 'OnTheWeb',
			'description' => 'Whether to show this record in public.',
			'type' => 'int',
			'size' => 'tiny',
			'not null' => FALSE,
		),
		'zz__count_resources__lxn' => array(
			'ims_eqv' => 'zz__Count_Resources__lxn',
			'description' => 'Counting the number of resources hanging from this node.',
			'type' => 'int',
			'size' => 'tiny',
			'not null' => FALSE,
		),
		'zz__count_resources_recursive__lxn' => array(
			'ims_eqv' => 'zz__Count_Resources_Recursive__lxn',
			'description' => 'Counting the number of resources hanging from this node.',
			'type' => 'int',
			'size' => 'tiny',
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_resource_tree_language_fields() {
	$fields = array(
		'resource_tree_languageID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Resource tree ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_language' => array(
			'ims_eqv' => '_kf_Language',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'resource_treeID' => array(
			'ims_eqv' => '_kf_ResourceTreeID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'field' => array(
			'ims_eqv' => 'Field',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'translated_text' => array(
			'ims_eqv' => 'TranslatedText',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_resource_type_fields() {
	$fields = array(
		'resource_typeID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Resource type ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		/* Icon image, which we don't need. */
		'resource_type' => array(
			'ims_eqv' => 'ResourceType',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}

function _gbif_ims_resource_type_language_fields() {
	$fields = array(
		'resource_type_languageID' => array(
			'ims_eqv' => '__kp_ID',
			'description' => 'Resource tree language ID',
			'type' => 'int',
			'not null' => TRUE,
		),
		'_kf_language' => array(
			'ims_eqv' => '_kf_Language',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'resource_typeID' => array(
			'ims_eqv' => '_kf_ResourceTypeID',
			'description' => '',
			'type' => 'int',
			'not null' => FALSE,
		),
		'translated_text' => array(
			'ims_eqv' => 'TranslatedText',
			'description' => '',
			'type' => 'varchar',
			'length' => 1024,
			'not null' => FALSE,
		),
		'zz__created_account__lxt' => array(
			'ims_eqv' => 'zz__Created_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__created_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Created_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
		'zz__modified_account__lxt' => array(
			'ims_eqv' => 'zz__Modified_Account__lxt',
			'description' => 'Creation account name',
			'type' => 'text',
			'size' => 'normal',
			'not null' => FALSE,
		),
		'zz__modified_timestamp__lxm' => array(
			'ims_eqv' => 'zz__Modified_Timestamp__lxm',
			'description' => '',
			'mysql_type' => 'DATETIME',
			'not null' => FALSE,
		),
	);
	return $fields;
}