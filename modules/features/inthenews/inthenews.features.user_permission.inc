<?php
/**
 * @file
 * inthenews.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function inthenews_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node news_content_type content'.
  $permissions['administer panelizer node news_content_type content'] = array(
    'name' => 'administer panelizer node news_content_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_content_type context'.
  $permissions['administer panelizer node news_content_type context'] = array(
    'name' => 'administer panelizer node news_content_type context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_content_type defaults'.
  $permissions['administer panelizer node news_content_type defaults'] = array(
    'name' => 'administer panelizer node news_content_type defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_content_type layout'.
  $permissions['administer panelizer node news_content_type layout'] = array(
    'name' => 'administer panelizer node news_content_type layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_content_type overview'.
  $permissions['administer panelizer node news_content_type overview'] = array(
    'name' => 'administer panelizer node news_content_type overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_content_type settings'.
  $permissions['administer panelizer node news_content_type settings'] = array(
    'name' => 'administer panelizer node news_content_type settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create news_content_type content'.
  $permissions['create news_content_type content'] = array(
    'name' => 'create news_content_type content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_content_type content'.
  $permissions['delete any news_content_type content'] = array(
    'name' => 'delete any news_content_type content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_content_type content'.
  $permissions['delete own news_content_type content'] = array(
    'name' => 'delete own news_content_type content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_content_type content'.
  $permissions['edit any news_content_type content'] = array(
    'name' => 'edit any news_content_type content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_content_type content'.
  $permissions['edit own news_content_type content'] = array(
    'name' => 'edit own news_content_type content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter news_content_type revision log entry'.
  $permissions['enter news_content_type revision log entry'] = array(
    'name' => 'enter news_content_type revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_content_type authored by option'.
  $permissions['override news_content_type authored by option'] = array(
    'name' => 'override news_content_type authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_content_type authored on option'.
  $permissions['override news_content_type authored on option'] = array(
    'name' => 'override news_content_type authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_content_type promote to front page option'.
  $permissions['override news_content_type promote to front page option'] = array(
    'name' => 'override news_content_type promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_content_type published option'.
  $permissions['override news_content_type published option'] = array(
    'name' => 'override news_content_type published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_content_type revision option'.
  $permissions['override news_content_type revision option'] = array(
    'name' => 'override news_content_type revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_content_type sticky option'.
  $permissions['override news_content_type sticky option'] = array(
    'name' => 'override news_content_type sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
