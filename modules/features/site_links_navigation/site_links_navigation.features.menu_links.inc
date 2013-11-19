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

  // Exported menu link: menu-site-links_contact-us:node/14
  $menu_links['menu-site-links_contact-us:node/14'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-site-links_contact-us:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-site-links_linkedin:http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm
  $menu_links['menu-site-links_linkedin:http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-site-links_linkedin:http://www.linkedin.com/groups?home=&gid=3904736&trk=anet_ug_hm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
  );
  // Exported menu link: menu-site-links_office-hours:node/13
  $menu_links['menu-site-links_office-hours:node/13'] = array(
    'menu_name' => 'menu-site-links',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Office Hours',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-site-links_office-hours:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('LinkedIn');
  t('Office Hours');


  return $menu_links;
}
