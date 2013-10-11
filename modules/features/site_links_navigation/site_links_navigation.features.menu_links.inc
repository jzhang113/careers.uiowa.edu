<?php
/**
 * @file
 * site_links_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_links_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-site-links:<front>
  $menu_links['menu-site-links:<front>'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact Us',
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
  // Exported menu link: menu-site-links:http://google.com/maps
  $menu_links['menu-site-links:http://google.com/maps'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'http://google.com/maps',
    'router_path' => '',
    'link_title' => 'Location',
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
  // Exported menu link: menu-site-links:http://instagram.com
  $menu_links['menu-site-links:http://instagram.com'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'http://instagram.com',
    'router_path' => '',
    'link_title' => 'Instagram',
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
    'weight' => -41,
  );
  // Exported menu link: menu-site-links:http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm
  $menu_links['menu-site-links:http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm',
    'router_path' => '',
    'link_title' => 'LinkedIn',
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
    'weight' => -44,
  );
  // Exported menu link: menu-site-links:http://www.pinterest.com/UICareerCenter/
  $menu_links['menu-site-links:http://www.pinterest.com/UICareerCenter/'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'http://www.pinterest.com/UICareerCenter/',
    'router_path' => '',
    'link_title' => 'Pinterest',
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
    'weight' => -43,
  );
  // Exported menu link: menu-site-links:http://www.youtube.com/user/careersuiowa
  $menu_links['menu-site-links:http://www.youtube.com/user/careersuiowa'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'http://www.youtube.com/user/careersuiowa',
    'router_path' => '',
    'link_title' => 'YouTube',
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
    'weight' => -42,
  );
  // Exported menu link: menu-site-links:https://twitter.com/UICareerCenter
  $menu_links['menu-site-links:https://twitter.com/UICareerCenter'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'https://twitter.com/UICareerCenter',
    'router_path' => '',
    'link_title' => 'Twitter',
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
    'weight' => -45,
  );
  // Exported menu link: menu-site-links:https://www.facebook.com/UICareerCenter
  $menu_links['menu-site-links:https://www.facebook.com/UICareerCenter'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'https://www.facebook.com/UICareerCenter',
    'router_path' => '',
    'link_title' => 'Facebook',
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
    'weight' => -46,
  );
  // Exported menu link: menu-site-links:people/
  $menu_links['menu-site-links:people/'] = array(
    'menu_name' => 'menu-site-links',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Contact Us');
  t('Facebook');
  t('Instagram');
  t('LinkedIn');
  t('Location');
  t('Pinterest');
  t('Twitter');
  t('YouTube');


  return $menu_links;
}
