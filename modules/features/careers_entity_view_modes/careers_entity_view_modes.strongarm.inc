<?php
/**
 * @file
 * careers_entity_view_modes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function careers_entity_view_modes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'file' => array(
      'employer_showcase' => array(
        'label' => 'Employer Showcase',
        'custom settings' => 1,
      ),
      'featured' => array(
        'label' => 'Featured',
        'custom settings' => 1,
      ),
      'featured_page' => array(
        'label' => 'Featured Page',
        'custom settings' => 1,
      ),
      'people_list' => array(
        'label' => 'People List',
        'custom settings' => 1,
      ),
      'people_node' => array(
        'label' => 'People Node',
        'custom settings' => 1,
      ),
      'square' => array(
        'label' => 'Square',
        'custom settings' => 1,
      ),
      'square_small' => array(
        'label' => 'Square Small',
        'custom settings' => 1,
      ),
      'square_medium' => array(
        'label' => 'Square Medium',
        'custom settings' => 1,
      ),
    ),
    'taxonomy_term' => array(
      'student_organizations' => array(
        'label' => 'Student Organizations',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'employer_showcase' => 'employer_showcase',
    'featured' => 'featured',
    'featured_page' => 'featured_page',
    'people_list' => 'people_list',
    'people_node' => 'people_node',
    'square' => 'square',
    'square_small' => 'square_small',
    'teaser' => 'teaser',
    'full' => 'full',
    'preview' => 'preview',
    'search_index' => 'search_index',
    'search_result' => 'search_result',
    'wysiwyg' => 'wysiwyg',
    'token' => 'token',
    'default' => 0,
  );
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'employer_showcase' => 'employer_showcase',
    'featured' => 'featured',
    'featured_page' => 'featured_page',
    'people_list' => 'people_list',
    'people_node' => 'people_node',
    'square' => 'square',
    'square_small' => 'square_small',
    'teaser' => 'teaser',
    'full' => 'full',
    'preview' => 'preview',
    'search_index' => 'search_index',
    'search_result' => 'search_result',
    'wysiwyg' => 'wysiwyg',
    'token' => 'token',
    'default' => 0,
  );
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'employer_showcase' => 'employer_showcase',
    'featured' => 'featured',
    'featured_page' => 'featured_page',
    'people_list' => 'people_list',
    'people_node' => 'people_node',
    'square' => 'square',
    'square_small' => 'square_small',
    'preview' => 'preview',
    'search_index' => 'search_index',
    'search_result' => 'search_result',
    'wysiwyg' => 'wysiwyg',
    'token' => 'token',
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
  );
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'employer_showcase' => 'employer_showcase',
    'featured' => 'featured',
    'featured_page' => 'featured_page',
    'people_list' => 'people_list',
    'people_node' => 'people_node',
    'square' => 'square',
    'square_small' => 'square_small',
    'preview' => 'preview',
    'search_index' => 'search_index',
    'search_result' => 'search_result',
    'wysiwyg' => 'wysiwyg',
    'token' => 'token',
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
  );
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status'] = $strongarm;

  return $export;
}
