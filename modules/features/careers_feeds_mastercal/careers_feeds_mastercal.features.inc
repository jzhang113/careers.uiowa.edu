<?php
/**
 * @file
 * careers_feeds_mastercal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function careers_feeds_mastercal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
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
function careers_feeds_mastercal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function careers_feeds_mastercal_node_info() {
  $items = array(
    'master_calendar_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('<em>Events</em> are imported from the Master Calendar based on the <a href="/import/master_calendar_feed">feed configuration</a>. <em>Events</em> can also be created and managed manually.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
