<?php
/**
 * Countries Enhancements config form
 */
function better_countries_config($form, &$form_state) {
  $form['better_countries'] = array(
    '#tree' => TRUE,
  );
  $form['better_countries']['continents'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom Continents'),
    '#description' => t('Define custom continents/regions to be used for your countries.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['better_countries']['continents']['table'] = array(
    '#prefix' => '<div id="continents">',
    '#suffix' => '</div>',
    '#theme' => 'table',
    '#tree' => TRUE,
    '#header' => array(t('Continent Name'), t('Code')),
    '#rows' => array(),
    '#attributes' => array('id' => 'continents-table'),
  );

  $i = 0;
  $configured = variable_get('countries_continents', array(''));

  $codes = array_keys($configured);
  $continents = array_values($configured);

  if (empty($form_state['count'])) {
    $form_state['count'] = count($configured) ? count($configured) : 1;
  }

  while ($i < $form_state['count']) {
    if (isset($continents[$i])) {
      $continent = array(
        '#id' => 'continent-'.  $i,
        '#default_value' => $continents[$i],
        '#type' => 'textfield',
        '#size' => 30,
      );
      $code = array(
        '#id' => 'continent-code-' . $i,
        '#default_value' => $codes[$i],
        '#type' => 'textfield',
        '#size' => 5,
      );
      $form['better_countries']['continents']['table'][$i] = array (
        'continent' => &$continent,
        'code' => &$code,
      );
      $form['better_countries']['continents']['table']['#rows'][$i] = array(
        array('data' => &$continent),
        array('data' => &$code),
      );

      unset($continent);
      unset($code);
    }

    $i++;
  }

  $form['better_countries']['continents']['add-row'] = array(
    '#type' => 'submit',
    '#value' => t('Add new row'),
    '#submit' => array('better_countries_add_continent'),
    '#ajax' => array(
      'callback' => 'better_countries_config_ajax',
      'wrapper' => 'continents',
      'effect' => 'fade',
      'method' => 'replace',
    ),
  );

  $form['better_countries']['continents']['country-continents'] = array(
    '#type' => 'managed_file',
    '#name' => 'files[country-continents]',
    '#size' => 30,
    '#upload_validators' => array(
      'file_validate_extensions' => array('csv'),
    ),
  );
  $form['better_countries']['continents']['country-continents-submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import country assignments'),
    '#prefix' => '<div>' . t('Import country assignment to custom continents/region defined above using a CSV file.  <a href="!file">Download a template</a>.
                              The codes configured above will be used; countries assigned codes not present above, will not display continents correctly.',
                              array('!file' => '/' . drupal_get_path('module', 'countries') . '/countries.csv')) . '</div>',
    '#submit' => array('better_countries_import_country_continents'),
  );
  $form['better_countries']['geonames'] = array(
    '#type' => 'fieldset',
    '#title' => t('GeoNames Configuration'),
    '#description' => t('The GeoNames username for web services access.  This is required for fetching pin locations.  This account must have "free web services access" enabled.  See !url.', array('!url' => l('http://www.geonames.org/manageaccount', 'http://www.geonames.org/manageaccount'))),
  );
  $form['better_countries']['geonames']['bc_geonames_username'] = array(
    '#type' => 'textfield',
    '#title' => t('GeoNames Username'),
    '#default_value' => variable_get('bc_geonames_username'),
    '#size' => 64,
    '#maxlength' => 255,
    '#required' => FALSE,
  );

  $form['better_countries']['geonames']['bc_capital_sync'] = array(
    '#type' => 'submit',
    '#value' => 'Get country pins',
    '#submit' => array('better_countries_get_pins'),
  );
  // Disable this button if the library is not installed and provide a message (and a means to do it for the user)?
  if ($library = libraries_load('geonames')) {
    if (!$library['loaded']) {
      $form['better_countries']['geonames']['bc_capital_sync']['#disabled'] = TRUE;
      $form['better_countries']['geonames']['bc_capital_sync']['#prefix'] = '<div><em>The GeoNames library could not be loaded. See better_countries/README.txt for information on how to install it.</em></div>';
    }
  }


  $form['better_countries']['import'] = array(
    '#type' => 'fieldset',
    '#title' => t('Data Imports'),
  );
  $form['better_countries']['import']['translations'] = array(
    '#type' => 'submit',
    '#value' => t('Import translations'),
    '#prefix' => '<div>' .
      t('Import country name translations for enabled languages using the CSV file %file. <strong>NOTE:</strong> Existing translations will be overwritten. ',
        array('%file' => drupal_get_path('module', 'countries_enhancments') . 'files/translated_country_names.csv')) . '</div>',
    '#submit' => array('better_countries_import_translations'),
  );

  // Disable this button if countries_i18n isn't enabled, and provide a message
  if (module_exists('countries_i18n') !== TRUE) {
    $form['better_countries']['import']['translations']['#prefix'] .= '<div>' . t('The Countries Translations module is not enabled; once enabled, translation import will be enabled here.') . '</div>';
    $form['better_countries']['import']['translations']['#disabled'] = TRUE;
  }

  $form['submit'] = array('#type' => 'submit', '#value' => t('Save changes'));

  return $form;
}

/**
 * Validation function for config form.
 */
function better_countries_config_validate($form, &$form_state) {
}

/**
 * Submit function for config form.
 */
function better_countries_config_submit($form, &$form_state) {
  foreach ($form_state['values']['better_countries'] as $fieldset => $fields) {
    foreach ($fields as $field => $value) {
      strpos($field, 'bc_') === 0 && variable_set($field, $value);
    }
  }

  $continents = array();
  foreach ($form_state['input']['better_countries']['continents']['table'] as $key => $info) {
    if ($info['continent'] && $info['code']) {
      $continents[$info['code']] = check_plain($info['continent']);
    }
  }

  if (count($continents)) {
    variable_set('countries_continents', $continents);
  }
  else {
    variable_del('countries_continents');
  }
}

/**
 * Add continent submit function.
 */
function better_countries_add_continent(&$form, &$form_state) {
  $form_state['count']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * AJAX callback for config form
 */
function better_countries_config_ajax(&$form, &$form_state) {
  $i = $form_state['count'];

  $continent = array(
    '#id' => 'continent-' . $i,
    '#default_value' => variable_get('bc_contintent_' . $i),
    '#type' => 'textfield',
    '#size' => 30,
  );
  $code = array(
    '#id' => 'continent-code-' . $i,
    '#default_value' => variable_get('bc_contintent_code_' . $i),
    '#type' => 'textfield',
    '#size' => 5,
  );
  $form['better_countries']['continents']['table'][$i] = array (
    'continent' => &$continent,
    'code' => &$code,
    //'#attributes' => array('class' => array('ajax-new-content')),
  );
  $form['better_countries']['continents']['table']['#rows'][$i] = array(
    array('data' => &$continent),
    array('data' => &$code),
  );

  return $form['better_countries']['continents']['table'];
}

