<?php
/**
 * @file
 * audience_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function audience_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-audience-field_audience_image'
  $field_instances['taxonomy_term-audience-field_audience_image'] = array(
    'bundle' => 'audience',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'featured',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_audience_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          '80px' => 0,
          'featured' => 'featured',
          'featured_home' => 0,
          'featured_page' => 0,
          'people_profile_100' => 0,
          'people_profile_320' => 0,
          'square' => 0,
        ),
        'manualcrop_styles_list' => array(
          '80px' => 0,
          'featured' => 'featured',
          'featured_home' => 0,
          'featured_page' => 0,
          'people_profile_100' => 0,
          'people_profile_320' => 0,
          'square' => 0,
        ),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Image');

  return $field_instances;
}
