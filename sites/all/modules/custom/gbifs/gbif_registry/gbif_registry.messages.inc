<?php
/**
 * @file functions that construct email messages.
 */

function _gbif_registry_notify_endorsing_node_manager($message, $params, $options) {

  $message['subject'] = t('@test_envEndorsement request from @organisation-title', array(
    '@test_env' => ($params['test_environment'] == TRUE) ? '[TEST] ' : '',
    '@organisation-title' => $params['org']['title']
  ), $options);

  // Note that the message body is an array, not a string.
  if ($params['test_environment'] == TRUE) {
    $message['body'][] = t("====================================\nThis is test message. Please ignore.\nWe are sorry for interrupting.\n====================================", array(), $options);
  }
  $message['body'][] = t('Dear Node Manager,', array(), $options);
  $message['body'][] = t("The organization '@organization-title' has submitted an expression of interest in registering as a new publisher in the GBIF network and has requested endorsement by the @node-name.", array('@organization-title' => $params['org']['title'], '@node-name' => $params['endorsement']['endorsingParticipant']['title']), $options);
  $message['body'][] = t('We ask you to review this request — the full text of which is included below — and consider this request for endorsement. If you approve it, the publisher "@organization-title" will be listed in the GBIF registry under your Participant node here: !node-url.', array('@organization-title' => $params['org']['title'], '!node-url' => $params['node_url']), $options);
  $message['body'][] = t("Do note that none of @organization-title's datasets will be indexed through GBIF.org until you act on the request.", array('@organization-title' => $params['org']['title']), $options);
  $message['body'][] = t('You may wish to consult these guidance notes on endorsement on GBIF.org (!publisher-guide). If you have any questions, please reply to us at helpdesk@gbif.org.', array('!publisher-guide' => 'http://www.gbif.org/publishing-data'), $options); //@todo link to be updated.
  $message['body'][] = t('Please answer YES, NO, or reply to request further details.', array(), $options);
  $message['body'][] = t('Thank you very much,', array(), $options);
  $message['body'][] = t('GBIF Helpdesk', array(), $options);

  _gbif_registry_detail_of_submission($message, $params, $options);
  _gbif_registry_add_attachments($message, $params, $options);

  return $message;
}

function _gbif_registry_notify_eoi_contact($message, $params, $options) {
  $message['subject'] = t('@test_envExpression of Interest from @org-title received', array(
    '@test_env' => ($params['test_environment'] == TRUE) ? '[TEST] ' : '',
    '@org-title' => $params['org']['title']
  ), $options);

  // Note that the message body is an array, not a string.
  if ($params['test_environment'] == TRUE) {
    $message['body'][] = t("====================================\nThis is test message. Please ignore.\nWe are sorry for interrupting.\n====================================", array(), $options);
  }
  $message['body'][] = t('Dear @title @firstName @lastName,', array('@title' => $params['contact']['title'], '@firstName' => $params['contact']['firstName'], '@lastName' => $params['contact']['lastName']), $options);
  $message['body'][] = t('This email acknowledges receipt of your Expression of interest in publishing biodiversity data on GBIF.org on behalf of @org-title.', array('@org-title' => $params['org']['title']), $options);
  if ($params['endorsement']['beEndorsedByType'] == 'nc') {
    $message['body'][] = t('Based on the endorsement option you selected, we have forwarded your request to the GBIF Participant Node Managers Committee.');
  }
  else {
    $message['body'][] = t('Based on the endorsement option you selected, we have forwarded your request to @node-name.', array('@node-name' => $params['endorsement']['endorsingParticipant']['title']), $options);
  }
  $message['body'][] = t('We will keep you updated on the progress of your request. If you have additional questions, please contact us via helpdesk@gbif.org.');
  $message['body'][] = t('Thanks for your interest,');
  $message['body'][] = t('GBIF Helpdesk');

  return $message;
}

