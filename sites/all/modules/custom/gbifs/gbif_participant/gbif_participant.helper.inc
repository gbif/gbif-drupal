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

/**
 * Splits the provided JSON into an array of columns, sorted by the name.
 * @param $json which must be an array
 * @param $cols number of columns to split into
 * @return array of input data split into the columns
 */
function _gbif_participant_columular_countries($json, $cols) {
  // sort by country name
  usort($json, function($a, $b) {
    return (strnatcasecmp($a['title'], $b['title']));
  });

  $col_size = ceil(count($json) / $cols);
  return array_chunk($json, $col_size);
}

function _gbif_participant_country_list() {
  $countries = _gbif_participant_country_object();
  $participants = _gbif_participant_participant_query();
  // Insert bits for determining if a country is a participant.
  foreach ($countries as $k => $country) {
    foreach ($participants as $participant) {
      if ($country['iso2'] == $participant['countryCode'] && (in_array($participant['participationStatus'], array('VOTING', 'ASSOCIATE')) || $participant['countryCode'] == 'TW')) {
        $countries[$k]['participationStatus'] = $participant['participationStatus'];
      }
    }
  }
  $chunks = _gbif_participant_columular_countries($countries, 4);

  $columns = array();
  foreach ($chunks as $chunk) {
    $country_list = '<ul>';
    foreach ($chunk as $country) {
      if ($country['official'] == "true") {
        $link = l($country['title'], 'country/' . $country['iso2']);
        $country_list .= '<li class="country ';
        $country_list .= (!empty($country['participationStatus'])) ? 'participant' : '';
        $country_list .= '">';
        $country_list .= $link;
        $country_list .= '</li>';
      }
    }
    $country_list .= '</ul>';
    $columns[] = $country_list;
  }

  return $columns;
}

function _gbif_participant_country_object() {
  return json_decode(file_get_contents(_gbif_participant_api_enumeration_country()), TRUE);
}

function _gbif_participant_participant_object($participantID = NULL) {
  if (isset($participantID)) {
    return json_decode(_gp_authenticated_call(_gbif_participant_api_participant() . '/' . $participantID), TRUE);
  }
  else {
    return json_decode(_gp_authenticated_call(_gbif_participant_api_participants()), TRUE);
  }
}

function _gp_get_type_name($type_mname) {
  $types = node_type_get_types();
  foreach ($types as $m_name => $type) {
    if ($m_name == $type_mname) {
      return $type->name;
    }
  }
  return '';
}

function cmp_by_timestamp($a, $b) {
  return $b['timestamp'] - $a['timestamp'];
}

function human_timing($time) {
  $time = time() - $time; // to get the time since that moment

  $tokens = array (
    31536000 => 'year',
    2592000 => 'month',
    604800 => 'week',
    86400 => 'day',
    3600 => 'hour',
    60 => 'minute',
    1 => 'second'
  );

  foreach ($tokens as $unit => $text) {
    if ($time < $unit) continue;
    $numberOfUnits = floor($time / $unit);
    return $numberOfUnits.' '.$text.(($numberOfUnits>1)?'s':'');
  }

  return '';
}

function rss_to_time($rss_time) {
  $day = substr($rss_time, 5, 2);
  $month = substr($rss_time, 8, 3);
  $month = date('m', strtotime("$month 1 2011"));
  $year = substr($rss_time, 12, 4);
  $hour = substr($rss_time, 17, 2);
  $min = substr($rss_time, 20, 2);
  $second = substr($rss_time, 23, 2);
  $timezone = substr($rss_time, 26);

  $timestamp = mktime($hour, $min, $second, $month, $day, $year);

  date_default_timezone_set('UTC');

  if(is_numeric($timezone)) {
    $hours_mod = $mins_mod = 0;
    $modifier = substr($timezone, 0, 1);
    $hours_mod = (int) substr($timezone, 1, 2);
    $mins_mod = (int) substr($timezone, 3, 2);
    $hour_label = $hours_mod>1 ? 'hours' : 'hour';
    $strtotimearg = $modifier.$hours_mod.' '.$hour_label;
    if($mins_mod) {
      $mins_label = $mins_mod>1 ? 'minutes' : 'minute';
      $strtotimearg .= ' '.$mins_mod.' '.$mins_label;
    }
    $timestamp = strtotime($strtotimearg, $timestamp);
  }

  return $timestamp;
}

