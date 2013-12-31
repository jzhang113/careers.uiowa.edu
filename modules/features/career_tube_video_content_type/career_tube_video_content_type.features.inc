<?php
/**
 * @file
 * career_tube_video_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function career_tube_video_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
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
 * Implements hook_node_info().
 */
function career_tube_video_content_type_node_info() {
  $items = array(
    'career_tube_video' => array(
      'name' => t('Career Tube Video'),
      'base' => 'node_content',
      'description' => t('Create individual video nodes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
