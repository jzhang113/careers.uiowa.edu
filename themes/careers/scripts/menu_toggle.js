(function ($) {
    $(document).ready(function() {
      // variables
      var expandMenus = $('#block-menu-block-3');
      var menuToggles = expandMenus.find('span.nolink');
      var menuToggleMenus = menuToggles.closest('li').children('ul.menu');
      var menuListItems = expandMenus.find('li');

      // set default states
      menuToggles.addClass('menu-toggle is-collapsed').attr('tabindex', 0);
      menuToggleMenus.addClass('is-expandable is-hidden').hide();

      // check for li attributes
      menuListItems.each(function() {
        if($(this).hasClass('expanded')) {
          $(this).removeClass('expanded').addClass('collapsed');
        }
        if($(this).hasClass('active-trail')) {
          $(this).removeClass('collapsed').addClass('expanded');
          $(this).parent('ul').toggleClass('is-hidden is-visible').show();
          $(this).parent('ul.is-expandable').siblings('.menu-inner').find('.menu-toggle').removeClass('is-collapsed').addClass('is-expanded');
        }
      });

      // menuToggles event handler
      $('span.menu-toggle').bind('click', function() {
        $(this).toggleClass('is-collapsed is-expanded').closest('li').find('ul.is-expandable').toggle().toggleClass('is-hidden is-visible');
      });
    });
}(jQuery));
