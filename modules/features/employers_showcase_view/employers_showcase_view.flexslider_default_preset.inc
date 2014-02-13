<?php
/**
 * @file
 * employers_showcase_view.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function employers_showcase_view_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'employer_showcase_carousel';
  $preset->title = 'Employer Showcase Carousel';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'square';
  $preset->imagestyle_thumbnail = 'square';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '1',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 1,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '160',
    'itemMargin' => '0',
    'minItems' => '1',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '1',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 1,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 1,
    'animationLoop' => 1,
    'pauseOnAction' => 1,
    'pauseOnHover' => 1,
    'manualControls' => '',
  );
  $export['employer_showcase_carousel'] = $preset;

  return $export;
}
