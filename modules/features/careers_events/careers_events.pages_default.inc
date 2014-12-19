<?php
/**
 * @file
 * careers_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function careers_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
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
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '7f4f7ab0-08a8-436a-87ea-0181f421778f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bff1428c-7d63-4b09-9bc6-6f26542c9037';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-events_filter_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bff1428c-7d63-4b09-9bc6-6f26542c9037';
    $display->content['new-bff1428c-7d63-4b09-9bc6-6f26542c9037'] = $pane;
    $display->panels['contentmain'][0] = 'new-bff1428c-7d63-4b09-9bc6-6f26542c9037';
    $pane = new stdClass();
    $pane->pid = 'new-5329c7ae-1bc7-45f4-abf7-e63f948f459c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-events_filter_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => 'Events Filter',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5329c7ae-1bc7-45f4-abf7-e63f948f459c';
    $display->content['new-5329c7ae-1bc7-45f4-abf7-e63f948f459c'] = $pane;
    $display->panels['sidebar'][0] = 'new-5329c7ae-1bc7-45f4-abf7-e63f948f459c';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-bff1428c-7d63-4b09-9bc6-6f26542c9037';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
