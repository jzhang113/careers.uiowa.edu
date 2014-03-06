<?php
/**
 * @file
 * people.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function people_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people';
  $page->task = 'page';
  $page->admin_title = 'People';
  $page->admin_description = '';
  $page->path = 'people/!type/!group';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'menu-quick-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'type' => array(
      'id' => 1,
      'identifier' => 'People Type Term',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          9 => '9',
          2 => 0,
          3 => 0,
          10 => 0,
          11 => 0,
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
    'group' => array(
      'id' => 2,
      'identifier' => 'People Group Name',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          10 => '10',
          2 => 0,
          3 => 0,
          9 => 0,
          11 => 0,
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
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'people';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Professional Staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            2 => array(),
            3 => array(),
            10 => array(),
            9 => array(
              39 => '39',
            ),
            11 => array(),
            8 => array(),
            12 => array(),
            1 => array(),
            5 => array(),
            7 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '11ecdefb-6935-4e55-bf8c-676b4235d275';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee832115-133a-4fe8-9ed8-c23f744ab79b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'people-people_panel_pane_professional';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee832115-133a-4fe8-9ed8-c23f744ab79b';
    $display->content['new-ee832115-133a-4fe8-9ed8-c23f744ab79b'] = $pane;
    $display->panels['contentmain'][0] = 'new-ee832115-133a-4fe8-9ed8-c23f744ab79b';
    $pane = new stdClass();
    $pane->pid = 'new-79ba0771-eb6c-4644-95b9-a3bf3539627d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'people-people_groups_panel_pane';
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
    $pane->uuid = '79ba0771-eb6c-4644-95b9-a3bf3539627d';
    $display->content['new-79ba0771-eb6c-4644-95b9-a3bf3539627d'] = $pane;
    $display->panels['sidebar'][0] = 'new-79ba0771-eb6c-4644-95b9-a3bf3539627d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ee832115-133a-4fe8-9ed8-c23f744ab79b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'All People',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'people',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->title = 'Profiles';
  $display->uuid = '0598e273-b890-41fa-a7d0-620712909c8e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2582d6e1-71fe-4f10-9b10-3f5c7f547695';
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
      'name' => 'staff_header_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2582d6e1-71fe-4f10-9b10-3f5c7f547695';
    $display->content['new-2582d6e1-71fe-4f10-9b10-3f5c7f547695'] = $pane;
    $display->panels['contentmain'][0] = 'new-2582d6e1-71fe-4f10-9b10-3f5c7f547695';
    $pane = new stdClass();
    $pane->pid = 'new-dd254a4b-d0dc-487b-9738-0ead5f1d2f6c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'people-people_panel_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dd254a4b-d0dc-487b-9738-0ead5f1d2f6c';
    $display->content['new-dd254a4b-d0dc-487b-9738-0ead5f1d2f6c'] = $pane;
    $display->panels['contentmain'][1] = 'new-dd254a4b-d0dc-487b-9738-0ead5f1d2f6c';
    $pane = new stdClass();
    $pane->pid = 'new-f45603a4-e1a0-4c0c-a0e5-9b46a3a3d9a2';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'people-people_type_panel_pane';
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
    $pane->uuid = 'f45603a4-e1a0-4c0c-a0e5-9b46a3a3d9a2';
    $display->content['new-f45603a4-e1a0-4c0c-a0e5-9b46a3a3d9a2'] = $pane;
    $display->panels['sidebar'][0] = 'new-f45603a4-e1a0-4c0c-a0e5-9b46a3a3d9a2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'people';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Peer Advisors',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            2 => array(),
            3 => array(),
            10 => array(),
            9 => array(
              40 => '40',
            ),
            11 => array(),
            8 => array(),
            12 => array(),
            1 => array(),
            5 => array(),
            7 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '8df172b2-f991-43b3-8103-0f652b9be4bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4adb9982-dbc4-4ac1-a007-75aa7659913d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'people-people_panel_pane_student';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4adb9982-dbc4-4ac1-a007-75aa7659913d';
    $display->content['new-4adb9982-dbc4-4ac1-a007-75aa7659913d'] = $pane;
    $display->panels['contentmain'][0] = 'new-4adb9982-dbc4-4ac1-a007-75aa7659913d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-4adb9982-dbc4-4ac1-a007-75aa7659913d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_http_response';
  $handler->task = 'page';
  $handler->subtask = 'people';
  $handler->handler = 'http_response';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Default',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '404',
    'destination' => '',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['people'] = $page;

  return $pages;

}
