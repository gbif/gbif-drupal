<?php

/**
 * Helper function for getting the corresponding participant info from
 * the Registry.
 * @param int $pid Participant ID
 */
function _gbif_participant_get_registry_participant($pid) {
	$uuid = _gbif_participant_get_uuid($pid);
	$p_call = _gbif_participant_api_registry_node() . '/' . $uuid;
	$json = json_decode(file_get_contents($p_call));
	return $json;
}

/**
 * Helper function for getting the UUID of the participant.
 */
function _gbif_participant_get_uuid($participantID, $mode = 'UUID') {
	$api_call = _gbif_participant_api_registry_node() . '?identifier=' . $participantID . '&identifierType=GBIF_PARTICIPANT';
	$json = json_decode(file_get_contents($api_call));
	$uuid = (!empty($json->results)) ? $json->results[0]->key : NULL;

  switch ($mode) {
    case 'UUID':
      return $uuid;
    case 'WEB_URL':
      return gbif_portal_base_url() . '/node/' . $uuid;
    case 'API_URL':
      return _gbif_participant_api_registry_node() . '/' . $uuid;
  }
}

/**
 * Helper function for constructing the root for Registry calls.
 */
function _gbif_participant_api_registry_node() {
	$env = variable_get('environment_settings');
	return $env['gbif_api_base_url'] . '/v' . $env['gbif_api_version'] . '/node';
}

function _gbif_participant_api_registry_org() {
	$env = variable_get('environment_settings');
	return $env['gbif_api_base_url'] . '/v' . $env['gbif_api_version'] . '/organization';
}

function _gbif_participant_api_dataset() {
	$env = variable_get('environment_settings');
	return $env['gbif_api_base_url'] . '/v' . $env['gbif_api_version'] . '/dataset';
}

function _gbif_participant_api_occurrence() {
	$env = variable_get('environment_settings');
	return $env['gbif_api_base_url'] . '/v' . $env['gbif_api_version'] . '/occurrence';
}

function _gbif_participant_api_enumeration_country() {
  $env = variable_get('environment_settings');
  return $env['gbif_api_base_url'] . '/v' . $env['gbif_api_version'] . '/enumeration/country';
}

function _gbif_participant_api_participants() {
  return '/participant?limit=300';
}

function _gbif_participant_api_participant() {
  return '/participant';
}

function _gbif_participant_api_node() {
  return '/node';
}

function _gbif_participant_api_person() {
  return '/person';
}

function _gbif_participant_api_person_role() {
  return '/person_role?limit=100';
}

function _gbif_participant_api_committee() {
  return '/committee';
}

function _gbif_participant_api_report() {
  return '/report';
}