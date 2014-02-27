<?php
/**
 * @file
 * people.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function people_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people_general|node|people|form';
  $field_group->group_name = 'group_people_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_people_email',
      1 => 'field_people_picture',
      2 => 'field_people_position',
      3 => 'field_people_first_name',
      4 => 'field_people_last_name',
      5 => 'field_people_biography',
      6 => 'field_people_degree',
      7 => 'field_people_phone',
      8 => 'field_people_office',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-people-general field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_people_general|node|people|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_references|node|people|form';
  $field_group->group_name = 'group_person_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '1',
    'children' => array(
      0 => 'field_people_responsibilities',
      1 => 'field_people_groups',
      2 => 'field_people_hometown',
      3 => 'field_people_major',
      4 => 'field_people_member_since',
      5 => 'field_people_student_status',
      6 => 'field_people_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'References',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-person-references field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_person_references|node|people|form'] = $field_group;

  return $export;
}
