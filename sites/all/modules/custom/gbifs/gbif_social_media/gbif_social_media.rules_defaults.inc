<?php
/**
 * @file
 * gbif_social_media.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gbif_social_media_default_rules_configuration() {
  $items = array();
  $items['rules_post_to_facebook'] = entity_import('rules_config', '{ "rules_post_to_facebook" : {
      "LABEL" : "Post to Facebook",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "social media" ],
      "REQUIRES" : [ "rules", "workbench_moderation", "fb_autopost_entity" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "data_use" : "data_use", "dataset" : "dataset", "news" : "news" } }
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "data_use" : "data_use", "dataset" : "dataset", "news" : "news" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_facebook_message" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_post_to_facebook" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-facebook-message" ] } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
        { "data_is" : { "data" : [ "node:field-post-to-facebook" ], "value" : "1" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "post",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-name" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-message" ],
            "value" : [ "node:field-facebook-message:value" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-link" ],
            "value" : [ "node:url" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-picture" ],
            "value" : [ "node:field-uni-images:0:file:url" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-description" ],
            "value" : [ "node:body:summary" ]
          }
        },
        { "publish_to_facebook" : {
            "USING" : { "publication" : [ "entity-created" ], "pages" : "1184082548272684" },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id" : "Facebook publication returned ID" } }
          }
        }
      ]
    }
  }');
  return $items;
}
