<?php

function gbif_bibliography_settings_form() {
  $form['gbif_bibliography_sync'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update documents from Mendeley'),
    '#description' => '<p>' . t('Manually trigger the update of the publication information via Mendeley API and refresh the list of publications that are relevant to the Node.') . '</p>',
  );
  $form['gbif_bibliography_sync']['sync_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Sync now'),
    '#submit' => array('gbif_bibliography_sync'),
  );
  return system_settings_form($form);
}