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
    'title' => 'Resources',
    'body' => '<p><a class="button" href="http://www.onetonline.org/" style="width:100%;">O*NET OnLine</a></p><p><a class="button" href="http://www.bls.gov/ooh/" style="width:100%;">Bureau of Labor Statistics - Occupational Outlook Handbook</a></p><p><a class="button" style="width:100%;" href="/careers/node/159">Ask a peer or career advisor for more information about Focus 2</a></p><p><a class="button" href="http://www.owlnotes.com/" style="width:100%;">Owlnotes</a></p><p><a class="button" style="width:100%;" href="http://www.getthatgig.com/">Get That Gig</a></p><p><a class="button" href="http://gogovernment.org/" style="width:100%;">Find Job and Internship Opportunities with the Federal Government</a></p><p><a class="button" href="http://www.careerprofiles.info/" style="width:100%;">Career Profiles</a></p>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['majors_sidebar_content'] = $content;

  return $export;
}
