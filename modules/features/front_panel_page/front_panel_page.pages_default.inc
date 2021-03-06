<?php
/**
 * @file
 * front_panel_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_panel_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'front_page';
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
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_wide';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'header' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'contentmain' => NULL,
      'featured' => NULL,
      'contentfeatured' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e3f9d8eb-7406-4985-a577-6a89f10aa569';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6bd20da8-9a94-474c-b481-bd369108aac2';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Hireahawk Login',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6bd20da8-9a94-474c-b481-bd369108aac2';
    $display->content['new-6bd20da8-9a94-474c-b481-bd369108aac2'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-6bd20da8-9a94-474c-b481-bd369108aac2';
    $pane = new stdClass();
    $pane->pid = 'new-6fc86953-e432-4057-8d80-0b84b03dd6cc';
    $pane->panel = 'contentcolumn2';
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
      'name' => 'homepage_custom_content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6fc86953-e432-4057-8d80-0b84b03dd6cc';
    $display->content['new-6fc86953-e432-4057-8d80-0b84b03dd6cc'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-6fc86953-e432-4057-8d80-0b84b03dd6cc';
    $pane = new stdClass();
    $pane->pid = 'new-4f0e7bd9-1e4c-480f-9890-897cb55fe367';
    $pane->panel = 'contentfeatured';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured-panel_pane_featured';
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
    $pane->uuid = '4f0e7bd9-1e4c-480f-9890-897cb55fe367';
    $display->content['new-4f0e7bd9-1e4c-480f-9890-897cb55fe367'] = $pane;
    $display->panels['contentfeatured'][0] = 'new-4f0e7bd9-1e4c-480f-9890-897cb55fe367';
    $pane = new stdClass();
    $pane->pid = 'new-713e0c76-2cfc-4990-9f7d-575542af0e94';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-announcements_events';
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
    $pane->uuid = '713e0c76-2cfc-4990-9f7d-575542af0e94';
    $display->content['new-713e0c76-2cfc-4990-9f7d-575542af0e94'] = $pane;
    $display->panels['contentmain'][0] = 'new-713e0c76-2cfc-4990-9f7d-575542af0e94';
    $pane = new stdClass();
    $pane->pid = 'new-61018603-a3d0-4d2d-9cd5-4336fd633aa9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'employer_showcase-employer_showcase_slider_panel_pane';
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
    $pane->uuid = '61018603-a3d0-4d2d-9cd5-4336fd633aa9';
    $display->content['new-61018603-a3d0-4d2d-9cd5-4336fd633aa9'] = $pane;
    $display->panels['contentmain'][1] = 'new-61018603-a3d0-4d2d-9cd5-4336fd633aa9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