function _gbif_registry_notify_helpdesk($message, $params, $options) {
  $message['subject'] = t('@test_envNew expression of interest', array(
    '@test_env' => ($params['test_environment'] == TRUE) ? '[TEST] ' : '',
  ), $options);

  // message body
  if ($params['test_environment'] == TRUE) {
    $message['body'][] = t("====================================\nThis is test message. Please ignore.\nWe are sorry for interrupting.\n====================================", array(), $options);
  }
  $message['body'][] = t('Hi Helpdesk manager,', array(), $options);
  $message['body'][] = t('We have just received an Expression of interest from a potential new data publisher, @organization-title.', array('@organization-title' => $params['org']['title']), $options);

  // determine message according to the type of requested endorsing node and notifications sent
  if ($params['endorsement']['beEndorsedByType'] == 'nc') {
    $message['body'][] = t('The organization is requesting to be endorsed by the GBIF Participant Node Managers Committee.');
    if ($params['notify_eoi_contact_result'] == TRUE) {
      $message['body'][] = t('Notification emails have been sent to contact of the requesting organization.', array(), $options);
    }
    $message['body'][] = t('Please you need to contact the chair of the Nodes Committee to seek the endorsement for the requesting organization. After that, you may want to take relevant action !link.', array('!link' => $params['mgt_url']), $options);
  }
  elseif (!empty($params['endorsement']['endorsingParticipant'])) {
    if ($params['notify_endorsing_node_manager_result'] == TRUE && $params['notify_eoi_contact_result'] == TRUE) {
      $message['body'][] = t('Notification emails have been sent to the requested endorsing Node, @node-name, and the contact of the requesting organization, @organization-title.', array('@organization-title' => $params['org']['title'], '@node-name' => $params['endorsement']['endorsingParticipant']['title']), $options);
    }
    else {
      $message['body'][] = t('Notification emails to the requested endorsing Node, @node-name and the contact of the requesting organization seem to be failed. Please check with @admin and follow-up.', array('@node-name' => $params['endorsement']['endorsingParticipant']['title'], '@admin' => EMAIL_ADMIN), $options);
    }
    $message['body'][] = t('Please follow up and see if the Node manager grant the endorsement. After that, you can create or reject the request !link. The system will send a weekly reminder if there is any pending request.', array('!link' => $params['mgt_url']), $options);
  }
  $message['body'][] = t('Cheers,');
  $message['body'][] = t('Portal Drupal');

  _gbif_registry_detail_of_submission($message, $params, $options);
  _gbif_registry_add_attachments($message, $params, $options);

  return $message;
}

