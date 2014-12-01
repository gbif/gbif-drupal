<?php

/**
 * Modified from the same call that produces contacts in the Registry API.
 * @see https://github.com/gbif/drupal-mybatis/blob/master/src/main/resources/org/gbif/drupal/mybatis/ImsNodeMapper.xml#L50
 * @param $participantID
 * @return mixed
 */
function _gp_get_participant_contacts($participantID) {

	$query = db_select('gbif_ims_node', 'n');
	$query->join('gbif_ims_contact_group_role_node_participant', 'cgrnp', '(n.participantID = cgrnp.participantID OR n.nodeID = cgrnp.nodeID)');
	$query->join('gbif_ims_contact', 'c', 'cgrnp.contactID = c.contactID');
	$query->join('gbif_ims_group_role', 'gr', 'cgrnp.group_role_ID = gr.group_role_ID');
	$query->join('gbif_ims_group', 'g', 'gr.groupID = g.groupID AND gr.groupID in (11,12,13,31)');
	$query->leftJoin('gbif_ims_country', 'cou', 'c.countryID_address = cou.countryID');
	$query->leftJoin('gbif_ims_institution', 'i', 'c.institutionID = i.institutionID');

	$query->addField('cgrnp', 'contactID', 'cid');
	$query->addField('gr', 'groupID');
	$query->addField('cgrnp', 'participantID');
	$query->addField('cgrnp', 'nodeID');
	$query->addField('c', 'first_name');
	$query->addField('c', 'last_name');
	$query->addField('gr', 'name', 'type');
	$query->addField('c', 'address');
	$query->addField('c', 'city');
	$query->addField('c', 'zip_code');
	$query->addField('cou','name', 'contact_country');
	$query->addField('cou','iso2');
	$query->addField('i', 'name', 'contact_institution');
	$query->addField('c', 'email_address');
	$query->addField('c', 'phone_office');
	$query->addField('c', 'profile_url');
	$query->addField('c', 'job_position');
	$query->addField('c', 'job_description');

	$query
		->condition('cgrnp.active', 0, '!=')
		->condition(db_or()->isNull('c.on_the_web')->condition('c.on_the_web', 0, '!='))
		->condition('n.participantID', $participantID, '=');

	$query
		->orderBy('gr.name')
		->orderBy('c.last_name');

	$results = $query->execute()->fetchAll();

	return $results;
}

/**
 * Helper function for rendering contacts.
 * @param $position: where on the template the contacts will be.
 * 				because they have different rendering styles.
 */
function _gbif_participant_print_contacts($position, $contacts, $iso2) {
	$contact_url_base = '/country/' . $iso2 . '/participation';
	$html = '';
	foreach ($contacts as $contact) {
		$contact->type = _gp_format_role($contact->type);
	}
	switch ($position) {
		case 'participation':
			foreach ($contacts as $contact) {
				switch ($contact->type) {
					case 'Head of Delegation':
						$html .= '<h3>Head of Delegation</h3>';
						$html .= '<p>';
						$html .= '<a href="' . $contact_url_base . '#contact' . $contact->cid . '">';
						$html .= $contact->first_name . ' ' . $contact->last_name;
						$html .= '</a>';
						$html .= '</p>';
						break;
					case 'Node Manager':
						$html .= '<h3>Participant Node Manager</h3>';
						$html .= '<p>';
						$html .= '<a href="' . $contact_url_base . '#contact' . $contact->cid . '">';
						$html .= $contact->first_name . ' ' . $contact->last_name;
						$html .= '</a>';
						$html .= '</p>';
						break;
				}
			}
			break;
		case 'contacts':
			// Sort the contacts 1) by role; 2) by last name.
			$roles = array('Head of Delegation', 'Temporary Head of Delegation', 'Additional Delegate', 'Node Manager', 'Node Team');
			//uasort($contacts, function($a, $b) { return $a->last_name - $b->last_name; });
			usort($contacts, function($a, $b) use ($roles) {
				if ($a->type == $b->type) {
					// Type is the same, sort by last_name
					if ($a->last_name == $b->last_name) return 0;
					return $a->last_name < $b->last_name ? -1 : 1;
				}
				return array_search($a->type, $roles) - array_search($b->type, $roles);
			});

			$html .= '<table class="table table-curved"><tbody>';
			foreach ($contacts as $contact) {
				$html .= '<tr>';
				$html .= '<td>';
				$html .= '<address>';
				$html .= '<div class="contactName">' . $contact->first_name . ' ' . $contact->last_name . '</div>';
				$html .= '<div style="display: block;">';
				$html .= '<div class="contactPosition">' . $contact->job_position . '</div>';
				$html .= '<div class="address">';

				$html .= '<span>' . $contact->contact_institution . '</span>';
				$html .= '<span>' . $contact->address . '</span>';
				$html .= '<span class="city">' . $contact->zip_code . ' ' . $contact->city . '</span>';
				$country = countries_country_lookup($contact->iso2, 'iso2');
				$html .= '<span class="country">' . $country->name . '</span>';
				$html .= '<span class="email"><a href="mailto:' . $contact->email_address . '" title="email">' . $contact->email_address . '</a></span>';
				$html .= '<span class="phone">' . $contact->phone_office . '</span>';

				$html .= '</div>';
				$html .= '</address>';
				$html .= '</td>';
				$html .= '<td>' . '<a id="contact' . $contact->cid . '"></a>' . $contact->type . '</td>';
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
		'ADDITIONAL_DELEGATE' => t('Additional Delegate'),
		'NODE_MANAGER' => t('Node Manager'),
		'NODE_STAFF' => t('Node Team'),
		'NODES_STAFF' => t('Node Team'),
	);
	return $roles[$role];
}