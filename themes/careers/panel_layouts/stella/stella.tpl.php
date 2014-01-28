<?php
/**
 * @file
 * Template for Panopoly Stella.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display stella clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="stella-container stella-header clearfix panel-panel">
    <div class="stella-container-inner stella-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>

  <div class="stella-column-content-region stella-content panel-panel">
    <div class="stella-column-content-region-inner stella-content-inner panel-panel-inner">
      <?php print $content['contentmain']; ?>
    </div>
  </div>

  <div class="stella-container stella-footer clearfix panel-panel">
    <div class="stella-container-inner stella-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>

</div><!-- /.stella -->
