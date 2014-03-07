<?php
/**
 * @file
 * spotlights.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function spotlights_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:spotlight:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'spotlight';
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
  $display->uuid = '1401491e-2b70-40c4-85e2-f838ffa47cb6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8519f2a8-8ce5-483d-bd68-fa1d20ae717b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'people_node',
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
    $pane->uuid = '8519f2a8-8ce5-483d-bd68-fa1d20ae717b';
    $display->content['new-8519f2a8-8ce5-483d-bd68-fa1d20ae717b'] = $pane;
    $display->panels['center'][0] = 'new-8519f2a8-8ce5-483d-bd68-fa1d20ae717b';
    $pane = new stdClass();
    $pane->pid = 'new-81457101-5983-48fe-be33-bf81b93c9e03';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_name';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '81457101-5983-48fe-be33-bf81b93c9e03';
    $display->content['new-81457101-5983-48fe-be33-bf81b93c9e03'] = $pane;
    $display->panels['center'][1] = 'new-81457101-5983-48fe-be33-bf81b93c9e03';
    $pane = new stdClass();
    $pane->pid = 'new-a2801338-24bc-476c-aded-20f9934a5c2f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_position';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->uuid = 'a2801338-24bc-476c-aded-20f9934a5c2f';
    $display->content['new-a2801338-24bc-476c-aded-20f9934a5c2f'] = $pane;
    $display->panels['center'][2] = 'new-a2801338-24bc-476c-aded-20f9934a5c2f';
    $pane = new stdClass();
    $pane->pid = 'new-836fe6eb-bdf6-400f-b7eb-3fd9a0e27b8a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '836fe6eb-bdf6-400f-b7eb-3fd9a0e27b8a';
    $display->content['new-836fe6eb-bdf6-400f-b7eb-3fd9a0e27b8a'] = $pane;
    $display->panels['center'][3] = 'new-836fe6eb-bdf6-400f-b7eb-3fd9a0e27b8a';
    $pane = new stdClass();
    $pane->pid = 'new-5f938448-9ea4-48f4-87d3-00880d6a9f51';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5f938448-9ea4-48f4-87d3-00880d6a9f51';
    $display->content['new-5f938448-9ea4-48f4-87d3-00880d6a9f51'] = $pane;
    $display->panels['center'][4] = 'new-5f938448-9ea4-48f4-87d3-00880d6a9f51';
    $pane = new stdClass();
    $pane->pid = 'new-b1c47bd4-aada-4fa1-8440-d522bba138a6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_major';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b1c47bd4-aada-4fa1-8440-d522bba138a6';
    $display->content['new-b1c47bd4-aada-4fa1-8440-d522bba138a6'] = $pane;
    $display->panels['center'][5] = 'new-b1c47bd4-aada-4fa1-8440-d522bba138a6';
    $pane = new stdClass();
    $pane->pid = 'new-f794b6ad-332f-4bb7-b3f0-10309b93b3c8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_spotlight_graduation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f794b6ad-332f-4bb7-b3f0-10309b93b3c8';
    $display->content['new-f794b6ad-332f-4bb7-b3f0-10309b93b3c8'] = $pane;
    $display->panels['center'][6] = 'new-f794b6ad-332f-4bb7-b3f0-10309b93b3c8';
    $pane = new stdClass();
    $pane->pid = 'new-d48e4280-8564-4fb9-8280-d2c7e8fe8d4d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd48e4280-8564-4fb9-8280-d2c7e8fe8d4d';
    $display->content['new-d48e4280-8564-4fb9-8280-d2c7e8fe8d4d'] = $pane;
    $display->panels['center'][7] = 'new-d48e4280-8564-4fb9-8280-d2c7e8fe8d4d';
    $pane = new stdClass();
    $pane->pid = 'new-af387015-c9f5-4b95-8390-f01a14db1c98';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'af387015-c9f5-4b95-8390-f01a14db1c98';
    $display->content['new-af387015-c9f5-4b95-8390-f01a14db1c98'] = $pane;
    $display->panels['center'][8] = 'new-af387015-c9f5-4b95-8390-f01a14db1c98';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-af387015-c9f5-4b95-8390-f01a14db1c98';
  $panelizer->display = $display;
  $export['node:spotlight:default:default'] = $panelizer;

  return $export;
}
