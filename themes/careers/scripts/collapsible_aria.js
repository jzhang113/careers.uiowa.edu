// Applies ARIA Attributes to Collapsible (.collapsible) Areas

(function ($) {
  $(document).ready(function() {
  	var $collapsible = $('.collapsible');

  	// set default attributes
  	$collapsible.each(function() {
  		$(this).find('a:first').attr('role','tab');
  		$(this).find('div:first').attr('role','tabpanel');

    	if ($(this).hasClass('collapsed')) {
    		$(this).find('div:first').attr('aria-expanded',false);
    	} else {
    		$(this).find('div:first').attr('aria-expanded',true);
    	};
  	});

  	// "toggle" aria-expanded attribute on click
  	$collapsible.find('a:first').bind( "click", function() {
  		var $wrapperDiv = $(this).closest('.collapsible').find('div:first');
  		
  		$wrapperDiv.attr('aria-expanded', $wrapperDiv.attr('aria-expanded')=='false' ? 'true' : 'false');
		});

	});
}(jQuery));