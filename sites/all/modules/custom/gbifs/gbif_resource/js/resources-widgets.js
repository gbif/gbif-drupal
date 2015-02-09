(function($) {
    Drupal.behaviors.featuredToggle = {
        attach: function (context, settings) {

            $.cookie("clear-all", null, { path: '/'});
            console.log($.cookie("searched"));
            console.log($.cookie("clear-all"));

            $("#clear-all").click(function () {
                $.cookie("clear-all", "cleared");
                console.log($.cookie("clear-all"));
            });
            $(".facetapi-facetapi-checkbox-links").click(function () {
                $.cookie("searched", "searched");
                console.log($.cookie("searched"));
            });

            function clearCookie() {
                $.cookie("clear-all", null, { path: '/'});
                $.cookie("searched", null, { path: '/'});
            }

            window.onunload = clearCookie();
        }
    }
}(jQuery));