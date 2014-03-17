<?php
/**
 * @file
 * majors.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function majors_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'majors';
  $page->task = 'page';
  $page->admin_title = 'Majors';
  $page->admin_description = '';
  $page->path = 'majors';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_majors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'majors';
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
  $display->uuid = '799e4a62-a355-4d31-9e48-6900ec0b49fe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9cd70e3d-88f6-4153-bac6-a7744c148ff1';
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
      'name' => 'majors_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9cd70e3d-88f6-4153-bac6-a7744c148ff1';
    $display->content['new-9cd70e3d-88f6-4153-bac6-a7744c148ff1'] = $pane;
    $display->panels['contentmain'][0] = 'new-9cd70e3d-88f6-4153-bac6-a7744c148ff1';
    $pane = new stdClass();
    $pane->pid = 'new-ecffb492-77a3-48e5-92e3-76defed6a9fc';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'majors-majors_list_panel_pane';
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
    $pane->uuid = 'ecffb492-77a3-48e5-92e3-76defed6a9fc';
    $display->content['new-ecffb492-77a3-48e5-92e3-76defed6a9fc'] = $pane;
    $display->panels['contentmain'][1] = 'new-ecffb492-77a3-48e5-92e3-76defed6a9fc';
    $pane = new stdClass();
    $pane->pid = 'new-c1d0ab2b-2f27-458b-b57f-d592fcf33686';
    $pane->panel = 'sidebar';
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
      'name' => 'majors_sidebar_content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c1d0ab2b-2f27-458b-b57f-d592fcf33686';
    $display->content['new-c1d0ab2b-2f27-458b-b57f-d592fcf33686'] = $pane;
    $display->panels['sidebar'][0] = 'new-c1d0ab2b-2f27-458b-b57f-d592fcf33686';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ecffb492-77a3-48e5-92e3-76defed6a9fc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['majors'] = $page;

  return $pages;

}
