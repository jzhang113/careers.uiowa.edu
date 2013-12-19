(function ($) {
   $(document).ready(function() {
    $(".nolink").addClass("menu-toggle").attr("tabindex",0);
    $(".menu-toggle").next("ul").addClass("hide").hide();
    if ($(".block-region-sidebar-first .menu-name-menu-audience-menu li").hasClass("active-trail")) {
      $(".block-region-sidebar-first .menu-name-menu-audience-menu .active-trail").parent("ul").removeClass("hide").addClass("show").show();
    }
    else {
      $(".menu-toggle").next("ul").addClass("hide").hide();
    }


    // menu-toggle onClick event
    $(".menu-toggle").bind("click", function() {
      if ($(this).next("ul").hasClass("hide")) {
        $(this).next("ul").removeClass("hide").addClass("show").show();
      }
      else {
        $(this).next("ul").removeClass("show").addClass("hide").hide();
      }
    });


   });
}(jQuery));