function strtotitle($title) {
  // Converts $title to Title Case, and returns the result.
  // Our array of 'small words' which shouldn't be capitalised if
  // they aren't the first word. Add your own words to taste.
  $smallwordsarray = array(
    'of','a','the','and','an','or','nor','but','is','if','then','else','when',
    'at','from','by','on','off','for','in','out','over','to','into','with'
  );

  // Split the string into separate words
  $words = explode(' ', $title);

  foreach ($words as $key => $word) {
    // If this word is the first, or it's not one of our small words, capitalise it
    // with ucwords().
    if ($key == 0 or !in_array($word, $smallwordsarray)) $words[$key] = ucwords($word);
  }

  // Join the words back into a string
  $newtitle = implode(' ', $words);

  return $newtitle;
}

/**
 * Helper function for preparing HTML for data sections in country pages.
 */
function _gbif_participant_country_data($iso2) {
  $data_types = array(
    'dataset' => array(
      'text' => t('occurrence dataset'),
      'about_dataset_url' => 'country/' . $iso2 . '/about/datasets',
      'about_dataset_query' => array(),
      'about_record_url' => 'occurrence/search',
      'about_record_query' => array('country' => $iso2),
      'from_dataset_url' => 'dataset/search',
      'from_dataset_query' => array('publishingCountry' => $iso2, 'type' => 'OCCURRENCE'),
      'from_record_url' => 'occurrence/search',
      'from_record_query' => array('publishingCountry' => $iso2),
    ),
    'checklist' => array(
      'text' => t('checklist dataset'),
      'about_dataset_url' => 'dataset/search',
      'about_dataset_query' => array('country' => $iso2, 'type' => 'CHECKLIST'),
      'from_dataset_url' => 'dataset/search',
      'from_dataset_query' => array('publishingCountry' => $iso2, 'type' => 'CHECKLIST'),
    ),
    'metadata' => array(
      'text' => t('metadata-only dataset'),
      'about_dataset_url' => 'dataset/search',
      'about_dataset_query' => array('country' => $iso2, 'type' => 'METADATA'),
      'from_dataset_url' => 'dataset/search',
      'from_dataset_query' => array('publishingCountry' => $iso2, 'type' => 'METADATA'),
    )
  );

  $counts = gbif_participant_country_count($iso2);
  $country_name = gbif_participant_country_lookup($iso2, 'iso2', 'title');

  $output = array();
  foreach (array('about', 'from') as $type) {
    $html = '';
    $html .= '<ul>';
    foreach ($data_types as $data_type => $attr) {
      $key_count = $data_type . '_' . $type . '_count';
      $key_record_count = $data_type . '_' . $type . '_record_count';
      if ($counts[$key_count] != 0) {
        // Dataset count item.
        $link_text_datasets = format_plural($counts[$key_count],
          '1 !type_text',
          '!count !type_text' . 's',
          array('!count' => number_format($counts[$key_count]), '!type_text' => $attr['text'])
        );
        $key_dataset_link = $type . '_dataset_url';
        $key_dataset_query = $type . '_dataset_query';
        $link_datasets = l($link_text_datasets, $attr[$key_dataset_link], array('query' => $attr[$key_dataset_query]));
        // Record count item when available.
        $link_text_records = format_plural($counts[$key_record_count],
          '1 record',
          '!count records',
          array('!count' => number_format($counts[$key_record_count]))
        );
        $key_record_link = $type . '_record_url';
        $key_record_query = $type . '_record_query';
        if (isset($attr[$key_record_link])) {
          $link_records = l($link_text_records, $attr[$key_record_link], array('query' => $attr[$key_record_query]));
        }
        else {
          $link_records = $link_text_records;
        }

        $html .= '<li>';
        $html .= $link_datasets;
        if ($data_type != 'metadata') {
          $html .= ' ' . t('with') . ' ' . $link_records;
        }
        $html .= ($data_type == 'metadata' && $type == 'about') ? t(' relevant to !country', array('!country' => $country_name)) : '';
        $html .= '.</li>';
      }
      else {
        $html .= '<li>';
        $html .= t('No ') . $attr['text'] . 's';
        $html .= ($data_type == 'metadata' && $type == 'about') ? t(' relevant to !country', array('!country' => $country_name)) : '';
        $html .= '.</li>';
      }
    }

    switch ($type) {
      case 'about':
        // contributed by
        $link_text_contributed_by = format_plural($counts['contributed_by_count'],
          '1 country',
          '!count countries',
          array('!count' => number_format($counts['contributed_by_count']))
        );
        $link_text_contributed_by = l($link_text_contributed_by, 'country/' . $iso2 . '/about/countries');
        $link_text_contributed_by .= format_plural($counts['contributed_by_count'],
          ' contributes data about !country',
          ' contribute data about !country',
          array('!count' => number_format($counts['contributed_by_count']), '!country' => $country_name)
        );
        $html .= '<li>' . $link_text_contributed_by . '.</li>';
        break;

      case 'from':
        // contributing to
        $html .= '<li>';
        $html .= t('!country publishes data covering ', array('!country' => $country_name));
        $link_text_contributing_to = t('@count countries, territories and islands', array('@count' => $counts['contributing_to_count']));
        $link_contributing_to = l($link_text_contributing_to, 'country/' . $iso2 . '/publishing/countries');
        $html .= $link_contributing_to;
        $html .= '.</li>';
        break;
    }

    $html .= '</ul>';
    $output[$type] = $html;
  }
  $output['about_title'] = t('Data about !country', array('!country' => $country_name));
  $output['from_title'] = t('Data from !country', array('!country' => $country_name));

  return $output;
}