function _gbif_registry_detail_of_submission(&$message, $params, $options) {
  // detail of form submission
  $message['body'][] = t("\n===== Beginning of submitted information =====", array(), $options);

	// main contact
  $message['body'][] = t("------------\nMain contact\n------------", array(), $options);
  $message['body'][] = t("Name: @name\nEmail: @email\nPhone: @phone", array(
    '@name' => $params['contact']['title'] . ' ' . $params['contact']['firstName'] . ' ' . $params['contact']['lastName'],
    '@email' => $params['contact']['email'],
    '@phone' => (!empty($params['contact']['phone'])) ? $params['contact']['phone'] : t('no phone number provided.')
  ), $options);

	// organization
  $message['body'][] = t("------------\nOrganization\n------------", array(), $options);
  $message['body'][] = t("Name: @name\nURL: @url\nAddress: @address\nCity: @city\nProvince: @province\nPostal code: @zip\nCountry: @country\nDescription: @desc\nIs an international organization? @isIntlOrg\nExample file provided? @exampleFile", array(
    '@name' => $params['org']['title'],
    '@url' => (!empty($params['org']['url'])) ? $params['org']['url'] : t('no URL provided.'),
    '@address' => $params['org']['address'],
    '@city' => $params['org']['city'],
    '@province' => (!empty($params['org']['province'])) ? $params['org']['province'] : t('no province information provided.'),
    '@zip' => (!empty($params['org']['zip'])) ? $params['org']['zip'] : t('no postal code provided.'),
    '@country' => $params['org']['country']['title'],
    '@desc' => $params['org']['desc'],
    '@isIntlOrg' => $params['org']['isIntlOrg'],
    '@exampleFile' => ($params['org']['exampleFile'] == true) ? 'yes' : 'no'
  ), $options);
	// additional contacts
	// admin contact
	if ($params['org']['isAdminContact'] == 'no' && !empty($params['org']['adminContact'])) {
		$message['body'][] = t("-------------\nAdmin contact\n-------------\nName: @name\nEmail: @email\nPhone: @phone", array(
			'@name' => $params['org']['adminContact']['title'] . ' ' . $params['org']['adminContact']['firstName'] . ' ' . $params['org']['adminContact']['lastName'],
			'@email' => $params['org']['adminContact']['email'],
			'@phone' => (!empty($params['org']['adminContact']['phone'])) ? $params['org']['adminContact']['phone'] : t('no phone number provided.')
		), $options);
	}
	elseif ($params['org']['isAdminContact'] == 'yes') {
    $message['body'][] = t("-------------\nAdmin contact\n-------------\nThe submitter indicate him/herself as the administrative contact.", array(), $options);
	}
  else {
    $message['body'][] = t("-------------\nAdmin contact\n-------------\nThe submitter didn't provide any administrative contact.", array(), $options);
  }

	// technical contact
	if ($params['org']['isTechContact'] == 'no' && !empty($params['org']['techContact'])) {
		$message['body'][] = t("-----------------\nTechnical contact\n-----------------\nName: @name\nEmail: @email\nPhone: @phone", array(
			'@name' => $params['org']['techContact']['title'] . ' ' . $params['org']['techContact']['firstName'] . ' ' . $params['org']['techContact']['lastName'],
			'@email' => $params['org']['techContact']['email'],
			'@phone' => (!empty($params['org']['techContact']['phone'])) ? $params['org']['techContact']['phone'] : t('no phone number provided.')
		), $options);
	}
	elseif ($params['org']['isTechContact'] == 'yes') {
		$message['body'][] = t("-----------------\nTechnical contact\n-----------------\nThe submitter indicate him/herself as the technical contact.", array(), $options);
	}
  else {
    $message['body'][] = t("-----------------\nTechnical contact\n-----------------\nThe submitter didn't provide any technical contact.", array(), $options);
  }

	// data hosting
  $message['body'][] = t("------------\nData hosting\n------------", array(), $options);
  $message['body'][] = t("Do you have EITHER the capacity to run a live server, OR access to a server, through which you will make your original dataset available to GBIF.org?\nAnswer: @serverCapable", array(
    '@serverCapable' => $params['dataHosting']['serverCapable']
  ), $options);
  $message['body'][] = t("Are you planning to install and run a publishing software to publish your data directly to GBIF.org?\nAnswer: @toolPlanned", array(
    '@toolPlanned' => $params['dataHosting']['toolPlanned']
  ), $options);
  $message['body'][] = t("Do you need help in publishing your data?\nAnswer: @helpNeeded", array(
    '@helpNeeded' => $params['dataHosting']['helpNeeded']
  ), $options);

	// terms and conditions
  if (isset($params['terms'])) {
    $message['body'][] = t("--------------------\nTerms and conditions\n--------------------", array(), $options);
    if ($params['terms']['duaRead'] == true && $params['terms']['onBehalf'] == true && $params['terms']['madePublic'] == true) {
      $message['body'][] = t("The contact agrees with the following:\n - I have read and understood GBIF's Data Sharing Agreement and agree to its terms.\n - I understand that I am seeking registration on behalf of my organization, and confirm that the responsible authorities of my organization are aware of this registration.\n - I understand that my organizational information, including the contact details provided, will be made publicly available through GBIF.org.", array(), $options);
    }
  }
  $message['body'][] = t('===== End of submitted information =====', array(), $options);
}

function _gbif_registry_weekly_reminder(&$message, $params, $options) {
	$message['subject'] = t('Weekly reminder for the pending endorsement request', array(), $options);

	// Note that the message body is an array, not a string.
	$message['body'][] = t('Hi Helpdesk master,', array(), $options);
	$message['body'][] = t('There is a pending request asking for endorsement from @org-title.', array('@org-title' => $params['org']['title']), $options);
	$message['body'][] = t('Please follow up and take relevant action at !link.', array('!link' => $params['mgt_url']), $options);
	$message['body'][] = t('Cheers,');
	$message['body'][] = t('Portal Drupal');

	_gbif_registry_detail_of_submission($message, $params, $options);

	return $message;
}

function _gbif_registry_alert(&$message, $params, $options) {
	$message['subject'] = t('Failed notification detected', array(), $options);

	// Note that the message body is an array, not a string.
	$message['body'][] = t('Hi Drupal admin,', array(), $options);
	$message['body'][] = t('A failed attempt to send a notification for an endorsement case of @org-title has been recorded. Please log on to follow.', array('@org-title' => $params['org']['title']), $options);
	$message['body'][] = t('Cheers,');
	$message['body'][] = t('Portal Drupal');
	return $message;
}

function _gbif_registry_add_attachments(&$message, $params, $options) {
  // if attachments are available
  if (isset($params['attachment'])) {
    $message['params']['attachments'][] = $params['attachment'];
  }
}