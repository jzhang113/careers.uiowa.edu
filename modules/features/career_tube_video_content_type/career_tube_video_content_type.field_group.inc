<?php
/**
 * @file
 * career_tube_video_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function career_tube_video_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_career_tube_fields|node|career_tube_video|form';
  $field_group->group_name = 'group_career_tube_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_tube_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Career Tube Video Fields',
    'weight' => '0',
    'children' => array(
      0 => 'group_career_tube_general_info',
      1 => 'group_career_tube_video',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-career-tube-fields field-group-tabs',
      ),
    ),
  );
  $export['group_career_tube_fields|node|career_tube_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_career_tube_general_info|node|career_tube_video|form';
  $field_group->group_name = 'group_career_tube_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_tube_video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_career_tube_fields';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_tag',
      2 => 'title',
      3 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-career-tube-general-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_career_tube_general_info|node|career_tube_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_career_tube_video|node|career_tube_video|form';
  $field_group->group_name = 'group_career_tube_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_tube_video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_career_tube_fields';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '11',
    'children' => array(
      0 => 'field_video_file',
      1 => 'field_video_transcript',
      2 => 'field_video_link',
      3 => 'field_video_youtube_check',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-career-tube-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_career_tube_video|node|career_tube_video|form'] = $field_group;

  return $export;
}
