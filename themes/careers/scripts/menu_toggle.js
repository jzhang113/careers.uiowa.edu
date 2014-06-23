(function ($) {
    $(document).ready(function() {
      // variables
      var expandMenus = $('#block-menu-block-3, #block-menu-block-6');
      var menuTree = expandMenus.find('.menu-block-wrapper').children('ul.menu:first');
      var menuToggles = expandMenus.find('span.nolink');
      var menuToggleMenus = menuToggles.closest('li').children('ul.menu');
      var menuListItems = expandMenus.find('li');
      
      // toggle attribute function
      $.fn.toggleAttr = function(attr, attr1, attr2) {
        return this.each(function() {
          var self = $(this);
          if (self.attr(attr) == attr1)
            self.attr(attr, attr2);
          else
            self.attr(attr, attr1);
        });
      };
      
      // set default states
      menuTree.attr('role','tree');
      menuListItems.attr('role','presentation');
      expandMenus.find('li.expanded').attr('aria-expanded','false');
      menuToggles.addClass('menu-toggle is-collapsed').attr('tabindex', 0).attr('role','treeitem');
      menuToggleMenus.addClass('is-expandable is-hidden').attr('role','group').attr('aria-hidden','true').hide();
      
      // Add group ids and aria-owns info
      menuToggleMenus.each(function(i) {
        $(this).attr('id', 'group'+(i+1));
        $(this).parent('li').attr('aria-owns','group'+(i+1));
      });
      
      // check for li active trail and change classes and attributes
      menuListItems.each(function() {
        if($(this).hasClass('active-trail')) {
          $(this).attr('aria-expanded', 'true');
          $(this).parent('ul').toggleClass('is-hidden is-visible').attr('aria-hidden','false').show();
          $(this).parent('ul.is-expandable').siblings('.menu-inner').find('.menu-toggle').removeClass('is-collapsed').addClass('is-expanded');
        }
      });

      $("span.menu-toggle").click(function(){
        
        // get the parent UL of the clicked toggle
        var closestUL = $(this).closest('ul');
        
        // close ULs and set attributes/classes for all those involved.
        closestUL.find('ul.is-expandable').slideUp().addClass('is-hidden').removeClass('is-visible').attr('aria-hidden','true');
        closestUL.find('li.expanded').attr('aria-expanded','false');
        closestUL.find('span.menu-toggle').addClass('is-collapsed').removeClass('is-expanded');
        
        // get the "child" UL of this toggle.
        var thisMenuToggleMenu = $(this).closest('li').children('ul');
        
        // if UL is closed.
        if(thisMenuToggleMenu.is(":hidden")) {
          // open UL and set attributes/classes for all those involved.
          $(this).closest('li').attr('aria-expanded','true');
          $(this).removeClass('is-collapsed').addClass('is-expanded');
          thisMenuToggleMenu.slideDown().attr('aria-hidden', 'false').addClass('is-visible').removeClass('is-hidden');
        }
        
      })
      
     });
}(jQuery));
