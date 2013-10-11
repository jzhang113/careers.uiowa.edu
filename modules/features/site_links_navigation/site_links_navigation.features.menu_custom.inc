<?php
/**
 * @file
 * site_links_navigation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function site_links_navigation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-site-links.
  $menus['menu-site-links'] = array(
    'menu_name' => 'menu-site-links',
    'title' => 'Site Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Site Links');


  return $menus;
}
