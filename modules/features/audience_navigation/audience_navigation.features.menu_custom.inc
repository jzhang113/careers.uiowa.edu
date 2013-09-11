<?php
/**
 * @file
 * audience_navigation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function audience_navigation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-audience-menu.
  $menus['menu-audience-menu'] = array(
    'menu_name' => 'menu-audience-menu',
    'title' => 'Audience Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Audience Menu');


  return $menus;
}
