(function($) {
  Drupal.behaviors.bvngContact = {
    attach: function (context, settings) {
      // hide and make contact addresses toggable
      $(".contactName").next().hide();
      $(".contactName").click(function(e){
          $(this).next().slideToggle("fast");
      });
      // some contacts don't have a name, allow to also toggle by contact type
      $(".contactType").click(function(e){
          $(this).next().next().slideToggle("fast");
      });
      $(".showAllContacts").click(function(e){
          $(".contactName").next().slideToggle("fast");
      });
    }
  }
}(jQuery));
