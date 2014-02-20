<?php
/**
 * @file
 * announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function announcements_ctools_plugin_api($module = NULL, $api = NULL) {
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
function announcements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function announcements_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Use <em>Announcements</em> for time-sensitive content such as news items, reminders, deadlines, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('To feature announcement on the homepage, make sure this item is \'published\' and \'promoted to front page.\''),
    ),
  );
  return $items;
}
