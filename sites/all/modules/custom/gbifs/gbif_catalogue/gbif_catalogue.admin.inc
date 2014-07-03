<?php

function gbif_catalogue_settings_form() {

  // Temporarily commented out because the vocabularies shouldn't be
  // Uninstalled when the contents are pulled in.
  /*
  $form['gbif_catalogue_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Setting management'),
    '#description' => '<p>' . t('Settings and triggers at the development phase.') . '</p>',
  );
  $form['gbif_catalogue_settings']['vocabulary_create'] = array(
    '#type' => 'submit',
    '#value' => t('Install vocabulary'),
    '#prefix' => '<div id="install-div">',
    '#suffix' => '<div id="install-status-wrapper"></div></div>',
    '#ajax' => array(
      'callback' => 'gbif_catalogue_vocabularies_create',
      'wrapper' => 'install-status-wrapper',
      'effect' => 'fade',
    ),
  );
  $form['gbif_catalogue_settings']['vocabulary_delete'] = array(
    '#type' => 'submit',
    '#value' => t('Delete vocabulary'),
    '#prefix' => '<div id="delete-div">',
    '#suffix' => '<div id="delete-status-wrapper"></div></div>',
    '#ajax' => array(
      'callback' => 'gbif_catalogue_vocabularies_delete',
      'wrapper' => 'delete-status-wrapper',
      'effect' => 'fade',
    ),
  );
  */

  $form['gbif_catalogue_contents'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content management'),
    '#description' => '<p>' . t('Content import and synchronisation at the development phase.') . '</p>',
  );
  $form['gbif_catalogue_contents']['import_tools'] = array(
    '#type' => 'submit',
    '#value' => t('Import tools'),
    '#prefix' => '<div id="import-tools">',
    '#suffix' => '<div id="import-tools-wrapper"></div></div>',
    '#ajax' => array(
      'callback' => 'gbif_catalogue_import_tools',
      'wrapper' => 'import-tools-wrapper',
      'effect' => 'fade',
    ),
  );
  $form['gbif_catalogue_contents']['peep'] = array(
    '#type' => 'submit',
    '#value' => t('Peep (for debugging purpose)'),
    '#prefix' => '<div id="peep">',
    '#suffix' => '<div id="peep-wrapper"></div></div>',
    '#ajax' => array(
      'callback' => 'gbif_catalogue_peep',
      'wrapper' => 'peep-wrapper',
      'effect' => 'fade',
    ),
  );
  return system_settings_form($form);
}

function gbif_catalogue_settings_form_submit() {
  
}