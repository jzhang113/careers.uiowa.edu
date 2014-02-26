<?php
/**
 * @file
 * careers_quicktabs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function careers_quicktabs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quicktabs_tabstyle';
  $strongarm->value = 'Arrows';
  $export['quicktabs_tabstyle'] = $strongarm;

  return $export;
}
