<?php
/**
 * @file
 * articles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function articles_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles';
  $page->task = 'page';
  $page->admin_title = 'Articles';
  $page->admin_description = '';
  $page->path = 'careerbuzz/!month';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
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
  $handler->name = 'page_articles_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'articles';
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
    $pane->pid = 'new-d9db96e2-4080-4f84-af06-ec4039ef6667';
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
      'name' => 'articles_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd9db96e2-4080-4f84-af06-ec4039ef6667';
    $display->content['new-d9db96e2-4080-4f84-af06-ec4039ef6667'] = $pane;
    $display->panels['contentmain'][0] = 'new-d9db96e2-4080-4f84-af06-ec4039ef6667';
    $pane = new stdClass();
    $pane->pid = 'new-86cb9e68-8cc7-438b-b0eb-e0462324ec5c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles-articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '25',
      'override_title' => 1,
      'override_title_text' => '<notitle>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '86cb9e68-8cc7-438b-b0eb-e0462324ec5c';
    $display->content['new-86cb9e68-8cc7-438b-b0eb-e0462324ec5c'] = $pane;
    $display->panels['contentmain'][1] = 'new-86cb9e68-8cc7-438b-b0eb-e0462324ec5c';
    $pane = new stdClass();
    $pane->pid = 'new-2f245bcf-64da-4292-a806-2a73ac911eee';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles-articles_monthly_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->uuid = '2f245bcf-64da-4292-a806-2a73ac911eee';
    $display->content['new-2f245bcf-64da-4292-a806-2a73ac911eee'] = $pane;
    $display->panels['sidebar'][0] = 'new-2f245bcf-64da-4292-a806-2a73ac911eee';
    $pane = new stdClass();
    $pane->pid = 'new-16ace701-d5b4-4e73-938e-c7ecdf18a3e7';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Articles Feed',
      'title' => 'Subscribe',
      'body' => '<p><a href="articles/feed">Subscribe to RSS Feed</a></p>',
      'format' => 'filtered_html',
      'substitute' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16ace701-d5b4-4e73-938e-c7ecdf18a3e7';
    $display->content['new-16ace701-d5b4-4e73-938e-c7ecdf18a3e7'] = $pane;
    $display->panels['sidebar'][1] = 'new-16ace701-d5b4-4e73-938e-c7ecdf18a3e7';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-86cb9e68-8cc7-438b-b0eb-e0462324ec5c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles'] = $page;

  return $pages;

}
