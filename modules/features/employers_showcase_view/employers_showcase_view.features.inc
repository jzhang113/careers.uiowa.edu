<?php
/**
 * @file
 * employers_showcase_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employers_showcase_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function employers_showcase_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
