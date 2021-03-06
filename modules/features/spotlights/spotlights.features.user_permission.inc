<?php
/**
 * @file
 * spotlights.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function spotlights_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node spotlight content'.
  $permissions['administer panelizer node spotlight content'] = array(
    'name' => 'administer panelizer node spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node spotlight context'.
  $permissions['administer panelizer node spotlight context'] = array(
    'name' => 'administer panelizer node spotlight context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node spotlight defaults'.
  $permissions['administer panelizer node spotlight defaults'] = array(
    'name' => 'administer panelizer node spotlight defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node spotlight layout'.
  $permissions['administer panelizer node spotlight layout'] = array(
    'name' => 'administer panelizer node spotlight layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node spotlight overview'.
  $permissions['administer panelizer node spotlight overview'] = array(
    'name' => 'administer panelizer node spotlight overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node spotlight settings'.
  $permissions['administer panelizer node spotlight settings'] = array(
    'name' => 'administer panelizer node spotlight settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term spotlights defaults'.
  $permissions['administer panelizer taxonomy_term spotlights defaults'] = array(
    'name' => 'administer panelizer taxonomy_term spotlights defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create spotlight content'.
  $permissions['create spotlight content'] = array(
    'name' => 'create spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any spotlight content'.
  $permissions['delete any spotlight content'] = array(
    'name' => 'delete any spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own spotlight content'.
  $permissions['delete own spotlight content'] = array(
    'name' => 'delete own spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in spotlights'.
  $permissions['delete terms in spotlights'] = array(
    'name' => 'delete terms in spotlights',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any spotlight content'.
  $permissions['edit any spotlight content'] = array(
    'name' => 'edit any spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own spotlight content'.
  $permissions['edit own spotlight content'] = array(
    'name' => 'edit own spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in spotlights'.
  $permissions['edit terms in spotlights'] = array(
    'name' => 'edit terms in spotlights',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter spotlight revision log entry'.
  $permissions['enter spotlight revision log entry'] = array(
    'name' => 'enter spotlight revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override spotlight authored by option'.
  $permissions['override spotlight authored by option'] = array(
    'name' => 'override spotlight authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override spotlight authored on option'.
  $permissions['override spotlight authored on option'] = array(
    'name' => 'override spotlight authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override spotlight promote to front page option'.
  $permissions['override spotlight promote to front page option'] = array(
    'name' => 'override spotlight promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override spotlight published option'.
  $permissions['override spotlight published option'] = array(
    'name' => 'override spotlight published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override spotlight revision option'.
  $permissions['override spotlight revision option'] = array(
    'name' => 'override spotlight revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override spotlight sticky option'.
  $permissions['override spotlight sticky option'] = array(
    'name' => 'override spotlight sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
