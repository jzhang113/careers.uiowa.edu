<?php
/**
 * @file
 * people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function people_node_info() {
  $items = array(
    'people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => t('Use <em>People</em> to create \'profiles\' for Pomerantz Career Center professional staff and student staff (peer advisors).'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
