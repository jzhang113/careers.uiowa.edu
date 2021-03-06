<?php
/**
 * @file
 * articles.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function articles_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'articles_header_text';
  $content->admin_title = 'Articles Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Articles Header Text',
    'title' => '',
    'body' => '<p>[[{"fid":"480","view_mode":"full","type":"media","attributes":{"height":"202","width":"480","alt":"test image","class":"media-element file-full"},"link_text":null}]]</p>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['articles_header_text'] = $content;

  return $export;
}
