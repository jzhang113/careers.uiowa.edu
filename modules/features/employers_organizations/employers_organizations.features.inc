<?php
/**
 * @file
 * employers_organizations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employers_organizations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
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
function employers_organizations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function employers_organizations_node_info() {
  $items = array(
    'employers_organizations' => array(
      'name' => t('Employers and Organizations'),
      'base' => 'node_content',
      'description' => t('Use <em>Employers and Organizations</em> to create \'profiles\' for outside organizations that have a relationship with the Pomerantz Career Center.'),
      'has_title' => '1',
      'title_label' => t('Company/Organization'),
      'help' => '',
    ),
  );
  return $items;
}
