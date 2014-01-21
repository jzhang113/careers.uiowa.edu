<?php
/**
 * @file
 * video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node video defaults'.
  $permissions['administer panelizer node video defaults'] = array(
    'name' => 'administer panelizer node video defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term video_type defaults'.
  $permissions['administer panelizer taxonomy_term video_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term video_type defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in video_type'.
  $permissions['delete terms in video_type'] = array(
    'name' => 'delete terms in video_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in video_type'.
  $permissions['edit terms in video_type'] = array(
    'name' => 'edit terms in video_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter video revision log entry'.
  $permissions['enter video revision log entry'] = array(
    'name' => 'enter video revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video authored by option'.
  $permissions['override video authored by option'] = array(
    'name' => 'override video authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video authored on option'.
  $permissions['override video authored on option'] = array(
    'name' => 'override video authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video promote to front page option'.
  $permissions['override video promote to front page option'] = array(
    'name' => 'override video promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video published option'.
  $permissions['override video published option'] = array(
    'name' => 'override video published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video revision option'.
  $permissions['override video revision option'] = array(
    'name' => 'override video revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video sticky option'.
  $permissions['override video sticky option'] = array(
    'name' => 'override video sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
