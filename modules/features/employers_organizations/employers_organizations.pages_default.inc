<?php
/**
 * @file
 * employers_organizations.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function employers_organizations_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'employer_showcase';
  $page->task = 'page';
  $page->admin_title = 'Employer Showcase';
  $page->admin_description = '';
  $page->path = 'showcasegallery';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_employer_showcase_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'employer_showcase';
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Employer Showcase';
  $display->uuid = '87abb891-9e52-48d3-aa71-472ce71fa260';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-55f1e381-44c9-468b-8300-1421808fa4d0';
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
      'name' => 'employer_showcase_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55f1e381-44c9-468b-8300-1421808fa4d0';
    $display->content['new-55f1e381-44c9-468b-8300-1421808fa4d0'] = $pane;
    $display->panels['contentmain'][0] = 'new-55f1e381-44c9-468b-8300-1421808fa4d0';
    $pane = new stdClass();
    $pane->pid = 'new-b3d4de14-e481-4cf1-b7d7-2862de4b5c1b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'employer_showcase-employer_showcase_grid_panel_pane';
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
    $pane->uuid = 'b3d4de14-e481-4cf1-b7d7-2862de4b5c1b';
    $display->content['new-b3d4de14-e481-4cf1-b7d7-2862de4b5c1b'] = $pane;
    $display->panels['contentmain'][1] = 'new-b3d4de14-e481-4cf1-b7d7-2862de4b5c1b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['employer_showcase'] = $page;

  return $pages;

}
