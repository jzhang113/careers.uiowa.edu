<?php
/**
 * @file
 * majors.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function majors_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'majors_header_text';
  $content->admin_title = 'Majors Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Majors Header Text',
    'title' => '',
    'body' => '<p>To recommend a resource/link, please&nbsp;<a href="/node/80">contact us</a>.</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['majors_header_text'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'majors_sidebar_content';
  $content->admin_title = 'Majors Sidebar Content';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Majors Sidebar Content',
    'title' => '',
    'body' => '',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['majors_sidebar_content'] = $content;

  return $export;
}
