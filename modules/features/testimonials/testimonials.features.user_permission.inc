<?php
/**
 * @file
 * testimonials.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function testimonials_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node testimonial defaults'.
  $permissions['administer panelizer node testimonial defaults'] = array(
    'name' => 'administer panelizer node testimonial defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create testimonial content'.
  $permissions['create testimonial content'] = array(
    'name' => 'create testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any testimonial content'.
  $permissions['delete any testimonial content'] = array(
    'name' => 'delete any testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own testimonial content'.
  $permissions['delete own testimonial content'] = array(
    'name' => 'delete own testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any testimonial content'.
  $permissions['edit any testimonial content'] = array(
    'name' => 'edit any testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own testimonial content'.
  $permissions['edit own testimonial content'] = array(
    'name' => 'edit own testimonial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'enter testimonial revision log entry'.
  $permissions['enter testimonial revision log entry'] = array(
    'name' => 'enter testimonial revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override testimonial authored by option'.
  $permissions['override testimonial authored by option'] = array(
    'name' => 'override testimonial authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override testimonial authored on option'.
  $permissions['override testimonial authored on option'] = array(
    'name' => 'override testimonial authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override testimonial promote to front page option'.
  $permissions['override testimonial promote to front page option'] = array(
    'name' => 'override testimonial promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override testimonial published option'.
  $permissions['override testimonial published option'] = array(
    'name' => 'override testimonial published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override testimonial revision option'.
  $permissions['override testimonial revision option'] = array(
    'name' => 'override testimonial revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override testimonial sticky option'.
  $permissions['override testimonial sticky option'] = array(
    'name' => 'override testimonial sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
