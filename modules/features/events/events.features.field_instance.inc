<?php
/**
 * @file
 * events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-master_calendar_event-field_event_category'
  $field_instances['node-master_calendar_event-field_event_category'] = array(
    'bundle' => 'master_calendar_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_category',
    'label' => 'Event Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Event Category');

  return $field_instances;
}