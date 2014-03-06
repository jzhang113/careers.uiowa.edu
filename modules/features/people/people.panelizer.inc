<?php
/**
 * @file
 * people.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function people_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:people:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'people';
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
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c2740538-437c-41bb-97b3-77884a22394d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a11c767-83f8-40a8-8d38-52cda087dfb8';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'people_profile_320',
        'image_link' => '',
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
    $pane->uuid = '3a11c767-83f8-40a8-8d38-52cda087dfb8';
    $display->content['new-3a11c767-83f8-40a8-8d38-52cda087dfb8'] = $pane;
    $display->panels['contentmain'][0] = 'new-3a11c767-83f8-40a8-8d38-52cda087dfb8';
    $pane = new stdClass();
    $pane->pid = 'new-149d3877-de21-493c-8efa-e4530e09670b';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
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
    $pane->uuid = '149d3877-de21-493c-8efa-e4530e09670b';
    $display->content['new-149d3877-de21-493c-8efa-e4530e09670b'] = $pane;
    $display->panels['contentmain'][1] = 'new-149d3877-de21-493c-8efa-e4530e09670b';
    $pane = new stdClass();
    $pane->pid = 'new-5d29afbe-8f54-4993-b011-d0bc0ff50a69';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_member_since';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->uuid = '5d29afbe-8f54-4993-b011-d0bc0ff50a69';
    $display->content['new-5d29afbe-8f54-4993-b011-d0bc0ff50a69'] = $pane;
    $display->panels['contentmain'][2] = 'new-5d29afbe-8f54-4993-b011-d0bc0ff50a69';
    $pane = new stdClass();
    $pane->pid = 'new-7bf58f29-9246-4579-a654-fb098aad3c10';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_major';
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
    $pane->uuid = '7bf58f29-9246-4579-a654-fb098aad3c10';
    $display->content['new-7bf58f29-9246-4579-a654-fb098aad3c10'] = $pane;
    $display->panels['contentmain'][3] = 'new-7bf58f29-9246-4579-a654-fb098aad3c10';
    $pane = new stdClass();
    $pane->pid = 'new-2fc6403a-0e8b-434c-bb1b-48262986926b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_hometown';
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
    $pane->uuid = '2fc6403a-0e8b-434c-bb1b-48262986926b';
    $display->content['new-2fc6403a-0e8b-434c-bb1b-48262986926b'] = $pane;
    $display->panels['contentmain'][4] = 'new-2fc6403a-0e8b-434c-bb1b-48262986926b';
    $pane = new stdClass();
    $pane->pid = 'new-181fb311-e0d9-42bb-a6e9-2edfa1b7d54d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_student_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_plain',
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
    $pane->uuid = '181fb311-e0d9-42bb-a6e9-2edfa1b7d54d';
    $display->content['new-181fb311-e0d9-42bb-a6e9-2edfa1b7d54d'] = $pane;
    $display->panels['contentmain'][5] = 'new-181fb311-e0d9-42bb-a6e9-2edfa1b7d54d';
    $pane = new stdClass();
    $pane->pid = 'new-1d90c1b1-d592-465b-b93f-4e1a579b54ba';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_position';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1d90c1b1-d592-465b-b93f-4e1a579b54ba';
    $display->content['new-1d90c1b1-d592-465b-b93f-4e1a579b54ba'] = $pane;
    $display->panels['contentmain'][6] = 'new-1d90c1b1-d592-465b-b93f-4e1a579b54ba';
    $pane = new stdClass();
    $pane->pid = 'new-f227d401-3b32-4ebe-ba64-3d5e14f8ffa4';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'telephone_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title' => '',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f227d401-3b32-4ebe-ba64-3d5e14f8ffa4';
    $display->content['new-f227d401-3b32-4ebe-ba64-3d5e14f8ffa4'] = $pane;
    $display->panels['contentmain'][7] = 'new-f227d401-3b32-4ebe-ba64-3d5e14f8ffa4';
    $pane = new stdClass();
    $pane->pid = 'new-18d9e861-29df-4011-b592-b5b9bc3068bd';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '18d9e861-29df-4011-b592-b5b9bc3068bd';
    $display->content['new-18d9e861-29df-4011-b592-b5b9bc3068bd'] = $pane;
    $display->panels['contentmain'][8] = 'new-18d9e861-29df-4011-b592-b5b9bc3068bd';
    $pane = new stdClass();
    $pane->pid = 'new-23ae6c16-69ff-4c5a-9e9e-2eb91af85b20';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_office';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '23ae6c16-69ff-4c5a-9e9e-2eb91af85b20';
    $display->content['new-23ae6c16-69ff-4c5a-9e9e-2eb91af85b20'] = $pane;
    $display->panels['contentmain'][9] = 'new-23ae6c16-69ff-4c5a-9e9e-2eb91af85b20';
    $pane = new stdClass();
    $pane->pid = 'new-c9652dd0-b16b-49e9-9972-efb6ac35b6f6';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_responsibility';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'c9652dd0-b16b-49e9-9972-efb6ac35b6f6';
    $display->content['new-c9652dd0-b16b-49e9-9972-efb6ac35b6f6'] = $pane;
    $display->panels['contentmain'][10] = 'new-c9652dd0-b16b-49e9-9972-efb6ac35b6f6';
    $pane = new stdClass();
    $pane->pid = 'new-400a7918-fb49-46f6-ad61-dc31ca46a658';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_people_biography';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '400a7918-fb49-46f6-ad61-dc31ca46a658';
    $display->content['new-400a7918-fb49-46f6-ad61-dc31ca46a658'] = $pane;
    $display->panels['contentmain'][11] = 'new-400a7918-fb49-46f6-ad61-dc31ca46a658';
    $pane = new stdClass();
    $pane->pid = 'new-be5cfdfe-aad4-4902-b26e-5e30bede559c';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'be5cfdfe-aad4-4902-b26e-5e30bede559c';
    $display->content['new-be5cfdfe-aad4-4902-b26e-5e30bede559c'] = $pane;
    $display->panels['contentmain'][12] = 'new-be5cfdfe-aad4-4902-b26e-5e30bede559c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1d90c1b1-d592-465b-b93f-4e1a579b54ba';
  $panelizer->display = $display;
  $export['node:people:default:default'] = $panelizer;

  return $export;
}
