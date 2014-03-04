<?php
/**
 * @file
 * inthenews.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function inthenews_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news_content_type:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news_content_type';
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
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '746a6f76-62d6-4fe7-86a5-677f4be170c7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2de9861-f714-4e5f-9ade-243ce8f514cf';
    $pane->panel = 'center';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2de9861-f714-4e5f-9ade-243ce8f514cf';
    $display->content['new-a2de9861-f714-4e5f-9ade-243ce8f514cf'] = $pane;
    $display->panels['center'][0] = 'new-a2de9861-f714-4e5f-9ade-243ce8f514cf';
    $pane = new stdClass();
    $pane->pid = 'new-f20c3d38-7dcf-447a-a841-4ba16e72969f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
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
    $pane->uuid = 'f20c3d38-7dcf-447a-a841-4ba16e72969f';
    $display->content['new-f20c3d38-7dcf-447a-a841-4ba16e72969f'] = $pane;
    $display->panels['center'][1] = 'new-f20c3d38-7dcf-447a-a841-4ba16e72969f';
    $pane = new stdClass();
    $pane->pid = 'new-8811521a-6fa2-4346-a9f5-092ec8729303';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_published_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8811521a-6fa2-4346-a9f5-092ec8729303';
    $display->content['new-8811521a-6fa2-4346-a9f5-092ec8729303'] = $pane;
    $display->panels['center'][2] = 'new-8811521a-6fa2-4346-a9f5-092ec8729303';
    $pane = new stdClass();
    $pane->pid = 'new-6dff5d4c-5d32-4631-9155-9db8e7d6c139';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6dff5d4c-5d32-4631-9155-9db8e7d6c139';
    $display->content['new-6dff5d4c-5d32-4631-9155-9db8e7d6c139'] = $pane;
    $display->panels['center'][3] = 'new-6dff5d4c-5d32-4631-9155-9db8e7d6c139';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6dff5d4c-5d32-4631-9155-9db8e7d6c139';
  $panelizer->display = $display;
  $export['node:news_content_type:default:default'] = $panelizer;

  return $export;
}
