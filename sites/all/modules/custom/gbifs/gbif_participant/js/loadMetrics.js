/**
 * Created by bko on 11/9/14.
 */

/**
 * Provides the homepage map functionality only.
 * Requires JQuery, Moment, and leaflet.
 *
 * Because .noconflict() is called by drupal.js use the alternate
 * syntax while preserving $; see http://api.jquery.com/ready
 */
(function ($) {
  var env = Drupal.settings.environment_settings;
  var data_portal_base_url = env.data_portal_base_url;
  var api_base_url = env.gbif_api_base_url + "/v" + env.gbif_api_version;

    Drupal.behaviors.occMetrics = {
      attach: function (context, settings) {
        $.fn.occMetrics = function(baseUrl){
          this.each(function() {
            var baseAddress = $(this).attr("data-address");
            //console.debug(baseAddress);
            $(this).find('td.total div').each(function() {
              _refresh(baseAddress, $(this), true);
            });
          });

          function _refresh(baseAddress, target, nest) {
            var $target = $(target);

            // always add the datasetKey to the cube address
            var address = "?" + baseAddress;

            if ($target.closest("tr").attr("data-kingdom") != null) {
              address = address + "&taxonKey=" + $target.closest("tr").attr("data-kingdom");
            }

            if ($target.closest("td").attr("data-bor") != null) {
              address = address + "&basisOfRecord=" + $target.closest("td").attr("data-bor");
            }

            if ($target.hasClass("geo")) {
              address = address + "&isGeoreferenced=true";
            }
            var ws = baseUrl + 'occurrence/count' + address;
            //console.debug(ws);
            $.getJSON(ws + '&callback=?', function (data) {
              $(target).html(data);
              if (nest && data!=0) {
                // load the rest of the row
                $target.closest('tr').find('div').each(function() {
                  _refresh(baseAddress, $(this), false);
                });
              } else if (nest) {
                // set the rest of the row to 0
                $target.closest('tr').find('div').each(function() {
                  $(this).html("0");
                });
              }
            });
          }
        };
      }
    }

    Drupal.behaviors.loadMetrics = {
      attach: function (context, settings) {
        $(function(){
          // populate the ajax occurrence table
          $('table.metrics').occMetrics("http://api.gbif.org/v1/");
        });
      }
    }


}(jQuery));