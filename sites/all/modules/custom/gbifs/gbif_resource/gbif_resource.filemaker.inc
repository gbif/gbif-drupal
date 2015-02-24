<?php

/*
 * @file Functions here don't talk to FileMaker directly but gbif_ims_* tables.
 * They are organised this way to be consistent across our Drupal modules.
 *
 * We no longer sync from the FileMaker IMS, but we keep the code here in case
 * we need to analyse the keywords and old IMS content again.
 */
module_load_include('module', 'gbif_tweaks', 'gbif_tweaks');

function _gr_get_all_ims_resources() {
	$query = db_select('gbif_ims_file', 'f');

	$query->leftjoin('gbif_ims_file_path', 'fp', 'fp.file_pathID = f._kf_file_pathID');
	$query->leftjoin('gbif_ims_file_type', 'ft', 'ft.file_typeID = f._kf_file_typeID');
	$query->leftjoin('gbif_ims_language', 'l', 'l.languageID = f._kf_languageID');
	$query->leftjoin('gbif_ims_resource_type', 'rt', 'rt.resource_typeID = f._kf_typeID');

	$query->addField('f', 'fid');
	$query->addField('f', 'title_text');
	$query->addField('f', 'alternative_title');
	$query->addField('f', 'description');
	$query->addField('f', 'author');
	$query->addField('f', 'publisher');
	$query->addField('f', 'audience');
	$query->addField('f', 'abstract');
	$query->addField('f', 'bibliographic_citation');
	$query->addField('f', 'contributor');
	$query->addField('f', 'rights');
	$query->addField('f', 'rights_holder');
	$query->addField('f', 'num_downloads');
	$query->addField('f', 'short_listed');
	$query->addField('f', 'featured');
	$query->addField('f', 'on_the_web');
	$query->addField('f', 'date_of_publication');
	$query->addField('f', 'coverage');
	$query->addField('f', 'sort_order');
	$query->addField('f', 'subject');
	$query->addField('f', 'url');
	$query->addField('f', 'filename');
	$query->addField('f', 'restricted__lcn');
	$query->addField('f', 'hexID');
	$query->addField('f', 'zz__created_timestamp__lxm');
	$query->addField('f', 'zz__modified_account__lxt');
	$query->addField('f', 'zz__modified_timestamp__lxm');
	$query->addField('l', 'iso_639_1');
	$query->addField('l', 'language');
	$query->addField('ft', 'mime_type');
	$query->addField('rt', 'resource_type');

	$query->isNull('f.restricted__lcn');
	$query->isNotNull('rt.resource_type');
	$query->condition('rt.resource_type', 'Digital file', '<>');

	$results = $query->execute()->fetchAll();

	return $results;
}

/**
 * Update resource from the gbif_ims_file_*, gbif_ims_keyword_*, gbif_ims_resource_* tables.
 */
