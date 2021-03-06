<?php
/**
 * @file
 * basic_page_content_type.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function basic_page_content_type_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '838f7965-2b32-4106-85c6-603e44954adf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ad7c4c8a-837c-4264-9105-75cc21e11132';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'featured_page',
        'image_link' => '',
        'file_view_mode' => 'featured_page',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'ad7c4c8a-837c-4264-9105-75cc21e11132';
    $display->content['new-ad7c4c8a-837c-4264-9105-75cc21e11132'] = $pane;
    $display->panels['contentmain'][0] = 'new-ad7c4c8a-837c-4264-9105-75cc21e11132';
    $pane = new stdClass();
    $pane->pid = 'new-00fdb64b-af8e-4f6a-b8cf-4606294aa269';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '00fdb64b-af8e-4f6a-b8cf-4606294aa269';
    $display->content['new-00fdb64b-af8e-4f6a-b8cf-4606294aa269'] = $pane;
    $display->panels['contentmain'][1] = 'new-00fdb64b-af8e-4f6a-b8cf-4606294aa269';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-00fdb64b-af8e-4f6a-b8cf-4606294aa269';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  return $export;
}
