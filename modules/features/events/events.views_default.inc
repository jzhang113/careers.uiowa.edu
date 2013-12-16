<?php
/**
 * @file
 * events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_views_default_views() {
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
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
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_mcf_date']['id'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['field'] = 'field_mcf_date';
  $handler->display->display_options['fields']['field_mcf_date']['label'] = '';
  $handler->display->display_options['fields']['field_mcf_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date']['alter']['text'] = '<i class="fa fa-clock-o"></i> [field_mcf_date]';
  $handler->display->display_options['fields']['field_mcf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['element_wrapper_class'] = 'events-date';
  $handler->display->display_options['fields']['field_mcf_date']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_mcf_location']['alter']['text'] = '<i class="fa fa-map-marker"></i> [field_mcf_location]';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['preserve_tags'] = '<i>';
  $handler->display->display_options['fields']['field_mcf_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_location']['element_wrapper_class'] = 'events-location';
  $handler->display->display_options['fields']['field_mcf_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['type'] = 'text_plain';
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['delta_offset'] = '0';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Teaser List */
  $handler = $view->new_display('panel_pane', 'Teaser List', 'events_teaser_list');

  /* Display: Events Listing */
  $handler = $view->new_display('panel_pane', 'Events Listing', 'events_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
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
  $handler->display->display_options['fields']['field_mcf_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_date']['alter']['text'] = '<i class="fa fa-clock-o"></i> [field_mcf_date]';
  $handler->display->display_options['fields']['field_mcf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_date']['element_wrapper_class'] = 'events-date';
  $handler->display->display_options['fields']['field_mcf_date']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_mcf_location']['alter']['text'] = '<i class="fa fa-map-marker"></i> [field_mcf_location]';
  $handler->display->display_options['fields']['field_mcf_location']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mcf_location']['alter']['preserve_tags'] = '<i>';
  $handler->display->display_options['fields']['field_mcf_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mcf_location']['element_wrapper_class'] = 'events-location';
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
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Category (field_event_category) */
  $handler->display->display_options['arguments']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['arguments']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['arguments']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['arguments']['field_event_category_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_event_category_tid']['title'] = '%1 Events';
  $handler->display->display_options['arguments']['field_event_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_event_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_event_category_tid']['validate_options']['vocabularies'] = array(
    'events' => 'events',
  );
  $handler->display->display_options['arguments']['field_event_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_event_category_tid']['validate_options']['transform'] = TRUE;
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
  $handler->display->display_options['filters']['field_mcf_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_mcf_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mcf_date_value']['expose']['operator_id'] = 'field_mcf_date_value_op';
  $handler->display->display_options['filters']['field_mcf_date_value']['expose']['operator'] = 'field_mcf_date_value_op';
  $handler->display->display_options['filters']['field_mcf_date_value']['expose']['identifier'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_mcf_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['argument_input'] = array(
    'field_event_category_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Category (field_event_category)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Event Categories */
  $handler = $view->new_display('panel_pane', 'Event Categories', 'events_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Categories';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Field: Content: Event Category */
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_event_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['alter']['text'] = '[field_event_category] <span class="summary-count">[nid]</span>';
  $handler->display->display_options['fields']['field_event_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['alter']['path'] = 'events/[field_event_category]';
  $handler->display->display_options['fields']['field_event_category']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_category']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Category (field_event_category) */
  $handler->display->display_options['sorts']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['sorts']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['sorts']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['sorts']['field_event_category_tid']['order'] = 'DESC';
  $export['events'] = $view;

  return $export;
}
