<?php
/**
 * @file
 * Template for Panopoly whelan-flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display whelan-flipped-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="whelan-flipped-container whelan-flipped-column-content clearfix">
    <div class="whelan-flipped-column-content-region whelan-flipped-content panel-panel">
      <div class="whelan-flipped-column-content-region-inner whelan-flipped-content-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="whelan-flipped-column-content-region whelan-flipped-column1 panel-panel">
      <div class="whelan-flipped-column-content-region-inner whelan-flipped-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="whelan-flipped-column-content-region whelan-flipped-column2 panel-panel">
      <div class="whelan-flipped-column-content-region-inner whelan-flipped-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>

</div><!-- /.whelan-flipped -->
