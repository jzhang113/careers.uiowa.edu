<?php
/**
 * @file
 * majors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function majors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function majors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function majors_node_info() {
  $items = array(
    'major' => array(
      'name' => t('Major'),
      'base' => 'node_content',
      'description' => t('Use <em>Major</em> to create career information pages related to an academic major.'),
      'has_title' => '1',
      'title_label' => t('Major'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
