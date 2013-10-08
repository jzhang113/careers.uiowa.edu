<?php
/**
 * @file
 * Template for Panopoly Bartlett Wide.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display bartlett-wide clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="bartlett-wide-contentmain bartlett-wide-column-content-region bartlett-wide-column bartlett-wide-container panel-panel">
    <div class="bartlett-wide-contentmain-inner bartlett-wide-column-content-region-inner bartlett-wide-column-inner bartlett-wide-container-inner panel-panel-inner">
      <?php print $content['contentmain']; ?>
    </div>
  </div>
  
  <div class="bartlett-wide-content-container bartlett-wide-container">
    <div class="bartlett-wide-column-content-region bartlett-wide-contentfeatured clearfix panel-panel">
      <div class="bartlett-wide-column-content-region-inner bartlett-wide-contentfeatured-inner panel-panel-inner">
        <?php print $content['contentfeatured']; ?>
      </div>
    </div>
  
    <div class="bartlett-wide-content-container-column-container clearfix">
      <div class="bartlett-wide-column-content-region bartlett-wide-content-column1 bartlett-wide-column panel-panel">
        <div class="bartlett-wide-column-content-region-inner bartlett-wide-content-column1-inner bartlett-wide-column-inner panel-panel-inner">
          <?php print $content['contentcolumn1']; ?>
        </div>
      </div>
      <div class="bartlett-wide-column-content-region bartlett-wide-content-column2 bartlett-wide-column panel-panel">
        <div class="bartlett-wide-column-content-region-inner bartlett-wide-content-column2-inner bartlett-wide-column-inner panel-panel-inner">
          <?php print $content['contentcolumn2']; ?>
        </div>
      </div>
    </div><!-- /.bartlett-wide-content-container-column-container -->
    
  </div><!-- /.bartlett-wide-content-container -->
    
</div><!-- /.bartlett-wide -->
