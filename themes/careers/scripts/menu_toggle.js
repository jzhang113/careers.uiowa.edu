(function ($) {
    $(document).ready(function() {
      // variables
      var expandMenus = $('#block-menu-block-3, #block-menu-block-6');
      var menuToggles = expandMenus.find('span.nolink');
      var menuToggleMenus = menuToggles.closest('li').children('ul.menu');
      var menuListItems = expandMenus.find('li');
      var menuTabs = [];  // For 'aria-owns' attribute

      // set default states
      expandMenus.attr('role','tablist');
      menuToggles.addClass('menu-toggle is-collapsed').attr('tabindex', 0).attr('role','tab');
      menuToggleMenus.addClass('is-expandable is-hidden').attr('role','tabpanel').attr('aria-expanded',false).hide();

      // assign accessible relationship between toggler and toggler content
      menuToggles.each(function(i) {
        $(this).attr('id', 'tab'+(i+1));
        $(this).closest('li').children('ul.menu').attr('aria-labelledby', 'tab'+(i+1));
        menuTabs[menuTabs.length] = $(this).attr('id');
      });

      // assign ids to aria-owns attribute
      expandMenus.attr('aria-owns', menuTabs.join(" "));

      // check for li attributes
      menuListItems.each(function() {
        if($(this).hasClass('active-trail')) {
          $(this).parent('ul').toggleClass('is-hidden is-visible').attr('aria-expanded',true).show();
          $(this).parent('ul.is-expandable').siblings('.menu-inner').find('.menu-toggle').removeClass('is-collapsed').addClass('is-expanded');
        }
      });

      // menuToggles event handler
      $('span.menu-toggle').bind('click', function() {
        $(this).toggleClass('is-collapsed is-expanded').closest('li').find('ul.is-expandable').toggle().toggleClass('is-hidden is-visible');

        // change accessbility attribute based state.
        if ($(this).hasClass('is-expanded')) {
          $(this).closest('li').find('ul.is-expandable').attr('aria-expanded',true);
        } else {
          $(this).closest('li').find('ul.is-expandable').attr('aria-expanded',false);
        };
      });
    });
}(jQuery));
