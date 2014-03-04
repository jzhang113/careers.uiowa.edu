<?php
/**
 * @file
 * employers_organizations.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function employers_organizations_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:employers_organizations:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'employers_organizations';
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
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6bc51f62-8d86-4c2a-a514-c46d83edea96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9afaf72-cc5f-4d99-b282-07b80c9f0ed1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'two_hundred',
        'file_view_mode' => 'employer_showcase',
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
    $pane->uuid = 'b9afaf72-cc5f-4d99-b282-07b80c9f0ed1';
    $display->content['new-b9afaf72-cc5f-4d99-b282-07b80c9f0ed1'] = $pane;
    $display->panels['contentmain'][0] = 'new-b9afaf72-cc5f-4d99-b282-07b80c9f0ed1';
    $pane = new stdClass();
    $pane->pid = 'new-dbc409ef-91cc-4542-a342-100c5f1e9819';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_handlers' => array(
          'address' => 'address',
        ),
        'use_widget_handlers' => 1,
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
    $pane->uuid = 'dbc409ef-91cc-4542-a342-100c5f1e9819';
    $display->content['new-dbc409ef-91cc-4542-a342-100c5f1e9819'] = $pane;
    $display->panels['contentmain'][1] = 'new-dbc409ef-91cc-4542-a342-100c5f1e9819';
    $pane = new stdClass();
    $pane->pid = 'new-89ca261a-03be-4539-9691-dfd136cb640a';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website_link';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '89ca261a-03be-4539-9691-dfd136cb640a';
    $display->content['new-89ca261a-03be-4539-9691-dfd136cb640a'] = $pane;
    $display->panels['contentmain'][2] = 'new-89ca261a-03be-4539-9691-dfd136cb640a';
    $pane = new stdClass();
    $pane->pid = 'new-ba56931d-cd86-491b-9c54-0894e63a4464';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ba56931d-cd86-491b-9c54-0894e63a4464';
    $display->content['new-ba56931d-cd86-491b-9c54-0894e63a4464'] = $pane;
    $display->panels['contentmain'][3] = 'new-ba56931d-cd86-491b-9c54-0894e63a4464';
    $pane = new stdClass();
    $pane->pid = 'new-186bd61c-8cff-475c-9a7c-168a7c72c2e6';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_date';
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
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '186bd61c-8cff-475c-9a7c-168a7c72c2e6';
    $display->content['new-186bd61c-8cff-475c-9a7c-168a7c72c2e6'] = $pane;
    $display->panels['contentmain'][4] = 'new-186bd61c-8cff-475c-9a7c-168a7c72c2e6';
    $pane = new stdClass();
    $pane->pid = 'new-1cacdcf4-5aa9-445c-af55-cb3da4c6ddba';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_visited_date';
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
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1cacdcf4-5aa9-445c-af55-cb3da4c6ddba';
    $display->content['new-1cacdcf4-5aa9-445c-af55-cb3da4c6ddba'] = $pane;
    $display->panels['contentmain'][5] = 'new-1cacdcf4-5aa9-445c-af55-cb3da4c6ddba';
    $pane = new stdClass();
    $pane->pid = 'new-9bf4fe0e-b4c6-4cd6-b155-1676fdcbd438';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9bf4fe0e-b4c6-4cd6-b155-1676fdcbd438';
    $display->content['new-9bf4fe0e-b4c6-4cd6-b155-1676fdcbd438'] = $pane;
    $display->panels['contentmain'][6] = 'new-9bf4fe0e-b4c6-4cd6-b155-1676fdcbd438';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-89ca261a-03be-4539-9691-dfd136cb640a';
  $panelizer->display = $display;
  $export['node:employers_organizations:default:default'] = $panelizer;

  return $export;
}
