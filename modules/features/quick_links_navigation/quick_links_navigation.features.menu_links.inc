<?php
/**
 * @file
 * quick_links_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function quick_links_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-quick-links_internships:http://careers.uiowa.edu
  $menu_links['menu-quick-links_internships:http://careers.uiowa.edu'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'http://careers.uiowa.edu',
    'router_path' => '',
    'link_title' => 'Internships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_internships:http://careers.uiowa.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_resources-for-special-populations:http://careers.uiowa.edu
  $menu_links['menu-quick-links_resources-for-special-populations:http://careers.uiowa.edu'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'http://careers.uiowa.edu',
    'router_path' => '',
    'link_title' => 'Resources for Special Populations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_resources-for-special-populations:http://careers.uiowa.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Internships');
  t('Resources for Special Populations');


  return $menu_links;
}
