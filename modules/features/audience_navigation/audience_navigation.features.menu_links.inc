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

  // Exported menu link: menu-audience-menu_alumni:taxonomy/term/6
  $menu_links['menu-audience-menu_alumni:taxonomy/term/6'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Alumni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_alumni:taxonomy/term/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-audience-menu_employers:taxonomy/term/4
  $menu_links['menu-audience-menu_employers:taxonomy/term/4'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Employers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_employers:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-audience-menu_faculty:taxonomy/term/5
  $menu_links['menu-audience-menu_faculty:taxonomy/term/5'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Faculty',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_faculty:taxonomy/term/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-audience-menu_families:taxonomy/term/7
  $menu_links['menu-audience-menu_families:taxonomy/term/7'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Families',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_families:taxonomy/term/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-audience-menu_students:taxonomy/term/3
  $menu_links['menu-audience-menu_students:taxonomy/term/3'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_students:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni');
  t('Employers');
  t('Faculty');
  t('Families');
  t('Students');


  return $menu_links;
}
