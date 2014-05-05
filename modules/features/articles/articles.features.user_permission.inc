<?php
/**
 * @file
 * articles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function articles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node article content'.
  $permissions['administer panelizer node article content'] = array(
    'name' => 'administer panelizer node article content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article context'.
  $permissions['administer panelizer node article context'] = array(
    'name' => 'administer panelizer node article context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article layout'.
  $permissions['administer panelizer node article layout'] = array(
    'name' => 'administer panelizer node article layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article overview'.
  $permissions['administer panelizer node article overview'] = array(
    'name' => 'administer panelizer node article overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article settings'.
  $permissions['administer panelizer node article settings'] = array(
    'name' => 'administer panelizer node article settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'student' => 'student',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'student' => 'student',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'student' => 'student',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter article revision log entry'.
  $permissions['enter article revision log entry'] = array(
    'name' => 'enter article revision log entry',
    'roles' => array(
      'student' => 'student',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article authored by option'.
  $permissions['override article authored by option'] = array(
    'name' => 'override article authored by option',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article authored on option'.
  $permissions['override article authored on option'] = array(
    'name' => 'override article authored on option',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article promote to front page option'.
  $permissions['override article promote to front page option'] = array(
    'name' => 'override article promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article published option'.
  $permissions['override article published option'] = array(
    'name' => 'override article published option',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article revision option'.
  $permissions['override article revision option'] = array(
    'name' => 'override article revision option',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article sticky option'.
  $permissions['override article sticky option'] = array(
    'name' => 'override article sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
