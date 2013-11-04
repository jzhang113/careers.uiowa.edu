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

  // Exported menu link: menu-audience-menu_additional-sub-link:showcasegallery
  $menu_links['menu-audience-menu_additional-sub-link:showcasegallery'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'showcasegallery',
    'router_path' => 'showcasegallery',
    'link_title' => 'Additional Sub-Link',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_additional-sub-link:showcasegallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'menu-audience-menu_students:http://www.careers.uiowa.edu/students',
  );
  // Exported menu link: menu-audience-menu_alumni:http://www.careers.uiowa.edu/alumni
  $menu_links['menu-audience-menu_alumni:http://www.careers.uiowa.edu/alumni'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'http://www.careers.uiowa.edu/alumni',
    'router_path' => '',
    'link_title' => 'Alumni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_alumni:http://www.careers.uiowa.edu/alumni',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-audience-menu_employers-start-here:relations
  $menu_links['menu-audience-menu_employers-start-here:relations'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'relations',
    'router_path' => 'relations',
    'link_title' => 'Employers Start Here',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_employers-start-here:relations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-audience-menu_employers:http://www.careers.uiowa.edu/employers',
  );
  // Exported menu link: menu-audience-menu_employers:http://www.careers.uiowa.edu/employers
  $menu_links['menu-audience-menu_employers:http://www.careers.uiowa.edu/employers'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'http://www.careers.uiowa.edu/employers',
    'router_path' => '',
    'link_title' => 'Employers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_employers:http://www.careers.uiowa.edu/employers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-audience-menu_faculty:http://www.careers.uiowa.edu/faculty
  $menu_links['menu-audience-menu_faculty:http://www.careers.uiowa.edu/faculty'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'http://www.careers.uiowa.edu/faculty',
    'router_path' => '',
    'link_title' => 'Faculty',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_faculty:http://www.careers.uiowa.edu/faculty',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-audience-menu_families:http://www.careers.uiowa.edu/parents
  $menu_links['menu-audience-menu_families:http://www.careers.uiowa.edu/parents'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'http://www.careers.uiowa.edu/parents',
    'router_path' => '',
    'link_title' => 'Families',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_families:http://www.careers.uiowa.edu/parents',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-audience-menu_students:http://www.careers.uiowa.edu/students
  $menu_links['menu-audience-menu_students:http://www.careers.uiowa.edu/students'] = array(
    'menu_name' => 'menu-audience-menu',
    'link_path' => 'http://www.careers.uiowa.edu/students',
    'router_path' => '',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-audience-menu_students:http://www.careers.uiowa.edu/students',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Sub-Link');
  t('Alumni');
  t('Employers');
  t('Employers Start Here');
  t('Faculty');
  t('Families');
  t('Students');


  return $menu_links;
}
