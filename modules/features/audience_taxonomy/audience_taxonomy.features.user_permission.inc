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

  // Exported permission: 'administer panelizer taxonomy_term audience content'.
  $permissions['administer panelizer taxonomy_term audience content'] = array(
    'name' => 'administer panelizer taxonomy_term audience content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience context'.
  $permissions['administer panelizer taxonomy_term audience context'] = array(
    'name' => 'administer panelizer taxonomy_term audience context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience defaults'.
  $permissions['administer panelizer taxonomy_term audience defaults'] = array(
    'name' => 'administer panelizer taxonomy_term audience defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience layout'.
  $permissions['administer panelizer taxonomy_term audience layout'] = array(
    'name' => 'administer panelizer taxonomy_term audience layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience overview'.
  $permissions['administer panelizer taxonomy_term audience overview'] = array(
    'name' => 'administer panelizer taxonomy_term audience overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience settings'.
  $permissions['administer panelizer taxonomy_term audience settings'] = array(
    'name' => 'administer panelizer taxonomy_term audience settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
