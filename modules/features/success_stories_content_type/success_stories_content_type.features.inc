<?php
/**
 * @file
 * success_stories_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function success_stories_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function success_stories_content_type_node_info() {
  $items = array(
    'success_stories_content_type' => array(
      'name' => t('Success Stories'),
      'base' => 'node_content',
      'description' => t('Create student success stories (testimonials).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
