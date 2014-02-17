<?php
/**
 * @file
 * inthenews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inthenews_ctools_plugin_api($module = NULL, $api = NULL) {
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
function inthenews_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function inthenews_node_info() {
  $items = array(
    'news_content_type' => array(
      'name' => t('In The News'),
      'base' => 'node_content',
      'description' => t('Use <em>In The News</em> to feature Pomerantz Career Center related news/media from external sources such as the <em>Daily Iowan</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Do not post copyrighted material without proper permission.'),
    ),
  );
  return $items;
}
