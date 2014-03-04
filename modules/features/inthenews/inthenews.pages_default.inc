<?php
/**
 * @file
 * inthenews.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function inthenews_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'inthenews';
  $page->task = 'page';
  $page->admin_title = 'In The News';
  $page->admin_description = '';
  $page->path = 'inthenews/!month';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'month' => array(
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
  $handler->name = 'page_inthenews_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'inthenews';
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
  $display->title = '';
  $display->uuid = '335573a1-7926-49c0-952f-c4858cd84168';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8bcf9e92-595e-4544-9474-a5adbe8e083a';
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
      'name' => 'inthenews_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8bcf9e92-595e-4544-9474-a5adbe8e083a';
    $display->content['new-8bcf9e92-595e-4544-9474-a5adbe8e083a'] = $pane;
    $display->panels['contentmain'][0] = 'new-8bcf9e92-595e-4544-9474-a5adbe8e083a';
    $pane = new stdClass();
    $pane->pid = 'new-23ea7b7f-67cc-4046-af83-60ef951a6cc4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'inthenews-inthenews';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '23ea7b7f-67cc-4046-af83-60ef951a6cc4';
    $display->content['new-23ea7b7f-67cc-4046-af83-60ef951a6cc4'] = $pane;
    $display->panels['contentmain'][1] = 'new-23ea7b7f-67cc-4046-af83-60ef951a6cc4';
    $pane = new stdClass();
    $pane->pid = 'new-6bd2f61e-1587-49e9-bb30-5d7b60b1eb01';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'inthenews-inthenews_archive_links';
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
    $pane->uuid = '6bd2f61e-1587-49e9-bb30-5d7b60b1eb01';
    $display->content['new-6bd2f61e-1587-49e9-bb30-5d7b60b1eb01'] = $pane;
    $display->panels['sidebar'][0] = 'new-6bd2f61e-1587-49e9-bb30-5d7b60b1eb01';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-23ea7b7f-67cc-4046-af83-60ef951a6cc4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inthenews'] = $page;

  return $pages;

}
