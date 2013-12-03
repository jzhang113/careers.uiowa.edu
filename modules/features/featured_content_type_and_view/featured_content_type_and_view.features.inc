<?php
/**
 * @file
 * featured_content_type_and_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featured_content_type_and_view_ctools_plugin_api($module = NULL, $api = NULL) {
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
function featured_content_type_and_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function featured_content_type_and_view_node_info() {
  $items = array(
    'featured_slider' => array(
      'name' => t('Featured'),
      'base' => 'node_content',
      'description' => t('Feature content, images, links which will be placed in the front page slider.'),
      'has_title' => '1',
      'title_label' => t('Title/Caption'),
      'help' => '',
    ),
  );
  return $items;
}
