<?php
/**
 * @file
 * career_center_navigation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function career_center_navigation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-audience-menu.
  $menus['menu-audience-menu'] = array(
    'menu_name' => 'menu-audience-menu',
    'title' => 'Audience Menu',
    'description' => '',
  );
  // Exported menu: menu-quick-links.
  $menus['menu-quick-links'] = array(
    'menu_name' => 'menu-quick-links',
    'title' => 'Quick Links',
    'description' => '',
  );
  // Exported menu: menu-site-links.
  $menus['menu-site-links'] = array(
    'menu_name' => 'menu-site-links',
    'title' => 'Site Links',
    'description' => '',
  );
  // Exported menu: menu-social-media.
  $menus['menu-social-media'] = array(
    'menu_name' => 'menu-social-media',
    'title' => 'Social Media',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Audience Menu');
  t('Quick Links');
  t('Site Links');
  t('Social Media');


  return $menus;
}
