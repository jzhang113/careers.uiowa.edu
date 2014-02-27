<?php
/**
 * @file
 * careers_feeds_mastercal.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function careers_feeds_mastercal_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No events';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events scheduled at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_mcf_date']['id'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['field'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_mcf_location']['id'] = 'field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['table'] = 'field_data_field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['field'] = 'field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['text'] = '[field_mcf_location]';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['preserve_tags'] = '<i>';
  $handler->display->display_options['fields']['field_mcf_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['type'] = 'text_plain';
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_mcf_event_category']['id'] = 'field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['table'] = 'field_data_field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['field'] = 'field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_event_category']['element_label_colon'] = FALSE;
  /* Field: Date Short Format */
  $handler->display->display_options['fields']['field_mcf_date_1']['id'] = 'field_mcf_date_1';
  $handler->display->display_options['fields']['field_mcf_date_1']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date_1']['field'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date_1']['ui_name'] = 'Date Short Format';
  $handler->display->display_options['fields']['field_mcf_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Date -  start date (field_mcf_date) */
  $handler->display->display_options['sorts']['field_mcf_date_value']['id'] = 'field_mcf_date_value';
  $handler->display->display_options['sorts']['field_mcf_date_value']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['sorts']['field_mcf_date_value']['field'] = 'field_mcf_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_calendar_event' => 'master_calendar_event',
  );

  /* Display: Front Page Events */
  $handler = $view->new_display('panel_pane', 'Front Page Events', 'events_front_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="events">View all Events</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_mcf_date']['id'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['field'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_mcf_location']['id'] = 'field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['table'] = 'field_data_field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['field'] = 'field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['text'] = '[field_mcf_location]';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['preserve_tags'] = '<i>';
  $handler->display->display_options['fields']['field_mcf_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['type'] = 'text_plain';
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_mcf_event_category']['id'] = 'field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['table'] = 'field_data_field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['field'] = 'field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_event_category']['element_label_colon'] = FALSE;
  /* Field: Date Short Format */
  $handler->display->display_options['fields']['field_mcf_date_1']['id'] = 'field_mcf_date_1';
  $handler->display->display_options['fields']['field_mcf_date_1']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date_1']['field'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date_1']['ui_name'] = 'Date Short Format';
  $handler->display->display_options['fields']['field_mcf_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_calendar_event' => 'master_calendar_event',
  );
  /* Filter criterion: Content: Date -  start date (field_mcf_date) */
  $handler->display->display_options['filters']['field_mcf_date_value']['id'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['filters']['field_mcf_date_value']['field'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_mcf_date_value']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Front Page Events';
  $handler->display->display_options['pane_description'] = 'Front Page Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Events Panel Page */
  $handler = $view->new_display('panel_pane', 'Events Panel Page', 'events_panel_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'events' => 'events',
    'audience' => 0,
    'people_groups' => 0,
    'people_type' => 0,
    'program' => 0,
    'spotlights' => 0,
    'student_status' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_mcf_date']['id'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['field'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_mcf_location']['id'] = 'field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['table'] = 'field_data_field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['field'] = 'field_mcf_location';
  $handler->display->display_options['fields']['field_mcf_location']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['text'] = '[field_mcf_location]';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['type'] = 'text_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_mcf_event_category']['id'] = 'field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['table'] = 'field_data_field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['field'] = 'field_mcf_event_category';
  $handler->display->display_options['fields']['field_mcf_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1 Events';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'events' => 'events',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_calendar_event' => 'master_calendar_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_mcf_date) */
  $handler->display->display_options['filters']['field_mcf_date_value_1']['id'] = 'field_mcf_date_value_1';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['field'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_mcf_date_value_1']['expose']['operator_id'] = 'field_mcf_date_value_1_op';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['expose']['label'] = 'Future Events';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['expose']['operator'] = 'field_mcf_date_value_1_op';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['expose']['identifier'] = 'field_mcf_date_value_1';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_mcf_date_value_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_mcf_date_value_1']['group_info']['label'] = 'Date -  start date (field_mcf_date)';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['group_info']['identifier'] = 'field_mcf_date_value_1';
  $handler->display->display_options['filters']['field_mcf_date_value_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_mcf_date_value_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_mcf_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Events Panel Page';
  $handler->display->display_options['pane_description'] = 'Events Panel Page';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Events by Term */
  $handler = $view->new_display('panel_pane', 'Events by Term', 'events_term');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'audience' => 'audience',
    'program' => 'program',
    'events' => 0,
    'people_groups' => 0,
    'people_type' => 0,
    'spotlights' => 0,
    'student_status' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
    'program' => 'program',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_calendar_event' => 'master_calendar_event',
  );
  /* Filter criterion: Content: Date -  start date (field_mcf_date) */
  $handler->display->display_options['filters']['field_mcf_date_value']['id'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['filters']['field_mcf_date_value']['field'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_mcf_date_value']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Events by Term';
  $handler->display->display_options['pane_description'] = 'Events by Term';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Event Categories */
  $handler = $view->new_display('panel_pane', 'Event Categories', 'event_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events by Category';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'events' => 'events',
    'audience' => 0,
    'people_groups' => 0,
    'people_type' => 0,
    'program' => 0,
    'spotlights' => 0,
    'student_status' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'events';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'events' => 'events',
  );
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Event Categories';
  $handler->display->display_options['pane_description'] = 'Event Categories';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['events'] = $view;

  return $export;
}
