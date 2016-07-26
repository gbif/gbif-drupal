<?php
/**
 * @file
 * gbif_restful_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gbif_restful_search_ctools_plugin_api($module = NULL, $api = NULL) {
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
    "description" : null,
    "server" : "mysql",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "data_use",
          "dataset",
          "event",
          "gbif_participant",
          "generictemplate",
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
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "field_acronym" : { "type" : "string" },
        "field_cchunk" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_featured_search_terms:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "21.0" },
        "field_funding_statement" : { "type" : "text" },
        "field_ge_gbif_attendee" : { "type" : "text" },
        "field_subtitle" : { "type" : "text" },
        "field_title_for_display" : { "type" : "string" },
        "field_tx_data_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tx_purpose" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "ge_date_text" : { "type" : "text" },
        "ge_language" : { "type" : "text" },
        "ge_location" : { "type" : "text" },
        "ge_organising_participants" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "ge_status" : { "type" : "text" },
        "ge_venue" : { "type" : "text" },
        "ge_venue_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "gr_alternative_title" : { "type" : "text" },
        "gr_data_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
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
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "type" : true,
              "title" : true,
              "language" : true,
              "status" : true,
              "field_cchunk" : true,
              "ge_date_text" : true,
              "ge_language" : true,
              "ge_location" : true,
              "ge_status" : true,
              "ge_venue" : true,
              "ge_venue_country" : true,
              "field_ge_gbif_attendee" : true,
              "gr_alternative_title" : true,
              "gr_data_type" : true,
              "gr_language" : true,
              "gr_short_title" : true,
              "tx_about_gbif" : true,
              "tx_audience" : true,
              "tx_capacity_enhancement" : true,
              "tx_data_use" : true,
              "tx_informatics" : true,
              "tx_tags" : true,
              "tx_topic" : true,
              "field_acronym" : true,
              "field_title_for_display" : true,
              "field_funding_statement" : true,
              "field_subtitle" : true,
              "field_country" : true,
              "field_tx_purpose" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
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
              "field_acronym" : true,
              "field_title_for_display" : true,
              "field_funding_statement" : true,
              "field_subtitle" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
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
              "field_acronym" : true,
              "field_title_for_display" : true,
              "field_funding_statement" : true,
              "field_subtitle" : true
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
              "field_acronym" : true,
              "field_title_for_display" : true,
              "field_funding_statement" : true,
              "field_subtitle" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
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
              "field_acronym" : true,
              "field_title_for_display" : true,
              "field_funding_statement" : true,
              "field_subtitle" : true
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
