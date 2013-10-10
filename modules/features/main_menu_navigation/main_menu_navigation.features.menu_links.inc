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
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/cblp/
  $menu_links['main-menu:http://www.careers.uiowa.edu/cblp/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/cblp/',
    'router_path' => '',
    'link_title' => 'Community-Based Learning Program',
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
    'weight' => 0,
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
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/leadershipacademy/
  $menu_links['main-menu:http://www.careers.uiowa.edu/leadershipacademy/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/leadershipacademy/',
    'router_path' => '',
    'link_title' => 'Career Leadership Academy',
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
    'weight' => 0,
  );
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/nav/findyourfocus/
  $menu_links['main-menu:http://www.careers.uiowa.edu/nav/findyourfocus/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/nav/findyourfocus/',
    'router_path' => '',
    'link_title' => 'Hawkeye Career Navigator',
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
    'weight' => 0,
  );
  // Exported menu link: main-menu:http://www.careers.uiowa.edu/twc/
  $menu_links['main-menu:http://www.careers.uiowa.edu/twc/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.careers.uiowa.edu/twc/',
    'router_path' => '',
    'link_title' => 'The Washington Center',
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
    'weight' => 0,
  );
  // Exported menu link: main-menu:http://www.uiowa.edu/~dcn/
  $menu_links['main-menu:http://www.uiowa.edu/~dcn/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.uiowa.edu/~dcn/',
    'router_path' => '',
    'link_title' => 'Dual Career Network',
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
    'weight' => 0,
  );
  // Exported menu link: main-menu:people/
  $menu_links['main-menu:people/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/',
    'router_path' => 'people',
    'link_title' => 'About Us',
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
    'weight' => -50,
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
  t('Career Leadership Academy');
  t('Career and Leadership Courses');
  t('Community-Based Learning Program');
  t('Corporate and Community Relations');
  t('Dual Career Network');
  t('Hawkeye Career Navigator');
  t('The Washington Center');


  return $menu_links;
}
