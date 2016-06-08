<?php

/**
 * @param $participantID
 * @return mixed
 */
function _gp_get_participant_contacts($participantID) {
  $contacts = array();
  if (isset($participantID)) {
    $participant = _gbif_participant_participant_object($participantID);

    if (isset($participant['people'])) {
      foreach ($participant['people'] as $person) {
        $person_object = json_decode(_gp_authenticated_call(_gbif_participant_api_person() . '/' . $person['personId']), TRUE);
        $person_object['role'] = $person['role'];
        $contacts[] = $person_object;
        unset($person_object);
      }
    }
    if (isset($participant['nodes']) && count($participant['nodes']) == 1) {
      foreach ($participant['nodes'] as $node) {
        $node_object = json_decode(_gp_authenticated_call(_gbif_participant_api_node() . '/' . $node['id']), TRUE);
        if (isset($node_object['people'])) {
          foreach ($node_object['people'] as $person) {
            $person_object = json_decode(_gp_authenticated_call(_gbif_participant_api_person() . '/' . $person['personId']), TRUE);
            $person_object['role'] = $person['role'];
            $contacts[] = $person_object;
            unset($person_object);
          }
        }
      }
    }
  }

  // Insert non enumerated role names.
  foreach ($contacts as &$contact) {
    $contact['role_name'] = _gp_format_role($contact['role']);
  }
  // Sort the contacts 1) by role; 2) by last name.
  $roles = array('Head of Delegation', 'Temporary Head of Delegation', 'Temporary Delegate', 'Additional Delegate', 'Node Manager', 'Node Team');
  usort($contacts, function($a, $b) use ($roles) {
    if ($a['role_name'] == $b['role_name']) {
      // Type is the same, sort by name
      if ($a['surname'] == $b['surname']) return 0;
      return $a['surname'] < $b['surname'] ? -1 : 1;
    }
    return array_search($a['role_name'], $roles) - array_search($b['role_name'], $roles);
  });

  return $contacts;
}

/**
 * Helper function for rendering contacts.
 * @param $position: where on the template the contacts will be.
 * 				because they have different rendering styles.
 */
function _gbif_participant_print_contacts($position, $contacts, $iso2) {
	$contact_url_base = '/country/' . $iso2 . '/participation';
	$html = '';
	switch ($position) {
		case 'participant':
			foreach ($contacts as $contact) {
        switch ($contact['role_name']) {
					case 'Head of Delegation':
						$html .= '<h3>Head of Delegation</h3>';
						$html .= '<p>';
						$html .= '<a href="' . $contact_url_base . '#contact' . $contact['id'] . '">';
            $html .= $contact['firstName'] . ' ' . $contact['surname'];
						$html .= '</a>';
						$html .= '</p>';
						break;
					case 'Node Manager':
						$html .= '<h3>Participant Node Manager</h3>';
						$html .= '<p>';
						$html .= '<a href="' . $contact_url_base . '#contact' . $contact['id'] . '">';
            $html .= $contact['firstName'] . ' ' . $contact['surname'];
						$html .= '</a>';
						$html .= '</p>';
						break;
				}
			}
			break;
		case 'node':

			$html .= '<table class="table table-curved"><tbody>';
			foreach ($contacts as $contact) {
        $html .= '<tr>';
				$html .= '<td>';
				$html .= '<address>';
        $html .= '<div class="contactName">';
        $html .= (!empty($contact['title'])) ? $contact['title'] . ' ' : '';
        $html .= $contact['firstName'] . ' ' . $contact['surname'] . '</div>';
        $html .= '<div style="display: block;">';
				$html .= (isset($contact['jobTitle'])) ? '<div class="contactPosition">' . $contact['jobTitle'] . '</div>' : '';
				$html .= '<div class="address">';
				$html .= (isset($contact['institutionName'])) ? '<span>' . $contact['institutionName'] . '</span>' : '';
				if (isset($contact['address'])) {
					$line_broken_address = _gbif_participant_print_address_fields($contact['address']);
					$html .= '<span>' . $line_broken_address . '</span>';
					$html .= '<span>' . $contact['countryName'] . '</span>';
				}
				$html .= '<span class="email"><a href="mailto:' . $contact['email'] . '" title="email">' . $contact['email'] . '</a></span>';
				$html .= (isset($contact['phone'])) ? '<span class="phone">' . $contact['phone'] . '</span>' : '';

				$html .= '</div>';
				$html .= '</address>';
				$html .= '</td>';
				$html .= '<td>' . '<a id="contact' . $contact['id'] . '"></a>' . $contact['role_name'] . '</td>';
				$html .= '</tr>';
			}
			$html .= '</tbody></table>';
			break;
	}
	return $html;
}

/**
 * Helper function for rendering GBIF region.
 */
function _gbif_participant_print_region($region) {
	$html = '';
	$html .= '<h3>GBIF Region</h3>';
	$html .= '<p>';
	$html .= _gbif_participant_format_region($region);
	$html .= '</p>';
	return $html;
}

/**
 * Helper function for formatting the role text.
 */
function _gp_format_role($role) {
	$role = strtoupper(str_replace(' ', '_', $role));
	$roles = array(
		'HEAD_OF_DELEGATION' => t('Head of Delegation'),
		'TEMPORARY_HEAD_OF_DELEGATION' => t('Temporary Head of Delegation'),
    'TEMPORARY_DELEGATE' => t('Temporary Delegate'),
		'ADDITIONAL_DELEGATE' => t('Additional Delegate'),
		'NODE_MANAGER' => t('Node Manager'),
		'NODE_STAFF' => t('Node Team'),
		'NODES_STAFF' => t('Node Team'),
		'NODE_TEAM' => t('Node Team'),
	);
	return $roles[$role];
}

/**
 *
 */
function _gp_reader_friendly_membership_type($cap_enum) {
  $types = gbif_participant_membership_types();
  foreach ($types as $t) {
    if ($t['key'] == strtolower($cap_enum)) {
      $type = $t;
    }
  }
  return $type['title'];
}