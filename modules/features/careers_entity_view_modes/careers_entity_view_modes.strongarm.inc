<?php
/**
 * @file
 * careers_entity_view_modes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function careers_entity_view_modes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'file' => array(
      'featured' => array(
        'label' => 'Featured',
        'custom settings' => 1,
      ),
      'people_node' => array(
        'label' => 'People Node',
        'custom settings' => 1,
      ),
      'people_list' => array(
        'label' => 'People List',
        'custom settings' => 1,
      ),
      'featured_page' => array(
        'label' => 'Featured Page',
        'custom settings' => 1,
      ),
      'square' => array(
        'label' => 'Square',
        'custom settings' => 1,
      ),
      'employer_showcase' => array(
        'label' => 'Employer Showcase',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
