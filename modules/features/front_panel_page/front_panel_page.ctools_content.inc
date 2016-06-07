<?php
/**
 * @file
 * front_panel_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function front_panel_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'homepage_custom_content';
  $content->admin_title = 'Homepage Custom Content';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Homepage Custom Content',
    'title' => '',
    'body' => '<h2>Have a plan?</h2>

<p>Graduates, let us know about your plans. Please complete this survey!</p>

<p><a class="button" href="http://careersurvey.iowa.uiowa.edu/">Take Survey</a></p>

<hr />
<h2>Register Your Internship</h2>

<p><a class="button" href="students/reporting-credit-options">View Your Options</a></p>

<hr />
<h2>Give Support</h2>

<p><a class="button" href="http://www.givetoiowa.org/pomerantz">Support the Pomerantz Career Center</a></p>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['homepage_custom_content'] = $content;

  return $export;
}
