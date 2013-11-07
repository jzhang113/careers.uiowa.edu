<?php
/**
 * @file
 * inthenews.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inthenews_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'inthenews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'In The News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_published_date_1']['id'] = 'field_published_date_1';
  $handler->display->display_options['fields']['field_published_date_1']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_published_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date_1']['settings'] = array(
    'format_type' => 'yyyymm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Published Date (field_published_date) */
  $handler->display->display_options['sorts']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['sorts']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['order'] = 'DESC';
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
    'news_content_type' => 'news_content_type',
  );

  /* Display: In The News */
  $handler = $view->new_display('panel_pane', 'In The News', 'inthenews');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_published_date_1']['id'] = 'field_published_date_1';
  $handler->display->display_options['fields']['field_published_date_1']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_published_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Published Date (field_published_date) */
  $handler->display->display_options['arguments']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['arguments']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['arguments']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['arguments']['field_published_date_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_published_date_value']['title'] = 'News from %1';
  $handler->display->display_options['arguments']['field_published_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_published_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_published_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_published_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_published_date_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_published_date_value']['use_fromto'] = 'no';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_published_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Published Date (field_published_date)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: In The News Monthly Links */
  $handler = $view->new_display('panel_pane', 'In The News Monthly Links', 'inthenews_month_links');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Monthly Archive';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'inthenews';
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
  /* Field: Published Date YYYYMM */
  $handler->display->display_options['fields']['field_published_date_1']['id'] = 'field_published_date_1';
  $handler->display->display_options['fields']['field_published_date_1']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['ui_name'] = 'Published Date YYYYMM';
  $handler->display->display_options['fields']['field_published_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_published_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date_1']['settings'] = array(
    'format_type' => 'yyyymm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_published_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_published_date']['alter']['text'] = '[field_published_date] <span class="summary-count">[nid]</span>';
  $handler->display->display_options['fields']['field_published_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_published_date']['alter']['path'] = 'inthenews/[field_published_date_1]';
  $handler->display->display_options['fields']['field_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_title'] = 'In The News Monthly Links';
  $export['inthenews'] = $view;

  return $export;
}
