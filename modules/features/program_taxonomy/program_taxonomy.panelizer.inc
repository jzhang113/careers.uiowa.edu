<?php
/**
 * @file
 * program_taxonomy.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function program_taxonomy_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:program:default';
  $panelizer->title = 'Full-Width Body';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'program';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'stella';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '12f4fda5-9815-4168-ba15-f8f1e3ace136';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-64378c39-cb33-4f56-ab0b-3a48f03230f6';
    $pane->panel = 'contentmain';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '64378c39-cb33-4f56-ab0b-3a48f03230f6';
    $display->content['new-64378c39-cb33-4f56-ab0b-3a48f03230f6'] = $pane;
    $display->panels['contentmain'][0] = 'new-64378c39-cb33-4f56-ab0b-3a48f03230f6';
    $pane = new stdClass();
    $pane->pid = 'new-768aa12a-3957-4c7c-9322-3f5128915663';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotlights-spotlight_teaser_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '768aa12a-3957-4c7c-9322-3f5128915663';
    $display->content['new-768aa12a-3957-4c7c-9322-3f5128915663'] = $pane;
    $display->panels['footer'][0] = 'new-768aa12a-3957-4c7c-9322-3f5128915663';
    $pane = new stdClass();
    $pane->pid = 'new-601dd4c4-16ff-4756-abfd-5ce2097bcc1a';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-subpage_announcements_events';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '601dd4c4-16ff-4756-abfd-5ce2097bcc1a';
    $display->content['new-601dd4c4-16ff-4756-abfd-5ce2097bcc1a'] = $pane;
    $display->panels['footer'][1] = 'new-601dd4c4-16ff-4756-abfd-5ce2097bcc1a';
    $pane = new stdClass();
    $pane->pid = 'new-e28a3f65-48cd-44ee-85ab-7479f9c14c9a';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured-featured_entity_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e28a3f65-48cd-44ee-85ab-7479f9c14c9a';
    $display->content['new-e28a3f65-48cd-44ee-85ab-7479f9c14c9a'] = $pane;
    $display->panels['header'][0] = 'new-e28a3f65-48cd-44ee-85ab-7479f9c14c9a';
    $pane = new stdClass();
    $pane->pid = 'new-138db9a4-8416-4e06-a74a-eda09fb75867';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_program_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '138db9a4-8416-4e06-a74a-eda09fb75867';
    $display->content['new-138db9a4-8416-4e06-a74a-eda09fb75867'] = $pane;
    $display->panels['header'][1] = 'new-138db9a4-8416-4e06-a74a-eda09fb75867';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:program:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:program:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'program';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'portal';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '40518b6d-da49-410d-b4ca-f7beeabaa00f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e11a93b-8403-4779-9f69-8319bc215659';
    $pane->panel = 'footer';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '0e11a93b-8403-4779-9f69-8319bc215659';
    $display->content['new-0e11a93b-8403-4779-9f69-8319bc215659'] = $pane;
    $display->panels['footer'][0] = 'new-0e11a93b-8403-4779-9f69-8319bc215659';
    $pane = new stdClass();
    $pane->pid = 'new-94c92f9c-9b37-403f-a06d-02cc6def96ba';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotlights-spotlight_teaser_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94c92f9c-9b37-403f-a06d-02cc6def96ba';
    $display->content['new-94c92f9c-9b37-403f-a06d-02cc6def96ba'] = $pane;
    $display->panels['footer'][1] = 'new-94c92f9c-9b37-403f-a06d-02cc6def96ba';
    $pane = new stdClass();
    $pane->pid = 'new-4f7d02fb-503e-44f3-b3bb-5e21cda20d1c';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-subpage_announcements_events';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4f7d02fb-503e-44f3-b3bb-5e21cda20d1c';
    $display->content['new-4f7d02fb-503e-44f3-b3bb-5e21cda20d1c'] = $pane;
    $display->panels['footer'][2] = 'new-4f7d02fb-503e-44f3-b3bb-5e21cda20d1c';
    $pane = new stdClass();
    $pane->pid = 'new-6c4b84d1-39da-4d0c-bed2-3f14957eb82c';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured-featured_entity_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c4b84d1-39da-4d0c-bed2-3f14957eb82c';
    $display->content['new-6c4b84d1-39da-4d0c-bed2-3f14957eb82c'] = $pane;
    $display->panels['header'][0] = 'new-6c4b84d1-39da-4d0c-bed2-3f14957eb82c';
    $pane = new stdClass();
    $pane->pid = 'new-85218bec-da05-4236-b57f-7da348ae5a1a';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_program_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '85218bec-da05-4236-b57f-7da348ae5a1a';
    $display->content['new-85218bec-da05-4236-b57f-7da348ae5a1a'] = $pane;
    $display->panels['header'][1] = 'new-85218bec-da05-4236-b57f-7da348ae5a1a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:program:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:program:dynamic_3_column';
  $panelizer->title = 'Dynamic 3-Column';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'program';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'stella';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b9f16c52-e42e-4460-92cc-5df906d76462';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae98a388-808e-48e6-9724-f8cb2197c90a';
    $pane->panel = 'footer';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ae98a388-808e-48e6-9724-f8cb2197c90a';
    $display->content['new-ae98a388-808e-48e6-9724-f8cb2197c90a'] = $pane;
    $display->panels['footer'][0] = 'new-ae98a388-808e-48e6-9724-f8cb2197c90a';
    $pane = new stdClass();
    $pane->pid = 'new-32e013a6-7ca7-4b2f-bf5c-0b51384d1189';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotlights-spotlight_teaser_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '32e013a6-7ca7-4b2f-bf5c-0b51384d1189';
    $display->content['new-32e013a6-7ca7-4b2f-bf5c-0b51384d1189'] = $pane;
    $display->panels['footer'][1] = 'new-32e013a6-7ca7-4b2f-bf5c-0b51384d1189';
    $pane = new stdClass();
    $pane->pid = 'new-147e051a-0095-4ed4-8061-21c054a8343e';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-subpage_announcements_events';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '147e051a-0095-4ed4-8061-21c054a8343e';
    $display->content['new-147e051a-0095-4ed4-8061-21c054a8343e'] = $pane;
    $display->panels['footer'][2] = 'new-147e051a-0095-4ed4-8061-21c054a8343e';
    $pane = new stdClass();
    $pane->pid = 'new-3085c4fc-1c05-4857-9e25-92a77c71ce13';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured-featured_entity_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3085c4fc-1c05-4857-9e25-92a77c71ce13';
    $display->content['new-3085c4fc-1c05-4857-9e25-92a77c71ce13'] = $pane;
    $display->panels['header'][0] = 'new-3085c4fc-1c05-4857-9e25-92a77c71ce13';
    $pane = new stdClass();
    $pane->pid = 'new-91c1e8d0-8cde-4d91-9a45-53dc9c100826';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_program_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '91c1e8d0-8cde-4d91-9a45-53dc9c100826';
    $display->content['new-91c1e8d0-8cde-4d91-9a45-53dc9c100826'] = $pane;
    $display->panels['header'][1] = 'new-91c1e8d0-8cde-4d91-9a45-53dc9c100826';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:program:dynamic_3_column'] = $panelizer;

  return $export;
}
