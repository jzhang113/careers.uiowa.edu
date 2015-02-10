<?php
/**
 * @file
 * video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
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
function video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Use <em>Video</em> to add YouTube videos or links to other videos for inclusion into Career Tube.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Add either a YouTube Video or a Video Link to an external video. Both fields cannot be filled out at the time of submission. The screenshot field is only for use with the Video Link field.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
