<?php
/**
 * @file
 * main_menu_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_menu_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:http://www.careers.uiowa.edu/about.html
  $menu_links['main-menu:http://www.careers.uiowa.edu/about.html'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/about.html',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/academicprograms.html
  $menu_links['main-menu:http://www.careers.uiowa.edu/academicprograms.html'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/academicprograms.html',
    'router_path' => '',
    'link_title' => 'Career and Leadership Courses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/fairs
  $menu_links['main-menu:http://www.careers.uiowa.edu/fairs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/fairs',
    'router_path' => '',
    'link_title' => 'Career Fairs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/guide.html
  $menu_links['main-menu:http://www.careers.uiowa.edu/guide.html'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/guide.html',
    'router_path' => '',
    'link_title' => 'Career Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:relations
  $menu_links['main-menu:relations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'relations',
    'router_path' => 'relations',
    'link_title' => 'Corporate and Community Relations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Career Fairs');
  t('Career Guide');
  t('Career and Leadership Courses');
  t('Corporate and Community Relations');


  return $menu_links;
}
