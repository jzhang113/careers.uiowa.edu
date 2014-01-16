<?php
/**
 * @file
 * people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People';
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
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_people_email']['id'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['table'] = 'field_data_field_people_email';
  $handler->display->display_options['fields']['field_people_email']['field'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_people_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_email']['type'] = 'email_plain';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'image_style' => 'people_profile_100',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'mailto:"[field_people_email]"';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  /* Field: Content: Responsibilities */
  $handler->display->display_options['fields']['field_people_responsibilities']['id'] = 'field_people_responsibilities';
  $handler->display->display_options['fields']['field_people_responsibilities']['table'] = 'field_data_field_people_responsibilities';
  $handler->display->display_options['fields']['field_people_responsibilities']['field'] = 'field_people_responsibilities';
  $handler->display->display_options['fields']['field_people_responsibilities']['label'] = '';
  $handler->display->display_options['fields']['field_people_responsibilities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_responsibilities']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_people_responsibilities']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Groups (field_people_groups) */
  $handler->display->display_options['arguments']['field_people_groups_tid']['id'] = 'field_people_groups_tid';
  $handler->display->display_options['arguments']['field_people_groups_tid']['table'] = 'field_data_field_people_groups';
  $handler->display->display_options['arguments']['field_people_groups_tid']['field'] = 'field_people_groups_tid';
  $handler->display->display_options['arguments']['field_people_groups_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_people_groups_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_people_groups_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_people_groups_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_people_groups_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_people_groups_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_people_groups_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_people_groups_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_people_groups_tid']['validate_options']['vocabularies'] = array(
    'groups' => 'groups',
  );
  $handler->display->display_options['arguments']['field_people_groups_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_people_groups_tid']['validate_options']['transform'] = TRUE;
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
    'people' => 'people',
  );
  /* Filter criterion: Content: Exclude from directory? (field_people_exclude) */
  $handler->display->display_options['filters']['field_people_exclude_value']['id'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['table'] = 'field_data_field_people_exclude';
  $handler->display->display_options['filters']['field_people_exclude_value']['field'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['value'] = array(
    0 => '0',
  );

  /* Display: People Content Pane */
  $handler = $view->new_display('panel_pane', 'People Content Pane', 'people_panel_pane');
  $handler->display->display_options['argument_input'] = array(
    'field_people_groups_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Groups (field_people_groups)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Groups */
  $handler = $view->new_display('panel_pane', 'Groups', 'people_groups_panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Field: Content: Groups */
  $handler->display->display_options['fields']['field_people_groups']['id'] = 'field_people_groups';
  $handler->display->display_options['fields']['field_people_groups']['table'] = 'field_data_field_people_groups';
  $handler->display->display_options['fields']['field_people_groups']['field'] = 'field_people_groups';
  $handler->display->display_options['fields']['field_people_groups']['label'] = '';
  $handler->display->display_options['fields']['field_people_groups']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_people_groups']['alter']['text'] = '[field_people_groups] <span class="summary-count">[nid]</span>';
  $handler->display->display_options['fields']['field_people_groups']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_people_groups']['alter']['path'] = 'staff/[field_people_groups]';
  $handler->display->display_options['fields']['field_people_groups']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_people_groups']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_people_groups']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_groups']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_people_groups']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Groups (field_people_groups) */
  $handler->display->display_options['sorts']['field_people_groups_tid']['id'] = 'field_people_groups_tid';
  $handler->display->display_options['sorts']['field_people_groups_tid']['table'] = 'field_data_field_people_groups';
  $handler->display->display_options['sorts']['field_people_groups_tid']['field'] = 'field_people_groups_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['people'] = $view;

  return $export;
}
