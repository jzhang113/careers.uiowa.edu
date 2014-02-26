<?php
/**
 * @file
 * front_panel_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function front_panel_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'announcements_events';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Announcements & Events';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'announcements',
      'display' => 'announcements_front_content_pane',
      'args' => '',
      'title' => 'Announcements',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'events',
      'display' => 'events_front_page',
      'args' => '',
      'title' => 'Events',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements');
  t('Announcements & Events');
  t('Events');

  $export['announcements_events'] = $quicktabs;

  return $export;
}
