<?php
/**
 * @file
 * careers_entity_view_modes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function careers_entity_view_modes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  return $permissions;
}
