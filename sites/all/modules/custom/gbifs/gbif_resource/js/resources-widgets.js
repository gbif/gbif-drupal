(function($) {
    Drupal.behaviors.featuredToggle = {
        attach: function (context, settings) {
            if ($.cookie("featured-block-toggle") == "hidden") {
                $("#featured-resources-toggle").html("Show");
                $("#featured-resources-rows").hide();
            }
            else if ($.cookie("featured-block-toggle") == "shown") {
                $("#featured-resources-toggle").html("Hide");
                $("#featured-resources-rows").show();
            }

            $("#featured-resources-toggle").click(function () {
                if ($("#featured-resources-rows").is(":visible")) {
                    $(this).html("Show");
                    $.cookie("featured-block-toggle", "hidden");
                } else {
                    $(this).html("Hide");
                    $.cookie("featured-block-toggle", "shown");
                }
                console.log($.cookie("featured-block-toggle"));
                $("#featured-resources-rows").toggle(100);
            });
        }
    }
}(jQuery));