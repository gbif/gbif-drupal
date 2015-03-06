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

    Drupal.behaviors.subscribeMapEvents = {
      attach: function (context, settings) {
        new GBIFMapListener().subscribe(function(id, searchUrl) {
          $("#geoOccurrenceSearchAbout").attr("href", data_portal_base_url + "/occurrence/search?" +  searchUrl);
          $("#geoOccurrenceSearchFrom").attr("href", data_portal_base_url + "/occurrence/search?" +  searchUrl);
        });
      }
    }

}(jQuery));