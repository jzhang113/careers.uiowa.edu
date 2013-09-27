<?php
/**
 * @file
 * featured_content_type_and_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featured_content_type_and_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function featured_content_type_and_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function featured_content_type_and_view_image_default_styles() {
  $styles = array();

  // Exported image style: featured_home.
  $styles['featured_home'] = array(
    'name' => 'featured_home',
    'label' => '',
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
          'width' => 790,
          'height' => 350,
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
          'width' => 790,
          'height' => 350,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function featured_content_type_and_view_node_info() {
  $items = array(
    'featured_slider' => array(
      'name' => t('Featured'),
      'base' => 'node_content',
      'description' => t('Feature content, images, links which will be placed in the front page slider.'),
      'has_title' => '1',
      'title_label' => t('Title/Caption'),
      'help' => '',
    ),
  );
  return $items;
}
