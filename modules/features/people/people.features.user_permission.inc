<?php
/**
 * @file
 * people.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function people_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node people content'.
  $permissions['administer panelizer node people content'] = array(
    'name' => 'administer panelizer node people content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node people context'.
  $permissions['administer panelizer node people context'] = array(
    'name' => 'administer panelizer node people context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node people defaults'.
  $permissions['administer panelizer node people defaults'] = array(
    'name' => 'administer panelizer node people defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node people layout'.
  $permissions['administer panelizer node people layout'] = array(
    'name' => 'administer panelizer node people layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node people overview'.
  $permissions['administer panelizer node people overview'] = array(
    'name' => 'administer panelizer node people overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node people settings'.
  $permissions['administer panelizer node people settings'] = array(
    'name' => 'administer panelizer node people settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term people_groups defaults'.
  $permissions['administer panelizer taxonomy_term people_groups defaults'] = array(
    'name' => 'administer panelizer taxonomy_term people_groups defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term people_type defaults'.
  $permissions['administer panelizer taxonomy_term people_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term people_type defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term student_status defaults'.
  $permissions['administer panelizer taxonomy_term student_status defaults'] = array(
    'name' => 'administer panelizer taxonomy_term student_status defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create people content'.
  $permissions['create people content'] = array(
    'name' => 'create people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any people content'.
  $permissions['delete any people content'] = array(
    'name' => 'delete any people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own people content'.
  $permissions['delete own people content'] = array(
    'name' => 'delete own people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in people_groups'.
  $permissions['delete terms in people_groups'] = array(
    'name' => 'delete terms in people_groups',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in people_type'.
  $permissions['delete terms in people_type'] = array(
    'name' => 'delete terms in people_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in student_status'.
  $permissions['delete terms in student_status'] = array(
    'name' => 'delete terms in student_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any people content'.
  $permissions['edit any people content'] = array(
    'name' => 'edit any people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own people content'.
  $permissions['edit own people content'] = array(
    'name' => 'edit own people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in people_groups'.
  $permissions['edit terms in people_groups'] = array(
    'name' => 'edit terms in people_groups',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in people_type'.
  $permissions['edit terms in people_type'] = array(
    'name' => 'edit terms in people_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in student_status'.
  $permissions['edit terms in student_status'] = array(
    'name' => 'edit terms in student_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter people revision log entry'.
  $permissions['enter people revision log entry'] = array(
    'name' => 'enter people revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people authored by option'.
  $permissions['override people authored by option'] = array(
    'name' => 'override people authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people authored on option'.
  $permissions['override people authored on option'] = array(
    'name' => 'override people authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people promote to front page option'.
  $permissions['override people promote to front page option'] = array(
    'name' => 'override people promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people published option'.
  $permissions['override people published option'] = array(
    'name' => 'override people published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people revision option'.
  $permissions['override people revision option'] = array(
    'name' => 'override people revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people sticky option'.
  $permissions['override people sticky option'] = array(
    'name' => 'override people sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
