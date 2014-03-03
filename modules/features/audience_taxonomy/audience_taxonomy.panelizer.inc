<?php
/**
 * @file
 * audience_taxonomy.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function audience_taxonomy_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:audience:default';
  $panelizer->title = 'Full-Width Body';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'audience';
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
  $display->uuid = 'b0740351-b248-4309-bb2f-6a823b0c049d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66f3fc4e-8919-4155-9669-943f85d9fd01';
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
    $pane->uuid = '66f3fc4e-8919-4155-9669-943f85d9fd01';
    $display->content['new-66f3fc4e-8919-4155-9669-943f85d9fd01'] = $pane;
    $display->panels['contentmain'][0] = 'new-66f3fc4e-8919-4155-9669-943f85d9fd01';
    $pane = new stdClass();
    $pane->pid = 'new-45cca7fe-f0e4-4cf6-8e33-4d5e89ae09f9';
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
    $pane->uuid = '45cca7fe-f0e4-4cf6-8e33-4d5e89ae09f9';
    $display->content['new-45cca7fe-f0e4-4cf6-8e33-4d5e89ae09f9'] = $pane;
    $display->panels['footer'][0] = 'new-45cca7fe-f0e4-4cf6-8e33-4d5e89ae09f9';
    $pane = new stdClass();
    $pane->pid = 'new-b18c685d-698e-42fd-885c-61eea38ce082';
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
    $pane->uuid = 'b18c685d-698e-42fd-885c-61eea38ce082';
    $display->content['new-b18c685d-698e-42fd-885c-61eea38ce082'] = $pane;
    $display->panels['footer'][1] = 'new-b18c685d-698e-42fd-885c-61eea38ce082';
    $pane = new stdClass();
    $pane->pid = 'new-95345c2c-8a4c-478b-9b77-38125b0e80a2';
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
    $pane->uuid = '95345c2c-8a4c-478b-9b77-38125b0e80a2';
    $display->content['new-95345c2c-8a4c-478b-9b77-38125b0e80a2'] = $pane;
    $display->panels['header'][0] = 'new-95345c2c-8a4c-478b-9b77-38125b0e80a2';
    $pane = new stdClass();
    $pane->pid = 'new-fea4aad4-510f-42ef-a367-176ceb9db974';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_audience_links';
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
    $pane->uuid = 'fea4aad4-510f-42ef-a367-176ceb9db974';
    $display->content['new-fea4aad4-510f-42ef-a367-176ceb9db974'] = $pane;
    $display->panels['header'][1] = 'new-fea4aad4-510f-42ef-a367-176ceb9db974';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:audience:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:audience:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'audience';
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
  $display->uuid = 'e5797e1e-565a-46f0-ad83-ad509dbc968e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e161ff20-af1f-4ae9-8884-744d671618be';
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
    $pane->uuid = 'e161ff20-af1f-4ae9-8884-744d671618be';
    $display->content['new-e161ff20-af1f-4ae9-8884-744d671618be'] = $pane;
    $display->panels['footer'][0] = 'new-e161ff20-af1f-4ae9-8884-744d671618be';
    $pane = new stdClass();
    $pane->pid = 'new-97cbc1cf-8ae5-4264-861b-d4df2974c5dc';
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
    $pane->uuid = '97cbc1cf-8ae5-4264-861b-d4df2974c5dc';
    $display->content['new-97cbc1cf-8ae5-4264-861b-d4df2974c5dc'] = $pane;
    $display->panels['footer'][1] = 'new-97cbc1cf-8ae5-4264-861b-d4df2974c5dc';
    $pane = new stdClass();
    $pane->pid = 'new-788a6bda-b258-4908-aa5f-fd2792da34d6';
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
    $pane->uuid = '788a6bda-b258-4908-aa5f-fd2792da34d6';
    $display->content['new-788a6bda-b258-4908-aa5f-fd2792da34d6'] = $pane;
    $display->panels['footer'][2] = 'new-788a6bda-b258-4908-aa5f-fd2792da34d6';
    $pane = new stdClass();
    $pane->pid = 'new-c6aa0071-2dca-48f8-b497-a0c7d956cb63';
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
    $pane->uuid = 'c6aa0071-2dca-48f8-b497-a0c7d956cb63';
    $display->content['new-c6aa0071-2dca-48f8-b497-a0c7d956cb63'] = $pane;
    $display->panels['header'][0] = 'new-c6aa0071-2dca-48f8-b497-a0c7d956cb63';
    $pane = new stdClass();
    $pane->pid = 'new-498aea06-5826-4503-85a1-5f7ee2bc941e';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_audience_links';
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
    $pane->uuid = '498aea06-5826-4503-85a1-5f7ee2bc941e';
    $display->content['new-498aea06-5826-4503-85a1-5f7ee2bc941e'] = $pane;
    $display->panels['header'][1] = 'new-498aea06-5826-4503-85a1-5f7ee2bc941e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:audience:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:audience:dynamic_3_column';
  $panelizer->title = 'Dynamic 3-Column';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'audience';
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
  $display->uuid = 'c55e8656-e21f-4213-8d7d-15c6ca22c4b8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5eb459a9-4e35-4cf3-96e8-bd14bbc4ee03';
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
    $pane->uuid = '5eb459a9-4e35-4cf3-96e8-bd14bbc4ee03';
    $display->content['new-5eb459a9-4e35-4cf3-96e8-bd14bbc4ee03'] = $pane;
    $display->panels['footer'][0] = 'new-5eb459a9-4e35-4cf3-96e8-bd14bbc4ee03';
    $pane = new stdClass();
    $pane->pid = 'new-9beab3c2-4628-4381-8656-5e464958b60c';
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
    $pane->uuid = '9beab3c2-4628-4381-8656-5e464958b60c';
    $display->content['new-9beab3c2-4628-4381-8656-5e464958b60c'] = $pane;
    $display->panels['footer'][1] = 'new-9beab3c2-4628-4381-8656-5e464958b60c';
    $pane = new stdClass();
    $pane->pid = 'new-73168b7d-749a-49d0-be93-748f72f75b88';
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
    $pane->uuid = '73168b7d-749a-49d0-be93-748f72f75b88';
    $display->content['new-73168b7d-749a-49d0-be93-748f72f75b88'] = $pane;
    $display->panels['footer'][2] = 'new-73168b7d-749a-49d0-be93-748f72f75b88';
    $pane = new stdClass();
    $pane->pid = 'new-c02e915a-45c2-4bbc-8f12-38beed0ff8c7';
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
    $pane->uuid = 'c02e915a-45c2-4bbc-8f12-38beed0ff8c7';
    $display->content['new-c02e915a-45c2-4bbc-8f12-38beed0ff8c7'] = $pane;
    $display->panels['header'][0] = 'new-c02e915a-45c2-4bbc-8f12-38beed0ff8c7';
    $pane = new stdClass();
    $pane->pid = 'new-9ebfefe5-3a2e-43ae-b78e-4f982df3cb2b';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_audience_links';
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
    $pane->uuid = '9ebfefe5-3a2e-43ae-b78e-4f982df3cb2b';
    $display->content['new-9ebfefe5-3a2e-43ae-b78e-4f982df3cb2b'] = $pane;
    $display->panels['header'][1] = 'new-9ebfefe5-3a2e-43ae-b78e-4f982df3cb2b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:audience:dynamic_3_column'] = $panelizer;

  return $export;
}
