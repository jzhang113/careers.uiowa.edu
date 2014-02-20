<?php
/**
 * @file
 * announcements.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function announcements_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'announcements_header_text';
  $content->admin_title = 'Announcements Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Announcements Header Text',
    'title' => '',
    'body' => '',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['announcements_header_text'] = $content;

  return $export;
}
