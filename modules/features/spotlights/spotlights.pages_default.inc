<?php
/**
 * @file
 * spotlights.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function spotlights_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'spotlights';
  $page->task = 'page';
  $page->admin_title = 'Spotlights';
  $page->admin_description = '';
  $page->path = 'spotlights/!category';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'category' => array(
      'settings' => array(),
      'identifier' => 'No context',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_spotlights_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'spotlights';
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
  $display->title = '';
  $display->uuid = '7818c61d-6fc5-4e4b-b835-d040433472d3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-837c96a1-1f70-4369-bcd2-f4b2bd5370b6';
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
      'name' => 'spotlights_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '837c96a1-1f70-4369-bcd2-f4b2bd5370b6';
    $display->content['new-837c96a1-1f70-4369-bcd2-f4b2bd5370b6'] = $pane;
    $display->panels['contentmain'][0] = 'new-837c96a1-1f70-4369-bcd2-f4b2bd5370b6';
    $pane = new stdClass();
    $pane->pid = 'new-22ae9960-9f68-4ff9-8c08-1add7514d298';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotlights-spotlights_panel_pane';
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
    $pane->uuid = '22ae9960-9f68-4ff9-8c08-1add7514d298';
    $display->content['new-22ae9960-9f68-4ff9-8c08-1add7514d298'] = $pane;
    $display->panels['contentmain'][1] = 'new-22ae9960-9f68-4ff9-8c08-1add7514d298';
    $pane = new stdClass();
    $pane->pid = 'new-b4545965-5802-4b38-b48d-bf8d6a54ecd0';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotlights-panel_pane_1';
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
    $pane->uuid = 'b4545965-5802-4b38-b48d-bf8d6a54ecd0';
    $display->content['new-b4545965-5802-4b38-b48d-bf8d6a54ecd0'] = $pane;
    $display->panels['sidebar'][0] = 'new-b4545965-5802-4b38-b48d-bf8d6a54ecd0';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-22ae9960-9f68-4ff9-8c08-1add7514d298';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['spotlights'] = $page;

  return $pages;

}
