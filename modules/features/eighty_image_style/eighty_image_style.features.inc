<?php
/**
 * @file
 * eighty_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function eighty_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: 80px.
  $styles['80px'] = array(
    'name' => '80px',
    'label' => '',
    'effects' => array(
      1 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'keepproportions' => 1,
          'style_name' => '80px',
        ),
        'weight' => 0,
      ),
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
