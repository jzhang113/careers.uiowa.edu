<?php
/**
 * @file
 * audience_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function audience_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-audience-menu:<front>
  $menu_links['menu-audience-menu:<front>'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Students');


  return $menu_links;
}
