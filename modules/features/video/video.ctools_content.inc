<?php
/**
 * @file
 * video.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function video_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'career_tube_header_text';
  $content->admin_title = 'Career Tube Header Text';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Career Tube Header Text',
    'title' => '',
    'body' => '<p><span style="color: rgb(51, 51, 51); font-family: Verdana, Arial, Helvetica, sans-serif; font-size: 11px; line-height: 15.671875px;">The Pomerantz Career Center has developed a series of video seminars designed to help you move through the various stages of the job search process. We have also partnered with CareerTV.com to bring you additional short informational videos on a variety of topics. To get started, simply select a topic from the menu below.</span></p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['career_tube_header_text'] = $content;

  return $export;
}
