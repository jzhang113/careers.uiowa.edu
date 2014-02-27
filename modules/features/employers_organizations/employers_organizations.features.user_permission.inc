<?php
/**
 * @file
 * employers_organizations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function employers_organizations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node employers_organizations content'.
  $permissions['administer panelizer node employers_organizations content'] = array(
    'name' => 'administer panelizer node employers_organizations content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node employers_organizations context'.
  $permissions['administer panelizer node employers_organizations context'] = array(
    'name' => 'administer panelizer node employers_organizations context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node employers_organizations defaults'.
  $permissions['administer panelizer node employers_organizations defaults'] = array(
    'name' => 'administer panelizer node employers_organizations defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node employers_organizations layout'.
  $permissions['administer panelizer node employers_organizations layout'] = array(
    'name' => 'administer panelizer node employers_organizations layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node employers_organizations overview'.
  $permissions['administer panelizer node employers_organizations overview'] = array(
    'name' => 'administer panelizer node employers_organizations overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node employers_organizations settings'.
  $permissions['administer panelizer node employers_organizations settings'] = array(
    'name' => 'administer panelizer node employers_organizations settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create employers_organizations content'.
  $permissions['create employers_organizations content'] = array(
    'name' => 'create employers_organizations content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any employers_organizations content'.
  $permissions['delete any employers_organizations content'] = array(
    'name' => 'delete any employers_organizations content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own employers_organizations content'.
  $permissions['delete own employers_organizations content'] = array(
    'name' => 'delete own employers_organizations content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any employers_organizations content'.
  $permissions['edit any employers_organizations content'] = array(
    'name' => 'edit any employers_organizations content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own employers_organizations content'.
  $permissions['edit own employers_organizations content'] = array(
    'name' => 'edit own employers_organizations content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter employers_organizations revision log entry'.
  $permissions['enter employers_organizations revision log entry'] = array(
    'name' => 'enter employers_organizations revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override employers_organizations authored by option'.
  $permissions['override employers_organizations authored by option'] = array(
    'name' => 'override employers_organizations authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override employers_organizations authored on option'.
  $permissions['override employers_organizations authored on option'] = array(
    'name' => 'override employers_organizations authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override employers_organizations promote to front page option'.
  $permissions['override employers_organizations promote to front page option'] = array(
    'name' => 'override employers_organizations promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override employers_organizations published option'.
  $permissions['override employers_organizations published option'] = array(
    'name' => 'override employers_organizations published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override employers_organizations revision option'.
  $permissions['override employers_organizations revision option'] = array(
    'name' => 'override employers_organizations revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override employers_organizations sticky option'.
  $permissions['override employers_organizations sticky option'] = array(
    'name' => 'override employers_organizations sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
