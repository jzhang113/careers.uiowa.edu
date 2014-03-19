<?php
/**
 * @file
 * majors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function majors_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create major content'.
  $permissions['create major content'] = array(
    'name' => 'create major content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any major content'.
  $permissions['delete any major content'] = array(
    'name' => 'delete any major content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own major content'.
  $permissions['delete own major content'] = array(
    'name' => 'delete own major content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any major content'.
  $permissions['edit any major content'] = array(
    'name' => 'edit any major content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own major content'.
  $permissions['edit own major content'] = array(
    'name' => 'edit own major content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter major revision log entry'.
  $permissions['enter major revision log entry'] = array(
    'name' => 'enter major revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override major authored by option'.
  $permissions['override major authored by option'] = array(
    'name' => 'override major authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override major authored on option'.
  $permissions['override major authored on option'] = array(
    'name' => 'override major authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override major promote to front page option'.
  $permissions['override major promote to front page option'] = array(
    'name' => 'override major promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override major published option'.
  $permissions['override major published option'] = array(
    'name' => 'override major published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override major revision option'.
  $permissions['override major revision option'] = array(
    'name' => 'override major revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override major sticky option'.
  $permissions['override major sticky option'] = array(
    'name' => 'override major sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
