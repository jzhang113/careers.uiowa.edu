<?php
/**
 * @file
 * corporate_and_community_relations_panel_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function corporate_and_community_relations_panel_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
