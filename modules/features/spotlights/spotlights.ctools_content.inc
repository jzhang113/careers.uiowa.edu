<?php
/**
 * @file
 * spotlights.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function spotlights_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'spotlights_header_text';
  $content->admin_title = 'Spotlights Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Spotlights Header Text',
    'title' => '',
    'body' => '<p>A collection of Pomerantz Career Center spotlights featured throughout the website.</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['spotlights_header_text'] = $content;

  return $export;
}
