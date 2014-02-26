<?php
/**
 * @file
 * careers_feeds_mastercal.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function careers_feeds_mastercal_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node master_calendar_event content'.
  $permissions['administer panelizer node master_calendar_event content'] = array(
    'name' => 'administer panelizer node master_calendar_event content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node master_calendar_event context'.
  $permissions['administer panelizer node master_calendar_event context'] = array(
    'name' => 'administer panelizer node master_calendar_event context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node master_calendar_event defaults'.
  $permissions['administer panelizer node master_calendar_event defaults'] = array(
    'name' => 'administer panelizer node master_calendar_event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node master_calendar_event layout'.
  $permissions['administer panelizer node master_calendar_event layout'] = array(
    'name' => 'administer panelizer node master_calendar_event layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node master_calendar_event overview'.
  $permissions['administer panelizer node master_calendar_event overview'] = array(
    'name' => 'administer panelizer node master_calendar_event overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node master_calendar_event settings'.
  $permissions['administer panelizer node master_calendar_event settings'] = array(
    'name' => 'administer panelizer node master_calendar_event settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term events defaults'.
  $permissions['administer panelizer taxonomy_term events defaults'] = array(
    'name' => 'administer panelizer taxonomy_term events defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'clear master_calendar_feed feeds'.
  $permissions['clear master_calendar_feed feeds'] = array(
    'name' => 'clear master_calendar_feed feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create master_calendar_event content'.
  $permissions['create master_calendar_event content'] = array(
    'name' => 'create master_calendar_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any master_calendar_event content'.
  $permissions['delete any master_calendar_event content'] = array(
    'name' => 'delete any master_calendar_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own master_calendar_event content'.
  $permissions['delete own master_calendar_event content'] = array(
    'name' => 'delete own master_calendar_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in events'.
  $permissions['delete terms in events'] = array(
    'name' => 'delete terms in events',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any master_calendar_event content'.
  $permissions['edit any master_calendar_event content'] = array(
    'name' => 'edit any master_calendar_event content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own master_calendar_event content'.
  $permissions['edit own master_calendar_event content'] = array(
    'name' => 'edit own master_calendar_event content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in events'.
  $permissions['edit terms in events'] = array(
    'name' => 'edit terms in events',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter master_calendar_event revision log entry'.
  $permissions['enter master_calendar_event revision log entry'] = array(
    'name' => 'enter master_calendar_event revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'import master_calendar_feed feeds'.
  $permissions['import master_calendar_feed feeds'] = array(
    'name' => 'import master_calendar_feed feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'override master_calendar_event authored by option'.
  $permissions['override master_calendar_event authored by option'] = array(
    'name' => 'override master_calendar_event authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override master_calendar_event authored on option'.
  $permissions['override master_calendar_event authored on option'] = array(
    'name' => 'override master_calendar_event authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override master_calendar_event promote to front page option'.
  $permissions['override master_calendar_event promote to front page option'] = array(
    'name' => 'override master_calendar_event promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override master_calendar_event published option'.
  $permissions['override master_calendar_event published option'] = array(
    'name' => 'override master_calendar_event published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override master_calendar_event revision option'.
  $permissions['override master_calendar_event revision option'] = array(
    'name' => 'override master_calendar_event revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override master_calendar_event sticky option'.
  $permissions['override master_calendar_event sticky option'] = array(
    'name' => 'override master_calendar_event sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'unlock master_calendar_feed feeds'.
  $permissions['unlock master_calendar_feed feeds'] = array(
    'name' => 'unlock master_calendar_feed feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
