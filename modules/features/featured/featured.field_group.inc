<?php
/**
 * @file
 * featured.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function featured_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|featured|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_featured_caption',
      1 => 'field_featured_image',
      2 => 'field_featured_link',
      3 => 'field_featured_title',
      4 => 'field_featured_logo',
      5 => 'title',
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
  $field_groups['group_general|node|featured|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('General');

  return $field_groups;
}
