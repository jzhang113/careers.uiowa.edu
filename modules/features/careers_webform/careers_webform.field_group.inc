<?php
/**
 * @file
 * careers_webform.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function careers_webform_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webform_general|node|webform|form';
  $field_group->group_name = 'group_webform_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-webform-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_webform_general|node|webform|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('General');

  return $field_groups;
}
