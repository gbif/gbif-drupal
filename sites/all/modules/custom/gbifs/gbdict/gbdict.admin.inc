<?php
/**
* @file
* Administration page callbacks for the gbdict module.
*/

/**
* Form builder. Configure annotations.
*
* @ingroup forms
* @see system_settings_form().
*/

function gbdict_admin_settings() {
	
	$options = array( 'vocabularies'=>'Init vocabularies', 'terms'=>'Load all terms', 'delete'=>'Delete <b>ALL</b> existing GBIF vocabularies and terms loaded by this module' ) ;

	$form['gbdict_node_types'] = array(
		'#type' => 'checkboxes',
		'#title' => t('Init taxonomy with the GBIF specific vocabularies'),
		'#options' => $options,
		'#default_value' => variable_get('gbdict_node_types', array('page')),
		'#description' => t('Choose whether to load only empty vocabularies or add all the keywords too'),
		);

	$form['#submit'][] = 'gbdict_admin_settings_submit';

	return system_settings_form($form);

}

/**
* Process gbdict settings submission.
*/
function gbdict_admin_settings_submit( $form, $form_state) {

module_load_include('inc', 'gbdict', 'gbdict.data') ;

if ( $form_state['values']['gbdict_node_types']['vocabularies'] === 'vocabularies' ) {
	$vocabularies = get_gbif_drp_taxonomy( 'vocabularies' );

	foreach ( $vocabularies as $machine_name => $long_name ) {
		$exist_vocab = taxonomy_vocabulary_machine_name_load( $machine_name ) ;

		if ( !$exist_vocab ) {
			taxonomy_vocabulary_save( (object) array ( 'name' => $long_name, 'machine_name' => $machine_name ) ) ;
		}
	}

} 

if ( $form_state['values']['gbdict_node_types']['terms'] === 'terms' ) {

	$termslist = get_gbif_drp_taxonomy ( 'terms' ) ;


	foreach ( $termslist as $vocabulary => $terms ) {

		$exist_vocab = taxonomy_vocabulary_machine_name_load( $vocabulary ) ;

		if ( $exist_vocab ) {

			foreach ( $terms as $term_machine_name=>$term_long_name ) {

				$exist_term = taxonomy_get_term_by_name( $term_machine_name ) ;

				if ( empty( $exist_term ) ) {
					$term_data = new stdClass();
					$term_data->name = $term_machine_name;
					$term_data->description = $term_long_name ;
					$term_data->vid = $exist_vocab->vid;
					taxonomy_term_save($term_data);
				}
			}
		}
	}

}

if ( $form_state['values']['gbdict_node_types']['delete'] === 'delete' ) {

	$termslist = get_gbif_drp_taxonomy ( 'terms' ) ;

	foreach ( $termslist as $vocabulary => $terms ) {

		foreach ( $terms as $term_machine_name=>$term_long_name ) {

			$exist_term = taxonomy_get_term_by_name( $term_machine_name ) ;
			$exist_term_keys = array_keys( $exist_term ) ;
			
			if ( $exist_term ) {
				taxonomy_term_delete ( $exist_term[$exist_term_keys[0]]->tid );
				variable_set ('debug1', $exist_term ) ;
			}
		}
		
		$exist_vocab = taxonomy_vocabulary_machine_name_load( $vocabulary ) ;
		
		if ( $exist_vocab ) 
			taxonomy_vocabulary_delete( $exist_vocab->vid ) ;

	}

}

} // function end


