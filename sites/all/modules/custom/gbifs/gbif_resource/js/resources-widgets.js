(function($) {
    Drupal.behaviors.featuredToggle = {
        attach: function (context, settings) {
            $("#featured-resources-toggle").click(function () {
                if ($("#featured-resources-rows").is(":visible")) {
                    $(this).html("Show");
                } else {
                    $(this).html("Hide");
                }
                $("#featured-resources-rows").toggle(100);
            });
        }
    }
}(jQuery));