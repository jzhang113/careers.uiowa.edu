(function ($) {
   $(document).ready(function() {
    $(".nolink").addClass("menu-toggle is-collapsed").attr("tabindex",0);
    $(".menu-toggle").parent().next("ul").addClass("hide").hide();
    if ($(".block-region-sidebar-first .menu-name-menu-audience-menu li").hasClass("active-trail")) {
      $(".block-region-sidebar-first .menu-name-menu-audience-menu .active-trail").parent("ul").removeClass("hide").addClass("show").show();
      $(".active-trail .menu-toggle").removeClass("is-collapsed").addClass("is-expanded");
    }
    else {
      $(".menu-toggle").parent().next("ul").addClass("hide").hide();
    }


    // menu-toggle onClick event
    $(".menu-toggle").bind("click", function() {
      if ($(this).parent().next("ul").hasClass("hide")) {
        $(this).parent().next("ul").removeClass("hide").addClass("show").show();
        $(this).removeClass("is-collapsed").addClass("is-expanded");
      }
      else {
        $(this).parent().next("ul").removeClass("show").addClass("hide").hide();
        $(this).removeClass("is-expanded").addClass("is-collapsed");
      }
    });


   });
}(jQuery));
