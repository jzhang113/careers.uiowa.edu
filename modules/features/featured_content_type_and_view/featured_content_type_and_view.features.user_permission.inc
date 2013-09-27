<?php
/**
 * @file
 * featured_content_type_and_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function featured_content_type_and_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'draggableviews',
  );

  return $permissions;
}
