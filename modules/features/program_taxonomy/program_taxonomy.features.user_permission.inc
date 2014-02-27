<?php
/**
 * @file
 * program_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function program_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer taxonomy_term program choice'.
  $permissions['administer panelizer taxonomy_term program choice'] = array(
    'name' => 'administer panelizer taxonomy_term program choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program content'.
  $permissions['administer panelizer taxonomy_term program content'] = array(
    'name' => 'administer panelizer taxonomy_term program content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program context'.
  $permissions['administer panelizer taxonomy_term program context'] = array(
    'name' => 'administer panelizer taxonomy_term program context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program defaults'.
  $permissions['administer panelizer taxonomy_term program defaults'] = array(
    'name' => 'administer panelizer taxonomy_term program defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program layout'.
  $permissions['administer panelizer taxonomy_term program layout'] = array(
    'name' => 'administer panelizer taxonomy_term program layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program overview'.
  $permissions['administer panelizer taxonomy_term program overview'] = array(
    'name' => 'administer panelizer taxonomy_term program overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term program settings'.
  $permissions['administer panelizer taxonomy_term program settings'] = array(
    'name' => 'administer panelizer taxonomy_term program settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'delete terms in program'.
  $permissions['delete terms in program'] = array(
    'name' => 'delete terms in program',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in program'.
  $permissions['edit terms in program'] = array(
    'name' => 'edit terms in program',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
