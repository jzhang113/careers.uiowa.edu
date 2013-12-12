<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: featured_home.
  $styles['featured_home'] = array(
    'name' => 'featured_home',
    'label' => 'featured_home',
    'effects' => array(
      3 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
          'keepproportions' => 1,
          'style_name' => 'featured_home',
        ),
        'weight' => 0,
      ),
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 360,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_page.
  $styles['featured_page'] = array(
    'name' => 'featured_page',
    'label' => 'featured_page',
    'effects' => array(
      5 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 825,
          'height' => '',
          'keepproportions' => 0,
          'style_name' => 'featured_page',
        ),
        'weight' => 0,
      ),
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 825,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: square.
  $styles['square'] = array(
    'name' => 'square',
    'label' => 'square',
    'effects' => array(
      3 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1140,
          'height' => 1140,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'square',
        ),
        'weight' => 0,
      ),
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 1140,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: square_small.
  $styles['square_small'] = array(
    'name' => 'square_small',
    'label' => 'square_small',
    'effects' => array(
      8 => array(
        'label' => 'Reuse a Manual Crop selection',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'square',
          'style_name' => 'square_small',
        ),
        'weight' => 0,
      ),
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: two_hundred.
  $styles['two_hundred'] = array(
    'name' => 'two_hundred',
    'label' => 'two_hundred',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
