<?php
/**
 * @file
 * inthenews.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function inthenews_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'inthenews_header_text';
  $content->admin_title = 'In The News Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'In The News Header Text',
    'title' => '',
    'body' => '<p>An archive of articles and media featuring the Pomerantz&nbsp;Career Center.</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['inthenews_header_text'] = $content;

  return $export;
}
