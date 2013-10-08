<?php
/**
 * @file
 * employers_orgs_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employers_orgs_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function employers_orgs_content_type_node_info() {
  $items = array(
    'employers_orgs_content_type' => array(
      'name' => t('Employers and Organizations'),
      'base' => 'node_content',
      'description' => t('Create employer/organization nodes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
