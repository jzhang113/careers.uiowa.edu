<?php
/**
 * @file
 * audience_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function audience_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer taxonomy_term audience choice'.
  $permissions['administer panelizer taxonomy_term audience choice'] = array(
    'name' => 'administer panelizer taxonomy_term audience choice',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience content'.
  $permissions['administer panelizer taxonomy_term audience content'] = array(
    'name' => 'administer panelizer taxonomy_term audience content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience context'.
  $permissions['administer panelizer taxonomy_term audience context'] = array(
    'name' => 'administer panelizer taxonomy_term audience context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience defaults'.
  $permissions['administer panelizer taxonomy_term audience defaults'] = array(
    'name' => 'administer panelizer taxonomy_term audience defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience layout'.
  $permissions['administer panelizer taxonomy_term audience layout'] = array(
    'name' => 'administer panelizer taxonomy_term audience layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience overview'.
  $permissions['administer panelizer taxonomy_term audience overview'] = array(
    'name' => 'administer panelizer taxonomy_term audience overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience settings'.
  $permissions['administer panelizer taxonomy_term audience settings'] = array(
    'name' => 'administer panelizer taxonomy_term audience settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'delete terms in audience'.
  $permissions['delete terms in audience'] = array(
    'name' => 'delete terms in audience',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in audience'.
  $permissions['edit terms in audience'] = array(
    'name' => 'edit terms in audience',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
