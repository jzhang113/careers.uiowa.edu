// Applies ARIA Attributes to Collapsible (.collapsible) Areas

(function ($) {
  $(document).ready(function() {
  	var $collapsible = $('.collapsible');

  	// set default attributes
  	$collapsible.each(function() {
  		$(this).find('a:first').attr('role','tab');

      var $collapsibleID = $(this).attr('id'); 
      var $wrapperDiv = $(this).find('div:first');

  		$wrapperDiv.attr('role','tabpanel').attr('aria-labelledby', $collapsibleID);

    	if ($(this).hasClass('collapsed')) {
    		$wrapperDiv.attr('aria-expanded',false);
    	} else {
    		$wrapperDiv.attr('aria-expanded',true);
    	};
  	});

  	// "toggle" aria-expanded attribute on click
  	$collapsible.find('a:first').bind( "click", function() {
      // reusing wrapperDiv after setting default attributes
  		var $wrapperDiv = $(this).closest('.collapsible').find('div:first');
  		$wrapperDiv.attr('aria-expanded', $wrapperDiv.attr('aria-expanded')=='false' ? 'true' : 'false');
		});

	});
}(jQuery));