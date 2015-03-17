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
            $(this).find('td.totalgeo div').each(function() {
              _refresh(baseAddress, $(this), true);
            });
          });

          function incrementCount(target, value) {
            var currentCount = Number($(target).val()) + Number(value);
            $(target).html(currentCount);
            //console.log(currentCount);
          }

          function _refresh(baseAddress, target, nest) {
            var $target = $(target);

            // always add the datasetKey to the cube address
            var query = "?" + baseAddress;

            if ($target.closest("tr").attr("data-kingdom") != null) {
              query += "&taxonKey=" + $target.closest("tr").attr("data-kingdom");
            }

            if ($target.hasClass("geo")) {
              query += "&isGeoreferenced=true";
            }

            var ws = baseUrl + 'occurrence/count';

            if ($target.closest("td").attr("data-bor") === "OBSERVATION") {
              var observationTypes = ["OBSERVATION", "HUMAN_OBSERVATION", "MACHINE_OBSERVATION"];
              for (var i in observationTypes) {
                // Proxy query variable to avoid concatenating more basisOfRecord.
                var queryMod = query + "&basisOfRecord=" + observationTypes[i];
                $.getJSON(ws + queryMod + '&callback=?', function (data) {
                  incrementCount($target, data);
                });
              }
            }
            else {
              if ($target.closest("td").attr("data-bor") != null) {
                query += "&basisOfRecord=" + $target.closest("td").attr("data-bor");
              }
              $.getJSON(ws + query + '&callback=?', function (data) {
                $(target).html(data);
                if (nest && data != 0) {
                  // load the rest of the row
                  $target.closest('tr').find('div').each(function () {
                    _refresh(baseAddress, $(this), false);
                  });
                }
                else if (nest) {
                  // set the rest of the row to 0
                  $target.closest('tr').find('div').each(function () {
                    $(this).html("0");
                  });
                }
              });
            }

            function incrementCount(target, value) {
              // It could be that the innerHTML value hasn't been set yet. If so, we assume zero.
              if (target.html() === "-") target.html(0);
              target.html(Number(target.html()) + Number(value));
            }
          }
      };
    }
  };

  Drupal.behaviors.loadMetrics = {
    attach: function (context, settings) {
      $(function(){
        // populate the ajax occurrence table
        $('table.metrics').occMetrics(api_base_url + "/");
      });
    }
  }

}(jQuery));