/**
 * Helper function for formatting the region text.
 * @param $region
 */
function _gbif_participant_format_region($region) {
  $regions = array(
    'AFRICA' => t('Africa'),
    'ASIA' => t('Asia'),
    'EUROPE' => t('Europe'),
    'LATIN_AMERICA' => t('Latin America'),
    'NORTH_AMERICA' => t('North America'),
    'OCEANIA' => t('Oceania'),
  );
  return $regions[$region];
}

function _gbif_participant_format_datatype($type) {
  $types = array(
    'OCCURRENCE' => t('Occurrence dataset'),
    'CHECKLIST' => t('Checklist dataset'),
    'METADATA' => t('Metadata dataset'),
    'SAMPLING_EVENT' => t('Sampling event'),
  );
  return $types[$type];
}

/**
 * Helper function for formatting social media icons.
 */
function _gbif_participant_format_social_media($gp_comm_social) {
  $path = '/' . drupal_get_path('module', 'gbif_participant') . '/img/social_icons';
  $html = '<div class="social-media">';
  $html .= '<h3>Social Media</h3>';
  foreach ($gp_comm_social as $media) {
    $media_type = strtolower($media['title']);
    $html .= '<a href="' . $media['url'] . '" target="_blank">';
    $html .= '<img src="' . $path . '/' . $media_type . '.png">';
    $html .= '</a>';
  }
  $html .= '</div>';
  return $html;
}

/**
 * Construct Participant-region array.
 * @return array
 * @see https://github.com/gbif/directory/blob/master/migration/transform.js#L148 for definitions
 */
function _gbif_participant_region_lookup() {
  $participants = json_decode(_gp_authenticated_call(_gbif_participant_api_participants()), TRUE);
  $participants = $participants['results'];
  $country_region = [];
  // keeps only active participants
  foreach ($participants as $k => $p) {
    if ($p->participationStatus === 'FORMER' || $p->participationStatus === 'OBSERVER') {
      unset($participants[$k]);
    }
    else {
      if (isset($p['countryCode'])) {
        $country_region[$p['countryCode']] = $p['gbifRegion'];
      }
      else {
        watchdog('gbif_participant', '@participant misses country code', array('@participant' => $p['name']), WATCHDOG_DEBUG);
      }
    }
  }
  return $country_region;
}