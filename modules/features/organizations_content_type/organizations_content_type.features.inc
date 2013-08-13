<?php
/**
 * @file
 * organizations_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function organizations_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function organizations_content_type_node_info() {
  $items = array(
    'organizations_content_type' => array(
      'name' => t('Organizations'),
      'base' => 'node_content',
      'description' => t('Create organization nodes for corporate and community relations display.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
