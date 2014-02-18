<?php
/**
 * @file
 * spotlights.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function spotlights_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|spotlight|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_spotlight_image',
      2 => 'field_spotlight_name',
      3 => 'field_spotlight_type',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|node|spotlight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_information|node|spotlight|form';
  $field_group->group_name = 'group_more_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More information',
    'weight' => '1',
    'children' => array(
      0 => 'field_spotlight_graduation',
      1 => 'field_spotlight_location',
      2 => 'field_spotlight_major',
      3 => 'field_spotlight_organization',
      4 => 'field_spotlight_position',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-more-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_more_information|node|spotlight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|spotlight|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '7',
    'children' => array(
      0 => 'field_spotlight_audience',
      1 => 'field_spotlight_program',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-references field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_references|node|spotlight|form'] = $field_group;

  return $export;
}
