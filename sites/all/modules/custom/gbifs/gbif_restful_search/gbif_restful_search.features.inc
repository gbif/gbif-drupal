<?php
/**
 * @file
 * gbif_restful_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_restful_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function gbif_restful_search_default_search_api_index() {
  $items = array();
  $items['node_index'] = entity_import('search_api_index', '{
    "name" : "Node index",
    "machine_name" : "node_index",
    "description" : "General content index for p16 project.",
    "server" : "mysql",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "data_use",
          "dataset",
          "event",
          "gbif_participant",
          "generic",
          "literature",
          "news",
          "programme",
          "project",
          "resource"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:format" : { "type" : "string" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_acronym" : { "type" : "text" },
        "field_co_funder" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_content_stream" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dataset_uuid" : { "type" : "list\\u003Ctext\\u003E" },
        "field_featured_search_terms" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_featured_search_terms:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "21.0" },
        "field_gbif_area" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ge_gbif_attendee" : { "type" : "text" },
        "field_links_block" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_mdl_abstract" : { "type" : "text" },
        "field_mdl_author_from_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mdl_authors" : { "type" : "text" },
        "field_mdl_bio_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mdl_citation_key" : { "type" : "text" },
        "field_mdl_code" : { "type" : "text" },
        "field_mdl_confirmed" : { "type" : "boolean" },
        "field_mdl_created" : { "type" : "date" },
        "field_mdl_editors" : { "type" : "text" },
        "field_mdl_gbif_ref_annt" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mdl_identifiers" : { "type" : "text" },
        "field_mdl_last_modified" : { "type" : "date" },
        "field_mdl_publisher" : { "type" : "text" },
        "field_mdl_type" : { "type" : "string" },
        "field_mdl_year" : { "type" : "integer" },
        "field_organizations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_pj_grant_type" : { "type" : "string" },
        "field_pj_participants" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_pj_partners" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_programme" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_programme_ef" : { "type" : "integer", "entity_type" : "node" },
        "field_project_id" : { "type" : "text" },
        "field_related_events" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_news" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_projects" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_researcher_location" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_status" : { "type" : "string" },
        "field_subtitle" : { "type" : "text" },
        "field_title_for_display" : { "type" : "text" },
        "field_tx_data_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tx_purpose" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_un_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "ge_date_text" : { "type" : "text" },
        "ge_language" : { "type" : "text", "boost" : "0.8" },
        "ge_location" : { "type" : "text" },
        "ge_organising_participants" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "ge_status" : { "type" : "text" },
        "ge_venue" : { "type" : "text" },
        "ge_venue_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "gp_has_mandate" : { "type" : "boolean" },
        "gp_node_established" : { "type" : "date" },
        "gr_alternative_title" : { "type" : "text" },
        "gr_data_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "gr_date_of_publication" : { "type" : "date" },
        "gr_language" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "gr_purpose" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "gr_resource_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "gr_short_title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "promote" : { "type" : "boolean" },
        "revision" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "tx_about_gbif" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_capacity_enhancement" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_data_use" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_informatics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_internal_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "tx_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "ge_date_text" : true,
              "ge_language" : true,
              "ge_location" : true,
              "ge_status" : true,
              "ge_venue" : true,
              "field_ge_gbif_attendee" : true,
              "gr_alternative_title" : true,
              "gr_short_title" : true,
              "field_title_for_display" : true,
              "field_acronym" : true,
              "field_subtitle" : true,
              "field_project_id" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_featured_search_terms:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "ge_date_text" : true,
              "ge_language" : true,
              "ge_location" : true,
              "ge_status" : true,
              "ge_venue" : true,
              "field_ge_gbif_attendee" : true,
              "gr_alternative_title" : true,
              "gr_short_title" : true,
              "field_title_for_display" : true,
              "field_acronym" : true,
              "field_subtitle" : true,
              "field_project_id" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_featured_search_terms:name" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "ge_date_text" : true,
              "ge_language" : true,
              "ge_location" : true,
              "ge_status" : true,
              "ge_venue" : true,
              "field_ge_gbif_attendee" : true,
              "gr_alternative_title" : true,
              "gr_short_title" : true,
              "field_title_for_display" : true,
              "field_acronym" : true,
              "field_subtitle" : true,
              "field_project_id" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_featured_search_terms:name" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "ge_date_text" : true,
              "ge_language" : true,
              "ge_location" : true,
              "ge_status" : true,
              "ge_venue" : true,
              "field_ge_gbif_attendee" : true,
              "gr_alternative_title" : true,
              "gr_short_title" : true,
              "field_title_for_display" : true,
              "field_acronym" : true,
              "field_subtitle" : true,
              "field_project_id" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_featured_search_terms:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "ge_date_text" : true,
              "ge_language" : true,
              "ge_location" : true,
              "ge_status" : true,
              "ge_venue" : true,
              "field_ge_gbif_attendee" : true,
              "gr_alternative_title" : true,
              "gr_short_title" : true,
              "field_title_for_display" : true,
              "field_acronym" : true,
              "field_subtitle" : true,
              "field_project_id" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_featured_search_terms:name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
