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

          function incrementCount(target, value) {
            var currentCount = Number($(target).val()) + Number(value);
            $(target).html(currentCount);
            console.log(currentCount);
          }

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

            // This is where the call is made and the result get written into HTML.
            // We need to deal with the call for OBSERVATION count separately as per POR-2702.
            // Hence a conditional clause and duplicated statements.
            if ($target.closest("td").attr("data-bor") !== null && $target.closest("td").attr("data-bor") === "OBSERVATION") {
              var params = $.parseParams(ws);
              var observationTypes = ["OBSERVATION", "HUMAN_OBSERVATION", "MACHINE_OBSERVATION"];
              for (var i in observationTypes) {
                params.basisOfRecord = observationTypes[i];
                var query = $.constructQuery(params);
                $.getJSON(baseUrl + "occurrence/count" + query + '&callback=?', function (data) {
                  incrementCount(target, data);
                });
              }
            }
            else {
              $.getJSON(ws + '&callback=?', function (data) {
                $(target).html(data);
                if (nest && data != 0) {
                  // load the rest of the row
                  $target.closest('tr').find('div').each(function() {
                    _refresh(baseAddress, $(this), false);
                  });
                }
                else if (nest) {
                  // set the rest of the row to 0
                  $target.closest('tr').find('div').each(function() {
                    $(this).html("0");
                  });
                }
              });
            }
          }
        };
      }
    }

    Drupal.behaviors.loadMetrics = {
      attach: function (context, settings) {
        $(function(){
          // populate the ajax occurrence table
          $('table.metrics').occMetrics(api_base_url + "/");
        });
      }
    }

    // Utility functions for parsing URL.
    // @see http://jsfiddle.net/v92Pv/22/
    // @see https://gist.github.com/kares/956897
    Drupal.behaviors.parseParams = {
      attach: function (context, settings) {
        // Add an URL parser to JQuery that returns an object
        // This function is meant to be used with an URL like the window.location
        // Use: $.parseParams('http://mysite.com/?var=string') or $.parseParams() to parse the window.location
        // Simple variable:  ?var=abc                        returns {var: "abc"}
        // Simple object:    ?var.length=2&var.scope=123     returns {var: {length: "2", scope: "123"}}
        // Simple array:     ?var[]=0&var[]=9                returns {var: ["0", "9"]}
        // Array with index: ?var[0]=0&var[1]=9              returns {var: ["0", "9"]}
        // Nested objects:   ?my.var.is.here=5               returns {my: {var: {is: {here: "5"}}}}
        // All together:     ?var=a&my.var[]=b&my.cookie=no  returns {var: "a", my: {var: ["b"], cookie: "no"}}
        // You just cant have an object in an array, e.g. ?var[1].test=abc DOES NOT WORK
        var re = /([^&=]+)=?([^&]*)/g;
        var decode = function (str) {
          return decodeURIComponent(str.replace(/\+/g, ' '));
        };
        $.parseParams = function (query) {

          // recursive function to construct the result object
          function createElement(params, key, value) {
            key = key + '';

            // if the key is a property
            if (key.indexOf('.') !== -1) {
              // extract the first part with the name of the object
              var list = key.split('.');

              // the rest of the key
              var new_key = key.split(/\.(.+)?/)[1];

              // create the object if it doesnt exist
              if (!params[list[0]]) params[list[0]] = {};

              // if the key is not empty, create it in the object
              if (new_key !== '') {
                createElement(params[list[0]], new_key, value);
              } else console.warn('parseParams :: empty property in key "' + key + '"');
            } else
            // if the key is an array
            if (key.indexOf('[') !== -1) {
              // extract the array name
              var list = key.split('[');
              key = list[0];

              // extract the index of the array
              var list = list[1].split(']');
              var index = list[0]

              // if index is empty, just push the value at the end of the array
              if (index == '') {
                if (!params) params = {};
                if (!params[key] || !$.isArray(params[key])) params[key] = [];
                params[key].push(value);
              } else
              // add the value at the index (must be an integer)
              {
                if (!params) params = {};
                if (!params[key] || !$.isArray(params[key])) params[key] = [];
                params[key][parseInt(index)] = value;
              }
            } else
            // just normal key
            {
              if (!params) params = {};
              params[key] = value;
            }
          }

          // be sure the query is a string
          query = query + '';

          if (query === '') query = window.location + '';

          var params = {}, e;
          if (query) {
            // remove # from end of query
            if (query.indexOf('#') !== -1) {
              query = query.substr(0, query.indexOf('#'));
            }

            // remove ? at the begining of the query
            if (query.indexOf('?') !== -1) {
              query = query.substr(query.indexOf('?') + 1, query.length);
            } else return {};

            // empty parameters
            if (query == '') return {};

            // execute a createElement on every key and value
            while (e = re.exec(query)) {
              var key = decode(e[1]);
              var value = decode(e[2]);
              createElement(params, key, value);
            }
          }
          return params;
        };
      }
    }

    Drupal.behaviors.constructQuery = {
      attach: function (context, settings) {
        $.constructQuery = function (object) {

          // recursive function to construct the result string
          function createString(element, nest) {
            if (element === null) return '';
            if ($.isArray(element)) {
              var count = 0,
                url = '';
              for (var t = 0; t < element.length; t++) {
                if (count > 0) url += '&';
                url += nest + '[]=' + element[t];
                count++;
              }
              return url;
            } else if (typeof element === 'object') {
              var count = 0,
                url = '';
              for (var name in element) {
                if (element.hasOwnProperty(name)) {
                  if (count > 0) url += '&';
                  url += createString(element[name], nest + '.' + name);
                  count++;
                }
              }
              return url;
            } else {
              return nest + '=' + element;
            }
          }

          var url = '?',
            count = 0;

          // execute a createString on every property of object
          for (var name in object) {
            if (object.hasOwnProperty(name)) {
              if (count > 0) url += '&';
              url += createString(object[name], name);
              count++;
            }
          }

          return url;
        };
      }
    }

}(jQuery));