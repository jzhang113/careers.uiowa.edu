<?php
/**
 * @file
 * featured.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featured_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
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
function featured_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function featured_node_info() {
  $items = array(
    'featured' => array(
      'name' => t('Featured'),
      'base' => 'node_content',
      'description' => t('<em>Featured</em> are image \'slides\' that can be pulled to different parts of the site as a standalone item or as part of a slideshow, and can include a title, caption, link, and logo.'),
      'has_title' => '1',
      'title_label' => t('Administrative Title'),
      'help' => t('To feature on the homepage, make sure this item is \'published\' and \'promoted to front page.\' To add to a program or audience page, reference the slide while editing the program and/or audience.'),
    ),
  );
  return $items;
}
