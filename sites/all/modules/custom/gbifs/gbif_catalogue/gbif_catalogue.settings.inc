<?php

/**
 * Search matched term in _gbif_catalogue_definition().
 */
function _gbif_catalogue_search_definition($ims_kp_id) {
  $definitions = _gbif_catalogue_definition();
  foreach ($definitions as $df) {
    if ($df['field'] == 'term_rs_purpose' || $df['field'] == 'term_rs_target_audience') { // Temparily limit the scope in purpose and target audience.
      foreach ($df['terms'] as $term) {
        if ($term['ims_kp_id'] == $ims_kp_id) {
          $matched_terms = taxonomy_get_term_by_name($term['name'], $df['machine_name']);
          // Ideally there should only be one match
          if (count($matched_terms) == 1) {
            foreach ($matched_terms as $matched_term) {
              $matched_term->field = $df['field'];
              return $matched_term;
            }
          }
          else {
            return 'more matches';
          }
        }
      }
    }
    else {
      return 'not term_rs_purpose';
    }
  }
}

/**
 * Helper function for defining vocabularies and their terms.
 */
function _gbif_catalogue_definition() {
  // The definition set
  $definitions = array(
    array(
      'name' => 'Purpose',
      'machine_name' => 'orc_purpose',
      'field' => 'term_rs_purpose',
      'description' => '[ORC] The purpose of the tool',
      'terms' => array(
        array('ims_kp_id' => 21, 'name' => 'Data digitization'),
        array('ims_kp_id' => 127, 'name' => 'Data curation/quality'),
        array('ims_kp_id' => 6, 'name' => 'Data publishing'),
        array('ims_kp_id' => 128, 'name' => 'Data access/display'),
        array('ims_kp_id' => 26, 'name' => 'Data analysis'),
      ),
      'weight' => 0,
    ),
    array(
      'name' => 'Target audience',
      'machine_name' => 'orc_target_audience',
      'field' => 'term_rs_target_audience',
      'description' => '[ORC] Targeted type of audience. For example, taxonomists or modellers.',
      'terms' => array(
        array('ims_kp_id' => 161, 'name' => 'Data publishers'),
        array('ims_kp_id' => 197, 'name' => 'Data users'),
        array('ims_kp_id' => 87, 'name' => 'Nat. Hist. Col.'),
        array('ims_kp_id' => 89, 'name' => 'Naturalists'),
        array('ims_kp_id' => 163, 'name' => 'GBIF Nodes'),
        array('ims_kp_id' => 98, 'name' => 'IT specialists'),
        array('ims_kp_id' => 157, 'name' => 'Scientists'),
        array('ims_kp_id' => 88, 'name' => 'Field biologiest'),
        array('ims_kp_id' => 99, 'name' => 'Taxonomists'),
        array('ims_kp_id' => 93, 'name' => 'Modellers'),
        array('ims_kp_id' => 239, 'name' => 'Nat. resource managers'),
        array('ims_kp_id' => 205, 'name' => 'Practitioners'),
        array('ims_kp_id' => 242, 'name' => 'Software developers'),
        array('ims_kp_id' => 210, 'name' => 'Wider audiences'),
        array('ims_kp_id' => 95, 'name' => 'Policy and funding groups'),
        array('ims_kp_id' => 203, 'name' => 'Government officials'),
        array('ims_kp_id' => 204, 'name' => 'Research councils'),
        array('ims_kp_id' => 241, 'name' => 'Local and sub-national governments'),
        array('ims_kp_id' => 206, 'name' => 'GBIF Governance'),
        array('ims_kp_id' => 187, 'name' => 'GBIF delegations'),
        array('ims_kp_id' => 243, 'name' => 'Standing committee members'),
        array('ims_kp_id' => 207, 'name' => 'GBIF Partners'),
        array('ims_kp_id' => 208, 'name' => 'Biodiversity informatics community'),
        array('ims_kp_id' => 209, 'name' => 'Biodiversity knowledge community'),
        array('ims_kp_id' => 215, 'name' => 'Private sector'),
        array('ims_kp_id' => 211, 'name' => 'Press/media'),
        array('ims_kp_id' => 212, 'name' => 'Education sector'),
      ),
      'weight' => 1,
    ),
    array(
      'name' => 'Language',
      'machine_name' => 'orc_language',
      'description' => '[ORC] The language(s) for accessing this resource.',
      'terms' => array(
        array('name' => 'Chinese'),
        array('name' => 'English'),
        array('name' => 'French'),
        array('name' => 'Spanish'),
      ),
      'weight' => 2,
    ),
    array(
      'name' => 'Data type',
      'machine_name' => 'orc_data_type',
      'description' => '[ORC] Applicable data types.',
      'terms' => array(
        array('ims_kp_id' => 191, 'name' => 'Occurrence data'),
        array('ims_kp_id' => 24, 'name' => 'Names and taxonomy'),
        array('ims_kp_id' => 22, 'name' => 'Metadata'),
        array('ims_kp_id' => 19, 'name' => 'Species information'),
        array('ims_kp_id' => 194, 'name' => 'Multimedia data'),
        array('ims_kp_id' => 193, 'name' => 'Ecological data'),
        array('ims_kp_id' => 192, 'name' => 'Genetic data'),
        array('ims_kp_id' => 258, 'name' => 'Abundance data'),
      ),
      'weight' => 3,
    ),
    array(
      'name' => 'Tool type',
      'machine_name' => 'orc_tool_type',
      'description' => '[ORC] In which form the tool is used. For example, desktop or web based.',
      'terms' => array(
        array('ims_kp_id' => 56, 'name' => 'Desktop tool'),
        array('ims_kp_id' => 55, 'name' => 'Online tool'),
        array('ims_kp_id' => 62, 'name' => 'Server application'),
        array('ims_kp_id' => 57, 'name' => 'Web service'),
        array('ims_kp_id' => 58, 'name' => 'Widget'),
        array('ims_kp_id' => 61, 'name' => 'Tool set'),
        array('ims_kp_id' => 116, 'name' => 'Mobile application'),
        array('ims_kp_id' => 59, 'name' => 'Framework'),
      ),
      'weight' => 4,
    ),
    array(
      'name' => 'Development status',
      'machine_name' => 'orc_development_status',
      'description' => '[ORC] In which phase the development is.',
      'terms' => array(
        array('ims_kp_id' => 48, 'name' => 'Production ready'),
        array('ims_kp_id' => 49, 'name' => 'Beta'),
        array('ims_kp_id' => 50, 'name' => 'Alpha / prototype'),
        array('ims_kp_id' => 51, 'name' => 'Demo'),
        array('ims_kp_id' => 53, 'name' => 'In development'),
        array('ims_kp_id' => 54, 'name' => 'Discontinued'),
      ),
      'weight' => 5,
    ),
    array(
      'name' => 'Operating system',
      'machine_name' => 'orc_operating_system',
      'description' => '[ORC] On which platform the tool runs.',
      'terms' => array(
        array('ims_kp_id' => 103, 'name' => 'OS independent'),
        array('ims_kp_id' => 100, 'name' => 'MS Windows'),
        array('ims_kp_id' => 102, 'name' => 'Mac OS'),
        array('ims_kp_id' => 101, 'name' => 'Linux'),
        array('ims_kp_id' => 158, 'name' => 'iOS'),
        array('ims_kp_id' => 118, 'name' => 'Android'),
        array('ims_kp_id' => 117, 'name' => 'MS Windows ME'),
      ),
      'weight' => 6,
    ),
    array(
      'name' => 'BI standard',
      'machine_name' => 'orc_bi_standard',
      'description' => '[ORC] Compliance of standard(s).',
      'terms' => array(
        array('ims_kp_id' => 104, 'name' => 'Darwin Core'),
        array('ims_kp_id' => 159, 'name' => 'Darwin Core Archive'),
        array('ims_kp_id' => 160, 'name' => 'GBIF Metadata Profile'),
        array('ims_kp_id' => 105, 'name' => 'ABCD'),
        array('ims_kp_id' => 106, 'name' => 'OGC'),
        array('ims_kp_id' => 107, 'name' => 'Dublin Core'),
        array('ims_kp_id' => 115, 'name' => 'Plinian Core'),
        array('ims_kp_id' => 108, 'name' => 'Audubon Core'),
        array('ims_kp_id' => 109, 'name' => 'DELTA'),
        array('ims_kp_id' => 110, 'name' => 'SDD'),
        array('ims_kp_id' => 111, 'name' => 'RDF'),
        array('ims_kp_id' => 112, 'name' => 'SHP'),
        array('ims_kp_id' => 113, 'name' => 'KML'),
        array('ims_kp_id' => 114, 'name' => 'GML'),
        array('ims_kp_id' => 264, 'name' => 'ISO 19115'),
        array('ims_kp_id' => 265, 'name' => 'Extensive Markup Language'),
      ),
      'weight' => 7,
    ),
    array(
      'name' => 'Resource type',
      'machine_name' => 'orc_resource_type',
      'description' => '[ORC] Resource type.',
      'terms' => array(
        array('name' => 'Data resource'),
        array('name' => 'Digital document'),
        array('name' => 'Digital file'),
        array('name' => 'Internet URL'),
        array('name' => 'Presentation'),
        array('name' => 'Tool'),
      ),
      'weight' => 8,
    ),
  );
  
  return $definitions;  
}
