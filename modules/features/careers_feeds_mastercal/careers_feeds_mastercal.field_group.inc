<?php
/**
 * @file
 * careers_feeds_mastercal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function careers_feeds_mastercal_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mastercal|node|master_calendar_event|form';
  $field_group->group_name = 'group_mastercal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'master_calendar_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Master Calendar Fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_mcf_date',
      2 => 'field_mcf_event_url',
      3 => 'field_mcf_location',
      4 => 'field_mcf_event_category',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Master Calendar Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-mastercal field-group-fieldset',
        'description' => 'Fields being updated via the Master Calendar. These fields are not editable directly. You must edit these values on Master Calendar and they will get updated here.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_mastercal|node|master_calendar_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|master_calendar_event|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'master_calendar_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_audience',
      1 => 'field_event_program',
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
  $export['group_references|node|master_calendar_event|form'] = $field_group;

  return $export;
}
