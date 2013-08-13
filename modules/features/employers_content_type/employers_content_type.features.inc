<?php
/**
 * @file
 * employers_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employers_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function employers_content_type_node_info() {
  $items = array(
    'employers_content_type' => array(
      'name' => t('Employers'),
      'base' => 'node_content',
      'description' => t('Create employer nodes for employer showcase.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
