<?php
/**
 * @file
 * careers_webform.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function careers_webform_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5960cb19-e0cc-46a7-b177-ffaf837d3cbd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06261355-818a-4f96-969c-fbdf76b5e11b';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06261355-818a-4f96-969c-fbdf76b5e11b';
    $display->content['new-06261355-818a-4f96-969c-fbdf76b5e11b'] = $pane;
    $display->panels['contentmain'][0] = 'new-06261355-818a-4f96-969c-fbdf76b5e11b';
    $pane = new stdClass();
    $pane->pid = 'new-5c8b6ae8-a668-472b-b9cd-983f5c466dee';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c8b6ae8-a668-472b-b9cd-983f5c466dee';
    $display->content['new-5c8b6ae8-a668-472b-b9cd-983f5c466dee'] = $pane;
    $display->panels['contentmain'][1] = 'new-5c8b6ae8-a668-472b-b9cd-983f5c466dee';
    $pane = new stdClass();
    $pane->pid = 'new-f3f77dcb-ea94-4bc9-be7e-a53d67cbe095';
    $pane->panel = 'contentmain';
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
    $pane->uuid = 'f3f77dcb-ea94-4bc9-be7e-a53d67cbe095';
    $display->content['new-f3f77dcb-ea94-4bc9-be7e-a53d67cbe095'] = $pane;
    $display->panels['contentmain'][2] = 'new-f3f77dcb-ea94-4bc9-be7e-a53d67cbe095';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-06261355-818a-4f96-969c-fbdf76b5e11b';
  $panelizer->display = $display;
  $export['node:webform:default:default'] = $panelizer;

  return $export;
}
