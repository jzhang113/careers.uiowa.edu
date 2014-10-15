<?php
/**
 * @file
 * announcements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function announcements_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node announcement content'.
  $permissions['administer panelizer node announcement content'] = array(
    'name' => 'administer panelizer node announcement content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node announcement context'.
  $permissions['administer panelizer node announcement context'] = array(
    'name' => 'administer panelizer node announcement context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node announcement defaults'.
  $permissions['administer panelizer node announcement defaults'] = array(
    'name' => 'administer panelizer node announcement defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node announcement layout'.
  $permissions['administer panelizer node announcement layout'] = array(
    'name' => 'administer panelizer node announcement layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node announcement overview'.
  $permissions['administer panelizer node announcement overview'] = array(
    'name' => 'administer panelizer node announcement overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node announcement settings'.
  $permissions['administer panelizer node announcement settings'] = array(
    'name' => 'administer panelizer node announcement settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create announcement content'.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any announcement content'.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own announcement content'.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any announcement content'.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own announcement content'.
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter announcement revision log entry'.
  $permissions['enter announcement revision log entry'] = array(
    'name' => 'enter announcement revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override announcement authored by option'.
  $permissions['override announcement authored by option'] = array(
    'name' => 'override announcement authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override announcement authored on option'.
  $permissions['override announcement authored on option'] = array(
    'name' => 'override announcement authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override announcement promote to front page option'.
  $permissions['override announcement promote to front page option'] = array(
    'name' => 'override announcement promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override announcement published option'.
  $permissions['override announcement published option'] = array(
    'name' => 'override announcement published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override announcement revision option'.
  $permissions['override announcement revision option'] = array(
    'name' => 'override announcement revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override announcement sticky option'.
  $permissions['override announcement sticky option'] = array(
    'name' => 'override announcement sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
