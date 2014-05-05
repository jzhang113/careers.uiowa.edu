<?php
/**
 * @file
 * articles.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function articles_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = '0332b906-a92d-42d8-a521-1495ab513e1c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-adc3b5c4-25ab-47ec-ad73-737158cf57b9';
    $pane->panel = 'center';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = 'adc3b5c4-25ab-47ec-ad73-737158cf57b9';
    $display->content['new-adc3b5c4-25ab-47ec-ad73-737158cf57b9'] = $pane;
    $display->panels['center'][0] = 'new-adc3b5c4-25ab-47ec-ad73-737158cf57b9';
    $pane = new stdClass();
    $pane->pid = 'new-4d6e02a0-8c4a-4ed9-88bc-68238c73d103';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4d6e02a0-8c4a-4ed9-88bc-68238c73d103';
    $display->content['new-4d6e02a0-8c4a-4ed9-88bc-68238c73d103'] = $pane;
    $display->panels['center'][1] = 'new-4d6e02a0-8c4a-4ed9-88bc-68238c73d103';
    $pane = new stdClass();
    $pane->pid = 'new-2596b7cc-9108-4d8c-82d3-12f4b359b64a';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2596b7cc-9108-4d8c-82d3-12f4b359b64a';
    $display->content['new-2596b7cc-9108-4d8c-82d3-12f4b359b64a'] = $pane;
    $display->panels['center'][2] = 'new-2596b7cc-9108-4d8c-82d3-12f4b359b64a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4d6e02a0-8c4a-4ed9-88bc-68238c73d103';
  $panelizer->display = $display;
  $export['node:article:default:default'] = $panelizer;

  return $export;
}
