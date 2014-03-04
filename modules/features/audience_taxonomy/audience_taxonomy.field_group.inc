<?php
/**
 * @file
 * audience_taxonomy.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function audience_taxonomy_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|taxonomy_term|audience|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audience';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_audience_links',
      1 => 'field_featured_entity_reference',
      2 => 'field_side_button_link',
      3 => 'name',
      4 => 'description',
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
  $export['group_general|taxonomy_term|audience|form'] = $field_group;

  return $export;
}
