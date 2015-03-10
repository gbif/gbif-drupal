<?php

/**
 * Default tag sets according to which the grouping will occur.
 * @return array
 */
function npt_mendeley_default_tag_sets() {
	// The default tag sets for grouping documents
	$tag_sets = array();

	// Generic tag sets on data use
	$tag_sets[] = array(
		'name' => t('GBIF use cases: All'),
		'tab_name' => t('All'),
		'machine_name' => 'use_cases',
		'url' => 'use-cases',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed research citing use of biodiversity data accessed through GBIF'),
		'tags' => array('GBIF_used'),
		'weight' => 1,
	);
	$tag_sets[] = array(
		'name' => t('Data papers'),
		'tab_name' => t('Data papers'),
		'machine_name' => 'data_paper',
		'url' => 'data-paper',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed data papers describing biodiversity datasets published through the GBIF network'),
		'tags' => array('data_paper'),
		'weight' => 2,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Invasive alien species'),
		'tab_name' => t('Invasive alien species'),
		'machine_name' => 'invasives',
		'url' => 'invasives',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed publications using GBIF-mediated data to assist research on invasive alien species'),
		'tags' => array('GBIF_used', 'invasives'),
		'weight' => 3,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Climate change'),
		'tab_name' => t('Climate change'),
		'machine_name' => 'climate_change',
		'url' => 'climate-change',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed publications using GBIF-mediated data to assist research on impacts of climate change on biodiversity'),
		'tags' => array('GBIF_used', 'climate_change'),
		'weight' => 4,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Conservation'),
		'tab_name' => t('Conservation'),
		'machine_name' => 'conservation',
		'url' => 'conservation',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed publications using GBIF-mediated data to assist research on conservation, including threatened species and protected areas'),
		'tags' => array('GBIF_used', 'conservation'),
		'tags_alt' => array(
			array('GBIF_used', 'endangered_species'),
			array('GBIF_used', 'IUCN_red_list'),
		),
		'weight' => 5,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Human health'),
		'tab_name' => t('Human health'),
		'machine_name' => 'human_health',
		'url' => 'human-health',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed publications using GBIF-mediated data to assist research relating to human health and biodiversity, including disease vectors and medicines'),
		'tags' => array('GBIF_used', 'human_health'),
		'tags_alt' => array(
			array('GBIF_used', 'medical_plants'),
		),
		'weight' => 6,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Food and farming'),
		'tab_name' => t('Agriculture'),
		'machine_name' => 'agriculture',
		'url' => 'agriculture',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed publications using GBIF-mediated data to assist research relating to agriculture, biofuels, aquaculture and wild fisheries'),
		'tags' => array('GBIF_used', 'agriculture'),
		'tags_alt' => array(
			array('GBIF_used', 'biofuels'),
			array('GBIF_used', 'aquaculture'),
		),
		'weight' => 7,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Data management'),
		'tab_name' => t('Data management'),
		'machine_name' => 'data_management',
		'url' => 'data-management',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed literature citing GBIF infrastructure and tools for data management'),
		'tags' => array('GBIF_used', 'data_management'),
		'weight' => 8,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Ecosystem services'),
		'tab_name' => t('Ecosystem services'),
		'machine_name' => 'ecosystem_services',
		'url' => 'ecosystem-services',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed research using GBIF-mediated data to analyse the benefits that ecosystems provide to economies, livelihoods and human well-being'),
		'tags' => array('GBIF_used', 'ecosystem_services'),
		'tags_alt' => array(
			array('GBIF_used', 'ecosystem_function'),
		),
		'weight' => 9,
	);
	$tag_sets[] = array(
		'name' => t('GBIF use cases: Phylogenetics'),
		'tab_name' => t('Phylogenetics'),
		'machine_name' => 'phylogenetics',
		'url' => 'phylogenetics',
		'type' => 'gbif_used',
		'desc' => t('Peer-reviewed research that uses GBIF-mediated data and molecular sequencing data to study evolutionary relationships between species'),
		'tags' => array('GBIF_used', 'phylogenetics'),
		'tags_alt' => array(
			array('GBIF_used', 'evolution')
		),
		'weight' => 10,
	);

	// Prepare tag sets for countries
	include_once DRUPAL_ROOT . '/includes/iso.inc' ;
	$countries = country_get_list();
	$iso_countries = array();
	foreach ($countries as $iso => $country) {
		$iso_countries[] = $iso;
	}
	sort($iso_countries);
	$gbif_enum_countries = json_decode(file_get_contents(GBIF_ENUMERATION_COUNTRY));

	foreach ($iso_countries as $gbif_country) {
		foreach ($gbif_enum_countries as $gbif_enum_country) {
			if ($gbif_enum_country->iso2 == $gbif_country) $title = $gbif_enum_country->title;
		}
		$tag_sets[] = array(
			'name' => $title,
			'machine_name' => $gbif_country,
			'type' => 'country',
			'desc' => t('Peer-reviewed publications using GBIF-mediated data authored by researchers based in @country', array('@country' => $title)),
			'tags' => array('GBIF_used', $gbif_country),
		);
		$tag_sets[] = array(
			'name' => $title . ' biodiversity',
			'machine_name' => $gbif_country . '_bio',
			'type' => 'country',
			'desc' => t('Peer-reviewed publications using GBIF-mediated data to assist research relating to biodiversity in @country', array('@country' => $title)),
			'tags' => array('GBIF_used', $title . '_biodiversity'),
		);
	}
	return $tag_sets;
}