function _gbif_resource_sync() {
	// Check whether all necessary tables exist.
	$exist = gbif_ims_tables_exist('_gr_required_tables');
	if ($exist == FALSE) {
		return t('One or more required table missing. Please run !sync before continuing.', array('!sync' => l('IMS Sync', 'admin/config/gbif/ims_settings')));
	}

	// Import resource from the gbif_ims_* tables to the "resource" content type.
	$results = _gr_get_all_ims_resources();

	// Resource counts. For debugging.
	if (is_object(node_type_load('resource_ims'))) {
		$entity_query = new EntityFieldQuery();
		$entity_query->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'resource_ims');
		$exist = $entity_query->execute();
		$count_resource_ims = count($exist['node']);
	}

	$entity_query = new EntityFieldQuery();
	$entity_query->entityCondition('entity_type', 'node')
		->entityCondition('bundle', 'resource');
	$exist = $entity_query->execute();
	$count_resource = count($exist['node']);

	$count_old_node = 0;
	$count_new_node = 0;
	$count_duplicate = 0;

	foreach ($results as $record) {
		// We don't import "Digital file" type or "restricted to committee" files.
		// if ($record->resource_type == "Digital file" || !isset($record->resource_type)) continue;

		try {
			$ims_id = $record->fid;
			// Find if it's already a node in Drupal.
			$query = new EntityFieldQuery();
			$query->entityCondition('entity_type', 'node')
				->entityCondition('bundle', 'resource')
				->fieldCondition('gr_kp_id', 'value', $ims_id, '=');
			$exist = $query->execute();

			// Initialise the node object for creation or update.
			// If there is no resource with the same IMS ID, create a new one.
			// Or load the existing one so it'll be updated.
			if (empty($exist)) {
				$node = new stdClass();
				$node->type = 'resource';
				node_object_prepare($node);
				$count_new_node++;
			}
			elseif (isset($exist['node']) && count($exist['node']) == 1) {
				$node = node_load(key($exist['node']));
				if (!empty($node)) $count_old_node++;
			}
			elseif (count($exist['node']) > 1) {
				$i = 0;
				$ids = '';
				foreach ($exist['node'] as $obj) {
					$ids .= $obj->nid;
					if ($i < count($exist['node'])) {
						$ids .= ', ';
					}
					$i++;
				}
				return t('There are possibly duplicates of the same resources in the system. Check nodes with nid: !ids.', array('ids' => $ids));
			}
			unset($query);

			// Use entity_metadata_wrapper() for handling field updating.
			$node_wrapper = entity_metadata_wrapper('node', $node);

			$node_wrapper->title = htmlspecialchars_decode($record->title_text);
			$node_wrapper->language = LANGUAGE_NONE;

			// Alternative title.
			$node_wrapper->gr_alternative_title->set($record->alternative_title);

			// IMS ID.
			$node_wrapper->gr_kp_id->set($ims_id);

			// Description(body).
			$node_wrapper->body = array(
				'value' => (!empty($record->description)) ? htmlspecialchars_decode($record->description) : NULL,
				'summary' => NULL,
				'format' => 'full_html',
			);

			// Author.
			$node_wrapper->gr_author = gbif_ims_format_value($record->author, 'filtered_html');

			// Publisher.
			$node_wrapper->gr_publisher = gbif_ims_format_value($record->publisher, 'filtered_html');

			// Audience.
			$node_wrapper->gr_audience = gbif_ims_format_value($record->audience, 'filtered_html');

			// Abstract.
			$node_wrapper->gr_abstract = gbif_ims_format_value($record->abstract, 'filtered_html');

			// Bibliographic citation.
			$node_wrapper->gr_citation = gbif_ims_format_value($record->bibliographic_citation, 'filtered_html');

			// Contributor.
			$node_wrapper->gr_contributor = gbif_ims_format_value($record->contributor, 'filtered_html');

			// Rights.
			$node_wrapper->gr_rights = gbif_ims_format_value($record->rights, 'filtered_html');

			// Rights holder.
			$node_wrapper->gr_rights_holder = gbif_ims_format_value($record->rights_holder, 'filtered_html');

			// Date of publication. We use FileMaker timestamp of creation here instead of the value curated in the field called "date of publication".
			if (!empty($record->zz__created_timestamp__lxm)) {
				$date_of_publication = DateTime::createFromFormat('Y-m-d G:i:s', $record->zz__created_timestamp__lxm);
				$date_of_publication = ($date_of_publication !== FALSE) ? $date_of_publication->getTimestamp() : NULL;
				$node_wrapper->gr_date_of_publication->set($date_of_publication);
			}

			/* Changed date and user. Unfortunately EntityWrapper doesn't support writing to $node->changed.
			if (!empty($record->zz__modified_timestamp__lxm)) {
				$date_changed = DateTime::createFromFormat('Y-m-d G:i:s', $record->zz__modified_timestamp__lxm);
				$date_changed = ($date_changed !== FALSE) ? $date_changed->getTimestamp() : NULL;
				$node_wrapper->changed->set($date_changed);
				// Look up user if account with the same name exists in Drupal.
				$user = user_load_by_name($record->zz__modified_account__lxt);
			}
			*/

			// Number of downloads.
			$node_wrapper->gr_number_of_downloads->set(gbif_ims_format_value($record->num_downloads));

			// URL.
			$node_wrapper->gr_url->set(gbif_ims_format_value($record->url));

			// Resource type. A term reference field.
			$mapping = array(
				'Digital document' => 'Document',
				'Internet URL' => 'Link',
				'Tool' => 'Tool',
				'Presentation' => 'Presentation',
				'Data resource' => 'Data resource'
			);
			$query = new EntityFieldQuery();
			$entities = $query->entityCondition('entity_type', 'taxonomy_term')
				->entityCondition('bundle', 'resource_type')
				->propertyCondition('name', $mapping[$record->resource_type])
				->execute();
			if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
				$tid = key($entities['taxonomy_term']);
				$node_wrapper->gr_resource_type->set($tid);
			}
			else {
				$node_wrapper->gr_resource_type->set(NULL);
			}
			unset($query, $tid, $entities);

			// Resource language. A term reference field.
			$value = gbif_ims_format_value(strtolower($record->iso_639_1));
			if ($value == 'zh') {
				switch ($record->language) {
					case 'Chinese, Simplified':
						$value = 'zh-hans';
						break;
					case 'Chinese, Traditional':
						$value = 'zh-hant';
						break;
				}
			}
			$query = new EntityFieldQuery();
			$entities = $query->entityCondition('entity_type', 'taxonomy_term')
				->entityCondition('bundle', 'language')
				->fieldCondition('field_term_iso_639_1', 'value', $value, '=')
				->execute();
			if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
				$tid = key($entities['taxonomy_term']);
				$node_wrapper->gr_language->set($tid);
			}
			else {
				$node_wrapper->gr_language->set(NULL);
			}
			unset($query, $value, $tid, $entities);

			// Get all keywords about this file.
			$keywords = _gr_get_all_keywords($ims_id);

			$voc_iterations = array(
				// Purpose. A term reference field. Loaded from Keywords.
				// The following 5 terms will be matched and tagged:
				// Data digitization(21), Data curation/quality(127), Data publishing(6), Data access/display(128), Data analysis(26).
				'purpose' => array(
					'field' => 'gr_purpose',
					'terms' => array(21, 127, 13, 6, 128, 26),
				),
				// Data type. A term reference field. Loaded from Keywords.
				'data_type' => array(
					'field' => 'gr_data_type',
					'terms' => array(191, 24, 22, 19, 194, 193, 192, 258),
				)
			);
			$non_tags = array();
			foreach ($voc_iterations as $i) {
				$non_tags = array_merge($non_tags, $i['terms']);
			}
			/**
			 * The keywords are processed in the following order:
			 * 1) Keywords with "xxxxx" in their code1 field is ignored.
			 * 2) Iterate though defined vocabularies and assign terms according to the 'terms'.
			 * 3) Keywords that have a matched term in Tags go to "Tags".
			 * 4) The rest goes to "Internal Tags".
			 */
			foreach ($keywords as $keyword) {
				if (trim($keyword->code1) != 'xxxxx') { // "xxxxx" in the IMS means we don't process it.
					// Purpose and data type.
					if (in_array($keyword->keywordID, $non_tags)) {
						foreach ($voc_iterations as $voc => $iteration) {
							if (in_array($keyword->keywordID, $iteration['terms'])) {
								$query = new EntityFieldQuery();
								$entities = $query->entityCondition('entity_type', 'taxonomy_term')
									->entityCondition('bundle', $voc)
									->fieldCondition('field_ims_keyword_id', 'value', $keyword->keywordID, '=')
									->execute();
								$lang_code = gbif_tweaks_get_language_code('node', $iteration['field'], $node->language);
								if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
									$tid = key($entities['taxonomy_term']);
									$tid_exist = FALSE;
									$node_array = (array) $node;
									$field_name = $iteration['field'];
									$field_values = $node_array[$field_name][$lang_code];
									if (isset($field_values)) {
										foreach ($field_values as $v) {
											if ($v['tid'] == $tid) $tid_exist = TRUE;
										}
									}
									if ($tid_exist == FALSE) {
										$node_wrapper->$iteration['field']->set(array($tid));
									}
								}
								unset($query, $entities, $tid, $lang_code, $tid_exist, $node_array, $field_name, $field_values);
							}
						}
					}
					// Tags and Internal Tags. Term reference fields. Loaded from Keywords.
					else {
						try {
							$query = new EntityFieldQuery();
							$entities = $query->entityCondition('entity_type', 'taxonomy_term')
								->entityCondition('bundle', 'tags')
								->fieldCondition('field_ims_keyword_id', 'value', $keyword->keywordID, '=')
								->execute();
							// If the keyword exists in the "tx_tags" vocabulary, assign it to tx_tags.
							if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
								$tid = key($entities['taxonomy_term']);
								$node_array = (array) $node;
								$lang_code = gbif_tweaks_get_language_code('node', 'tx_tags', $node->language);
								$field_values = $node_array['tx_tags'][$lang_code];
								$tid_exist = FALSE;
								if (isset($field_values)) {
									// Test if it's already assigned.
									foreach ($field_values as $v) {
										if ($v['tid'] == $tid) $tid_exist = TRUE;
									}
								}
								if ($tid_exist == FALSE) {
									$node_wrapper->tx_tags[] = $tid;
								}
							}
							// If not, evaluate against the tx_internal_tags vocabulary.
							elseif (empty($entities['taxonomy_term']) && !empty($keyword->keyword_short)) {
								$q_tx_internal_tags = new EntityFieldQuery();
								$e_tx_internal_tags = $q_tx_internal_tags->entityCondition('entity_type', 'taxonomy_term')
									->entityCondition('bundle', 'internal_tags')
									->fieldCondition('field_ims_keyword_id', 'value', $keyword->keywordID, '=')
									->execute();
								// If the keyword exists in the "tx_internal_tags" vocabulary, assign it to tx_internal_tags.
								if (!empty($e_tx_internal_tags['taxonomy_term']) && count($e_tx_internal_tags['taxonomy_term']) == 1) {
									$tid = key($e_tx_internal_tags['taxonomy_term']);
									$node_array = (array) $node;
									$lang_code = gbif_tweaks_get_language_code('node', 'tx_internal_tags', $node->language);
									$field_values = $node_array['tx_internal_tags'][$lang_code];
									$tid_exist = FALSE;
									if (isset($field_values)) {
										// Test if it's already assigned.
										foreach ($field_values as $v) {
											if ($v['tid'] == $tid) $tid_exist = TRUE;
										}
									}
									if ($tid_exist == FALSE) {
										$node_wrapper->tx_internal_tags[] = $tid;
									}
								}
								// If not, create a new term in tx_internal_tags and assign to the node.
								else {
									$target_voc = taxonomy_vocabulary_machine_name_load('internal_tags');
									$term = new stdClass();
									$term->name = htmlspecialchars_decode($keyword->keyword_short);
									$term->vid = $target_voc->vid;

									$description = $keyword->keyword;
									$description .= (!empty($keyword->explanation)) ? ' ' . $keyword->explanation : '';
									$term->description = htmlspecialchars_decode($description);
									$term->format = 'plain_text';
									$lang_code = gbif_tweaks_get_language_code('taxonomy_term', 'field_ims_keyword_id', $node->language);
									if (!empty($keyword->keywordID)) $term->field_ims_keyword_id[$lang_code][]['value'] = $keyword->keywordID;

									// Determine term attribute.
									$term_attributes = array(
										'CTT01' => '935db795-c191-4146-91e8-14189b5935ea', // Tool type
										'CTT02' => 'd5df68f6-8f16-41e2-9efc-c58fbe68d5cc', // Development status
										'CTT04' => '127bffe9-9153-420f-8d97-8f6cbedf0d3b', // Operating system
										'CTT05' => '456100c5-b75e-4dad-b681-74046c7a0c8f', // BI standard
										'AUD01' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD02' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD03' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD04' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD05' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD06' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD07' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD08' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD09' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
										'AUD10' => 'ee7dd1a0-8e1e-4965-be96-97047f14cf2e', // Group
									);
									if (isset($term_attributes[$keyword->code1])) {
										$query = new EntityFieldQuery();
										$entities = $query->entityCondition('entity_type', 'taxonomy_term')
											->entityCondition('bundle', 'term_attribute')
											->propertyCondition('uuid', $term_attributes[$keyword->code1])
											->execute();
										if (!empty($entities['taxonomy_term']) && count($entities['taxonomy_term']) == 1) {
											$tid = key($entities['taxonomy_term']);
											$lang_code = gbif_tweaks_get_language_code('taxonomy_term', 'field_term_attributes', $node->language);
											$term->field_term_attributes[$lang_code][]['tid'] = $tid;
										}
										unset($query, $entities, $tid);
									}
									taxonomy_term_save($term);

									// Assign to node.
									if ($term->tid) {
										$node_wrapper->tx_internal_tags[] = $term->tid;
									}
								}
							}
						} catch (Exception $e) {
							watchdog('gbif_resource', $e->getMessage(), array(), WATCHDOG_ERROR);
							continue;
						}
						unset($query, $entities, $tid, $lang_code, $tid_exist, $node_array, $field_values, $v);
					}
				}
			}

			// Old resource nid. If there are duplicates, use all of them.
			// The old resource nid(s) are used for URL redirection.
			// @link http://drupal.stackexchange.com/questions/50358/save-a-new-value-with-entity-metadata-wrapper-to-an-entity-field-which-is-an-arr
			if (is_object(node_type_load('resource_ims'))) {
				$query = new EntityFieldQuery();
				$query->entityCondition('entity_type', 'node')
					->entityCondition('bundle', 'resource_ims')
					->fieldCondition('field_orc_original_ims_id', 'value', $ims_id, '=');
				$exist = $query->execute();
				if (isset($exist['node'])) {
					foreach ($exist['node'] as $old_nid => $obj) {
						// Check if $old_nid is already assigned to the current node.
						$lang_code = gbif_tweaks_get_language_code('node', 'gr_old_resource_nid', $node->language);
						if (!empty($node->gr_old_resource_nid)) {
							$old_nid_exist = FALSE;
							foreach ($node->gr_old_resource_nid[$lang_code] as $v) {
								if ($v['value'] == $old_nid) $old_nid_exist = TRUE;
							}
						}
						// Assign only if the same old nid doesn't exist or non has been assigned yet.
						if (empty($node->gr_old_resource_nid) || $old_nid_exist == FALSE) {
							$node_wrapper->gr_old_resource_nid[] = $old_nid;
							$count_duplicate += count($exist['node']) - 1;
						}
					}
				}
				unset($query, $exist, $lang_code, $v, $old_nid_exist);
			}

			// For all data resources, we set the status to unpublished until they are
			// reviewed.
			if ($record->resource_type == 'Data resource') {
				$node_wrapper->status->set(0);
			}
			// Determine "publish status" to "Published" if OnTheWeb == "Yes".
			elseif ($record->on_the_web == 'Yes' || $record->on_the_web == '1') {
				$node_wrapper->status->set(1);
			}
			unset($on_the_web);

			// Short listed. We map this field to Drupal "sticky at the top."
			if ($record->short_listed == 1) {
				$node_wrapper->sticky->set(1);
			}

			// Featured. We map this field to Drupal "promote to the front."
			if ($record->featured == 1) {
				$node_wrapper->promote->set(1);
			}

			$node_wrapper->save();

			// We update file fields after node_save() as we need nid as part of the filename.
			// Prepare a directory within gbif_resource to host files that are associated to a resource.
			$uri = 'public://gbif_resource';
			$dir_exists = file_prepare_directory($uri);

			if ($dir_exists == TRUE) {
				$resource_file_uri = $uri . '/' . 'resource-' . $node->nid;
				// Make sure the directory for node files is in place.
				$node_dir_exist = file_prepare_directory($resource_file_uri);
				if ($node_dir_exist == FALSE) drupal_mkdir($resource_file_uri, NULL, TRUE);

				// Image. This actually attaches the image to the resource node.
				$id_length = strlen($ims_id);
				if ($id_length == 3) {
					$image_url = 'http://fms.gbif.org:8020/SuperContainer/RawData/THMB/' . substr($ims_id, 0, 1) . '/' . $ims_id . '?width=150&username=zordesign&password=GBIF2010';
				}
				elseif ($id_length == 4) {
					$image_url = 'http://fms.gbif.org:8020/SuperContainer/RawData/THMB/' . substr($ims_id, 0, 2) . '/' . $ims_id . '?width=150&username=zordesign&password=GBIF2010';
				}
				$image_stream = file_get_contents($image_url);
				if ($image_stream != FALSE) {
					$size = getimagesize($image_url);
					if (!empty($size) && $size[0] != 1 && $size[1] != 1) {
						$image_file_uri = $resource_file_uri . '/' . 'resource-image-' . $node->nid . image_type_to_extension($size[2]);
						$file = file_save_data($image_stream, $image_file_uri, FILE_EXISTS_REPLACE);
						if (is_object($file)) {
							watchdog('gbif_resource', '!file uploaded successfully.', array('!file' => $file->uri), WATCHDOG_NOTICE);
							file_usage_add($file, 'gbif_resource', 'node', $file->uid);
							$file = (array)$file;
							$file['alt'] = $node->title;
							$file['title'] = t('Click to see in full size');
							$node_wrapper->gr_image->set($file);
						}
						elseif ($file == FALSE) {
							watchdog('gbif_resource', 'Failed saving !file.', array('!file' => $file->uri), WATCHDOG_ERROR);
						}
					}
				}
				unset($image_url, $image, $image_stream, $image_file_uri, $size, $file);

				// File. Only retrieve file if it's of type "document" and "presentation".
				if (in_array($mapping[$record->resource_type], array('Document', 'Presentation'))) {
					$file_url = 'http://fms.gbif.org:8020/SuperContainer/RawData/DOCS/' . substr($record->hexID, 0, 1) . '/' . $record->hexID . '?username=zordesign&password=GBIF2010';
					$file_stream = file_get_contents($file_url);
					if ($file_stream != FALSE) {
						$file_uri = $resource_file_uri . '/' . $record->filename;
						$file = file_save_data($file_stream, $file_uri, FILE_EXISTS_REPLACE);
						if (is_object($file)) {
							watchdog('gbif_resource', '!file uploaded successfully.', array('!file' => $file->uri), WATCHDOG_NOTICE);
							file_usage_add($file, 'gbif_resource', 'node', $file->uid);
							$file = (array)$file;
							$file['description'] = $record->title_text;
							$file['display'] = 1;
							$node_wrapper->gr_file->set(array($file)); // Wrapping the $file in an array is inconsistent with image file for image field. To learn why.
						}
						elseif ($file == FALSE) {
							watchdog('gbif_resource', 'Failed saving !file.', array('!file' => $file->uri), WATCHDOG_ERROR);
						}
					}
				}
				unset($file_url, $file, $file_uri);

				$node_wrapper->save();
			}
			else {
				drupal_set_message(t('!uri is not available for saving files. Please check whether this module is installed correctly from Web UI.', array('!uri' => $uri)), 'error');
				watchdog('gbif_resource', '!uri is not available for saving files. Please check whether this module is installed correctly from Web UI.', array('!uri' => $uri), WATCHDOG_ERROR);
			}
			unset($ims_id, $node_wrapper, $node);

		} catch (Exception $e) {
			watchdog('gbif_resource', $e->getMessage(), array(), WATCHDOG_ERROR);
			continue;
		}
	}
	return TRUE;
}

function _gr_get_all_keywords($ims_id) {
	$query = db_select('gbif_ims_file_keyword', 'fk');
	$query->leftjoin('gbif_ims_keyword', 'k', 'fk._kf_keywordID = k.keywordID');
	$query->addField('k', 'keywordID');
	$query->addField('k', '_kf_drupal_tid');
	$query->addField('k', 'code1');
	$query->addField('k', 'code2');
	$query->addField('k', 'keyword');
	$query->addField('k', 'keyword_short');
	$query->addField('k', 'explanation');
	$query->condition('fk._kf_fileID', $ims_id);
	$results = $query->execute()->fetchAll();
	return $results;
}