<?php
/**
 * @file
 * announcements.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function announcements_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:announcement:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'announcement';
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
  $display->uuid = 'e44d5689-9e13-4d54-82f9-3592495bb0d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2038f81-faed-4794-92f6-3f68075b5d8f';
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
    $pane->uuid = 'e2038f81-faed-4794-92f6-3f68075b5d8f';
    $display->content['new-e2038f81-faed-4794-92f6-3f68075b5d8f'] = $pane;
    $display->panels['center'][0] = 'new-e2038f81-faed-4794-92f6-3f68075b5d8f';
    $pane = new stdClass();
    $pane->pid = 'new-8221ccff-8a22-473f-92cc-1d3d507e2ee0';
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
    $pane->uuid = '8221ccff-8a22-473f-92cc-1d3d507e2ee0';
    $display->content['new-8221ccff-8a22-473f-92cc-1d3d507e2ee0'] = $pane;
    $display->panels['center'][1] = 'new-8221ccff-8a22-473f-92cc-1d3d507e2ee0';
    $pane = new stdClass();
    $pane->pid = 'new-27f231da-939e-48e0-8a8f-f427d603c3ba';
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
    $pane->uuid = '27f231da-939e-48e0-8a8f-f427d603c3ba';
    $display->content['new-27f231da-939e-48e0-8a8f-f427d603c3ba'] = $pane;
    $display->panels['center'][2] = 'new-27f231da-939e-48e0-8a8f-f427d603c3ba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-27f231da-939e-48e0-8a8f-f427d603c3ba';
  $panelizer->display = $display;
  $export['node:announcement:default:default'] = $panelizer;

  return $export;
}
