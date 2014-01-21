(function ($) {
   $(document).ready(function() {
    $(".nolink").addClass("menu-toggle is-collapsed").attr("tabindex",0);
    $(".menu-toggle").parent().next("ul").addClass("hide").hide();

    //We are assuming all list items are collapsed unless the list items are part of the menu's active trail
    //Resolves the issue of expanding all children items in sidebar menu blocks
    $("ul.menu li.expanded").removeClass("expanded").addClass("collapsed");
    $("ul.menu li.active-trail").removeClass("collapsed").addClass("expanded");

    if ($(".block-region-sidebar-first .menu-name-menu-audience-menu li").hasClass("active-trail")) {
      $(".block-region-sidebar-first .menu-name-menu-audience-menu .active-trail").parent("ul").removeClass("hide").addClass("show").show();
      $("ul.show").siblings(".menu-inner").children(".menu-toggle").removeClass("is-collapsed").addClass("is-expanded");
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
