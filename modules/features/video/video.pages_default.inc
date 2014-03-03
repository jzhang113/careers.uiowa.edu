<?php
/**
 * @file
 * video.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function video_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'career_tube';
  $page->task = 'page';
  $page->admin_title = 'Career Tube';
  $page->admin_description = '';
  $page->path = 'video/!category';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'category' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_career_tube_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'career_tube';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Career Tube';
  $display->uuid = '40d9a88d-f1f2-4f15-b97d-948692bf7e71';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63aa9b24-eb01-4580-8a29-a241864b0120';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Career Tube Header Text',
      'title' => '',
      'body' => '<p><span style="color: rgb(51, 51, 51); font-family: Verdana, Arial, Helvetica, sans-serif; font-size: 11px; line-height: 15.671875px;">The Pomerantz Career Center has developed a series of video seminars designed to help you move through the various stages of the job search process. We have also partnered with CareerTV.com to bring you additional short informational videos on a variety of topics. To get started, simply select a topic from the menu below.</span></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'career_tube_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63aa9b24-eb01-4580-8a29-a241864b0120';
    $display->content['new-63aa9b24-eb01-4580-8a29-a241864b0120'] = $pane;
    $display->panels['contentmain'][0] = 'new-63aa9b24-eb01-4580-8a29-a241864b0120';
    $pane = new stdClass();
    $pane->pid = 'new-0994c3bf-582a-4d50-9b5e-78ee3beb3fc1';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'video-video_panel_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0994c3bf-582a-4d50-9b5e-78ee3beb3fc1';
    $display->content['new-0994c3bf-582a-4d50-9b5e-78ee3beb3fc1'] = $pane;
    $display->panels['contentmain'][1] = 'new-0994c3bf-582a-4d50-9b5e-78ee3beb3fc1';
    $pane = new stdClass();
    $pane->pid = 'new-8bdd7f72-9e2c-4874-83de-e75bcd3ec617';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'video-video_categories_panel_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8bdd7f72-9e2c-4874-83de-e75bcd3ec617';
    $display->content['new-8bdd7f72-9e2c-4874-83de-e75bcd3ec617'] = $pane;
    $display->panels['sidebar'][0] = 'new-8bdd7f72-9e2c-4874-83de-e75bcd3ec617';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['career_tube'] = $page;

  return $pages;

}
