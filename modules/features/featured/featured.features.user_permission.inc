<?php
/**
 * @file
 * featured.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function featured_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node featured content'.
  $permissions['administer panelizer node featured content'] = array(
    'name' => 'administer panelizer node featured content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node featured context'.
  $permissions['administer panelizer node featured context'] = array(
    'name' => 'administer panelizer node featured context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node featured defaults'.
  $permissions['administer panelizer node featured defaults'] = array(
    'name' => 'administer panelizer node featured defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node featured layout'.
  $permissions['administer panelizer node featured layout'] = array(
    'name' => 'administer panelizer node featured layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node featured overview'.
  $permissions['administer panelizer node featured overview'] = array(
    'name' => 'administer panelizer node featured overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node featured settings'.
  $permissions['administer panelizer node featured settings'] = array(
    'name' => 'administer panelizer node featured settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create featured content'.
  $permissions['create featured content'] = array(
    'name' => 'create featured content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured content'.
  $permissions['delete any featured content'] = array(
    'name' => 'delete any featured content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured content'.
  $permissions['delete own featured content'] = array(
    'name' => 'delete own featured content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured content'.
  $permissions['edit any featured content'] = array(
    'name' => 'edit any featured content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured content'.
  $permissions['edit own featured content'] = array(
    'name' => 'edit own featured content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter featured revision log entry'.
  $permissions['enter featured revision log entry'] = array(
    'name' => 'enter featured revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured authored by option'.
  $permissions['override featured authored by option'] = array(
    'name' => 'override featured authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured authored on option'.
  $permissions['override featured authored on option'] = array(
    'name' => 'override featured authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured promote to front page option'.
  $permissions['override featured promote to front page option'] = array(
    'name' => 'override featured promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured published option'.
  $permissions['override featured published option'] = array(
    'name' => 'override featured published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured revision option'.
  $permissions['override featured revision option'] = array(
    'name' => 'override featured revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override featured sticky option'.
  $permissions['override featured sticky option'] = array(
    'name' => 'override featured sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
