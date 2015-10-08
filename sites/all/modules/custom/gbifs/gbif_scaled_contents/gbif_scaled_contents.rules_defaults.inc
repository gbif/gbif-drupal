<?php
/**
 * @file
 * gbif_scaled_contents.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
/*
function gbif_scaled_contents_default_rules_configuration() {
  $items = array();
  $items['rules_add_content_to_facebook'] = entity_import('rules_config', '{ "rules_add_content_to_facebook" : {
      "LABEL" : "Add content to Facebook",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Social media integration" ],
      "REQUIRES" : [ "rules", "fb_autopost_entity" ],
      "ON" : {
        "node_insert--news" : { "bundle" : "news" },
        "node_update--news" : { "bundle" : "news" }
      },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "news" : "news" } } } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "link",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-message" ],
            "value" : [ "node:field-content-gbits:value" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-link" ],
            "value" : [ "node:url" ]
          }
        },
        { "publish_to_facebook" : {
            "USING" : { "publication" : [ "entity-created" ], "pages" : "1681125632118687" },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id" : "Facebook publication returned ID" } }
          }
        }
      ]
    }
  }');
  $items['rules_add_content_to_twitter'] = entity_import('rules_config', '{ "rules_add_content_to_twitter" : {
      "LABEL" : "Add content to twitter",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Social media integration" ],
      "REQUIRES" : [ "rules", "twitter_actions" ],
      "ON" : { "node_update--news" : { "bundle" : "news" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "news" : "news" } } } }
      ],
      "DO" : [
        { "rules_core_twitter_actions_set_status_action" : { "message" : [ "node:field-content-tweet" ], "sender" : "cphbkotest" } }
      ]
    }
  }');
  return $items;
}
*/
