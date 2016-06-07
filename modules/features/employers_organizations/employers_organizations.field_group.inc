<?php
/**
 * @file
 * employers_organizations.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function employers_organizations_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|employers_organizations|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employers_organizations';
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
  $field_groups['group_general|node|employers_organizations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_information|node|employers_organizations|form';
  $field_group->group_name = 'group_more_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employers_organizations';
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
  $field_groups['group_more_information|node|employers_organizations|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('General');
  t('More Information');

  return $field_groups;
}
