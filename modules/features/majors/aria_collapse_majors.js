// Applies ARIA Attributes to Major Collapsible (.collapsible) Areas

(function ($) {
  $(document).ready(function() {
    var $collapsible = $('.collapsible');

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

    // default attributes for each .collapsible area
    $('div[role="tablist"]').each(function() { // added tablist attribute in drupal backend
      var menuTabs = [];  // For 'aria-owns' attribute
      
      $collapsible.each(function(i) {
        var $collapsibleID = $(this).attr('id'); 
        var $toggleLink = $(this).find('a:first');
        var $wrapperDiv = $(this).find('div:first');

        // assign tab1, tab2, etc. for toggle/wrapper relationship
        $toggleLink.attr('role','tab').attr('id', 'tab'+(i+1));
        $wrapperDiv.attr('role','tabpanel').attr('aria-labelledby', 'tab'+(i+1));
        menuTabs[menuTabs.length] = $toggleLink.attr('id');

        // if collapsible has .collapsed class, assign the appropriate aria-expanded value
        if ($(this).hasClass('collapsed')) {
          $toggleLink.attr('aria-expanded',false);
          $wrapperDiv.attr('aria-expanded',false);
        } else {
          $toggleLink.attr('aria-expanded',true);
          $wrapperDiv.attr('aria-expanded',true);
        };

      });

      // assign array of tab1, tab2, etc. to tablist
      $(this).attr('aria-owns', menuTabs.join(" "));

    });

    // "toggle" aria-expanded attribute on click
    $collapsible.find('a:first').bind( "click", function() {
      var $wrapperDiv = $(this).closest('.collapsible').find('div:first');
      $(this).toggleAttr('aria-expanded', 'true', 'false');
      $wrapperDiv.toggleAttr('aria-expanded', 'true', 'false');

    });
  });
}(jQuery));