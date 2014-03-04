<?php
/**
 * @file
 * video.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function video_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:video:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'video';
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '74b3e830-3e05-46a7-a62b-60beb4a26ee3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8a189293-9756-4969-8c9d-aa949502bd6e';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
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
    $pane->uuid = '8a189293-9756-4969-8c9d-aa949502bd6e';
    $display->content['new-8a189293-9756-4969-8c9d-aa949502bd6e'] = $pane;
    $display->panels['contentmain'][0] = 'new-8a189293-9756-4969-8c9d-aa949502bd6e';
    $pane = new stdClass();
    $pane->pid = 'new-43b5488c-210d-4b5e-9941-444663240ec0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_screenshot';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
        'file_view_mode' => 'full',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43b5488c-210d-4b5e-9941-444663240ec0';
    $display->content['new-43b5488c-210d-4b5e-9941-444663240ec0'] = $pane;
    $display->panels['contentmain'][1] = 'new-43b5488c-210d-4b5e-9941-444663240ec0';
    $pane = new stdClass();
    $pane->pid = 'new-19bb0af2-16f2-44ac-b334-09a0fa2fa4e1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_description';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '19bb0af2-16f2-44ac-b334-09a0fa2fa4e1';
    $display->content['new-19bb0af2-16f2-44ac-b334-09a0fa2fa4e1'] = $pane;
    $display->panels['contentmain'][2] = 'new-19bb0af2-16f2-44ac-b334-09a0fa2fa4e1';
    $pane = new stdClass();
    $pane->pid = 'new-3960ccc3-0b7c-427a-a906-10cfdb134d48';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3960ccc3-0b7c-427a-a906-10cfdb134d48';
    $display->content['new-3960ccc3-0b7c-427a-a906-10cfdb134d48'] = $pane;
    $display->panels['contentmain'][3] = 'new-3960ccc3-0b7c-427a-a906-10cfdb134d48';
    $pane = new stdClass();
    $pane->pid = 'new-70c064a2-11ad-4dd0-818d-d31894689a0f';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '70c064a2-11ad-4dd0-818d-d31894689a0f';
    $display->content['new-70c064a2-11ad-4dd0-818d-d31894689a0f'] = $pane;
    $display->panels['contentmain'][4] = 'new-70c064a2-11ad-4dd0-818d-d31894689a0f';
    $pane = new stdClass();
    $pane->pid = 'new-04b8c62d-6fdd-45d0-9e7e-3d2ad3d48fa9';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '04b8c62d-6fdd-45d0-9e7e-3d2ad3d48fa9';
    $display->content['new-04b8c62d-6fdd-45d0-9e7e-3d2ad3d48fa9'] = $pane;
    $display->panels['contentmain'][5] = 'new-04b8c62d-6fdd-45d0-9e7e-3d2ad3d48fa9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8a189293-9756-4969-8c9d-aa949502bd6e';
  $panelizer->display = $display;
  $export['node:video:default:default'] = $panelizer;

  return $export;
}
