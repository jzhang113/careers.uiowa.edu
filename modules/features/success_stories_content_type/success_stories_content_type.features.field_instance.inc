<?php
/**
 * @file
 * success_stories_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function success_stories_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-success_stories_content_type-body'
  $field_instances['node-success_stories_content_type-body'] = array(
    'bundle' => 'success_stories_content_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-success_stories_content_type-field_image'
  $field_instances['node-success_stories_content_type-field_image'] = array(
    'bundle' => 'success_stories_content_type',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image(s)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'success_stories/images',
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
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => FALSE,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-success_stories_content_type-field_profile_image'
  $field_instances['node-success_stories_content_type-field_profile_image'] = array(
    'bundle' => 'success_stories_content_type',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_image',
    'label' => 'Profile Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'success_stories/images',
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
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => FALSE,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image(s)');
  t('Profile Image');

  return $field_instances;
}
