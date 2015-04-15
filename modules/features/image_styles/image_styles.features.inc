<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: featured.
  $styles['featured'] = array(
    'label' => 'featured',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 640,
          'height' => 269,
          'keepproportions' => 1,
          'style_name' => 'featured',
        ),
        'weight' => 0,
      ),
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1100,
          'height' => 463,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_page.
  $styles['featured_page'] = array(
    'label' => 'featured_page',
    'effects' => array(
      5 => array(
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

  // Exported image style: people_profile.
  $styles['people_profile'] = array(
    'label' => 'people_profile',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 220,
          'height' => 308,
          'keepproportions' => 1,
          'style_name' => 'people_profile',
        ),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 308,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: people_profile_small.
  $styles['people_profile_small'] = array(
    'label' => 'people_profile_small',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'people_profile',
          'style_name' => 'people_profile_small',
        ),
        'weight' => 0,
      ),
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 140,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: square.
  $styles['square'] = array(
    'label' => 'square',
    'effects' => array(
      3 => array(
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
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 1140,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: square_medium.
  $styles['square_medium'] = array(
    'label' => 'square_medium',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'square',
          'style_name' => 'square_medium',
        ),
        'weight' => 0,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: square_small.
  $styles['square_small'] = array(
    'label' => 'square_small',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'square',
          'style_name' => 'square_small',
        ),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: two_hundred.
  $styles['two_hundred'] = array(
    'label' => 'two_hundred',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      2 => array(
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
