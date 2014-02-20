<?php
/**
 * @file
 * employers_organizations.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function employers_organizations_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'employer_showcase_header_text';
  $content->admin_title = 'Employer Showcase Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Employer Showcase Header Text',
    'title' => '',
    'body' => '<p>Find out how your organization&#39;s logo can be prominently featured here by contacting Jane Schildroth at 319-335-1023.</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['employer_showcase_header_text'] = $content;

  return $export;
}
