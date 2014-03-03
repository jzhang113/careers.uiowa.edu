<?php
/**
 * @file
 * announcements.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function announcements_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'announcements';
  $page->task = 'page';
  $page->admin_title = 'Announcements';
  $page->admin_description = '';
  $page->path = 'announcements/!audience/!month';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'audience' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          2 => '2',
          11 => '11',
          3 => 0,
          10 => 0,
          9 => 0,
          8 => 0,
          12 => 0,
          1 => 0,
          5 => 0,
          7 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
    'month' => array(
      'id' => 1,
      'identifier' => 'Date',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_announcements_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'announcements';
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
  $display->title = 'Announcements';
  $display->uuid = 'f4476d03-99fb-4626-adba-876b04ca9d39';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-644b3541-e0d8-45b2-a442-c870e91ffaab';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'announcements_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '644b3541-e0d8-45b2-a442-c870e91ffaab';
    $display->content['new-644b3541-e0d8-45b2-a442-c870e91ffaab'] = $pane;
    $display->panels['contentmain'][0] = 'new-644b3541-e0d8-45b2-a442-c870e91ffaab';
    $pane = new stdClass();
    $pane->pid = 'new-64e55f6c-e53d-4952-9708-11db45ac1501';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-announcements_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '25',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64e55f6c-e53d-4952-9708-11db45ac1501';
    $display->content['new-64e55f6c-e53d-4952-9708-11db45ac1501'] = $pane;
    $display->panels['contentmain'][1] = 'new-64e55f6c-e53d-4952-9708-11db45ac1501';
    $pane = new stdClass();
    $pane->pid = 'new-0e412e97-3b7a-45b9-b676-126f0da3ae4e';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-announcements_archive_term_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '0e412e97-3b7a-45b9-b676-126f0da3ae4e';
    $display->content['new-0e412e97-3b7a-45b9-b676-126f0da3ae4e'] = $pane;
    $display->panels['sidebar'][0] = 'new-0e412e97-3b7a-45b9-b676-126f0da3ae4e';
    $pane = new stdClass();
    $pane->pid = 'new-f4366e71-d36c-4d4d-853b-ccf4ae1de6cf';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'announcements-announcements_archive_monthly_links';
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
    $pane->uuid = 'f4366e71-d36c-4d4d-853b-ccf4ae1de6cf';
    $display->content['new-f4366e71-d36c-4d4d-853b-ccf4ae1de6cf'] = $pane;
    $display->panels['sidebar'][1] = 'new-f4366e71-d36c-4d4d-853b-ccf4ae1de6cf';
    $pane = new stdClass();
    $pane->pid = 'new-16ace701-d5b4-4e73-938e-c7ecdf18a3e7';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Announcements Feed',
      'title' => 'Subscribe',
      'body' => '<p><a href="announcements/feed">Subscribe to RSS Feed</a></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rss-feed',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '16ace701-d5b4-4e73-938e-c7ecdf18a3e7';
    $display->content['new-16ace701-d5b4-4e73-938e-c7ecdf18a3e7'] = $pane;
    $display->panels['sidebar'][2] = 'new-16ace701-d5b4-4e73-938e-c7ecdf18a3e7';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-64e55f6c-e53d-4952-9708-11db45ac1501';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['announcements'] = $page;

  return $pages;

}
