<?php
/**
 * @file
 * success_stories_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function success_stories_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_success_stories_content_type';
  $strongarm->value = array();
  $export['menu_options_success_stories_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_success_stories_content_type';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_success_stories_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_success_stories_content_type';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_success_stories_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_success_stories_content_type';
  $strongarm->value = '1';
  $export['node_preview_success_stories_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_success_stories_content_type';
  $strongarm->value = 1;
  $export['node_submitted_success_stories_content_type'] = $strongarm;

  return $export;
}
