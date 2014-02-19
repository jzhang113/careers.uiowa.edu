<?php
/**
 * @file
 * employers_orgs_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function employers_orgs_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|employers_orgs_content_type|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employers_orgs_content_type';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_website_link',
      2 => 'field_sponsor_date',
      3 => 'field_description',
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
  $export['group_general|node|employers_orgs_content_type|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_information|node|employers_orgs_content_type|form';
  $field_group->group_name = 'group_more_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employers_orgs_content_type';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_location_address',
      1 => 'field_location_geofield',
      2 => 'field_visited_date',
      3 => 'field_additional_notes',
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
  $export['group_more_information|node|employers_orgs_content_type|form'] = $field_group;

  return $export;
}
