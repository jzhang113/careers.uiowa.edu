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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_people_type']['id'] = 'field_people_type';
  $handler->display->display_options['fields']['field_people_type']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['fields']['field_people_type']['field'] = 'field_people_type';
  $handler->display->display_options['fields']['field_people_type']['label'] = '';
  $handler->display->display_options['fields']['field_people_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_type']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['field_people_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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

  /* Display: All Profiles */
  $handler = $view->new_display('panel_pane', 'All Profiles', 'people_panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'people_type' => 'people_type',
    'audience' => 0,
    'events' => 0,
    'people_groups' => 0,
    'program' => 0,
    'spotlights' => 0,
    'student_status' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_people_type']['id'] = 'field_people_type';
  $handler->display->display_options['fields']['field_people_type']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['fields']['field_people_type']['field'] = 'field_people_type';
  $handler->display->display_options['fields']['field_people_type']['label'] = '';
  $handler->display->display_options['fields']['field_people_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_type']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['field_people_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'people:people_reorder_page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All Staff';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people_type' => 'people_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['pane_title'] = 'All People Profiles';
  $handler->display->display_options['pane_description'] = 'All People Profiles';
  $handler->display->display_options['pane_category']['name'] = 'People';
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
      'label' => 'People Group Term Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Professional Staff */
  $handler = $view->new_display('panel_pane', 'Professional Staff', 'people_panel_pane_professional');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Professional Staff';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'people_groups' => 'people_groups',
    'audience' => 0,
    'events' => 0,
    'people_type' => 0,
    'program' => 0,
    'spotlights' => 0,
    'student_status' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Degree */
  $handler->display->display_options['fields']['field_people_degree']['id'] = 'field_people_degree';
  $handler->display->display_options['fields']['field_people_degree']['table'] = 'field_data_field_people_degree';
  $handler->display->display_options['fields']['field_people_degree']['field'] = 'field_people_degree';
  $handler->display->display_options['fields']['field_people_degree']['label'] = '';
  $handler->display->display_options['fields']['field_people_degree']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_degree']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_people_degree']['alter']['text'] = ', [field_people_degree]';
  $handler->display->display_options['fields']['field_people_degree']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][field_people_degree]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'people:people_reorder_page_professional';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All Staff';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Professional Staff - %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people_groups' => 'people_groups',
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
    'people' => 'people',
  );
  /* Filter criterion: Content: Type (field_people_type) */
  $handler->display->display_options['filters']['field_people_type_tid']['id'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['filters']['field_people_type_tid']['field'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_people_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_type_tid']['vocabulary'] = 'people_type';
  $handler->display->display_options['pane_title'] = 'Professional Staff';
  $handler->display->display_options['pane_description'] = 'Professional Staff';
  $handler->display->display_options['pane_category']['name'] = 'People';
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
      'panel' => '1',
      'fixed' => '',
      'label' => 'People Group Term Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Peer Advisors */
  $handler = $view->new_display('panel_pane', 'Peer Advisors', 'people_panel_pane_student');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Peer Advisors';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Degree */
  $handler->display->display_options['fields']['field_people_degree']['id'] = 'field_people_degree';
  $handler->display->display_options['fields']['field_people_degree']['table'] = 'field_data_field_people_degree';
  $handler->display->display_options['fields']['field_people_degree']['field'] = 'field_people_degree';
  $handler->display->display_options['fields']['field_people_degree']['label'] = '';
  $handler->display->display_options['fields']['field_people_degree']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_degree']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_people_degree']['alter']['text'] = ', [field_people_degree]';
  $handler->display->display_options['fields']['field_people_degree']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][field_people_degree]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'people:people_reorder_page_student';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'people' => 'people',
  );
  /* Filter criterion: Content: Type (field_people_type) */
  $handler->display->display_options['filters']['field_people_type_tid']['id'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['filters']['field_people_type_tid']['field'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['value'] = array(
    40 => '40',
  );
  $handler->display->display_options['filters']['field_people_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_type_tid']['vocabulary'] = 'people_type';
  $handler->display->display_options['pane_title'] = 'Peer Advisors';
  $handler->display->display_options['pane_description'] = 'Peer Advisors';
  $handler->display->display_options['pane_category']['name'] = 'People';
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
      'type' => 'none',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'People Group Term Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Profile Type List */
  $handler = $view->new_display('panel_pane', 'Profile Type List', 'people_type_panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff by Type';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'people_type' => 'people_type',
    'audience' => 0,
    'events' => 0,
    'people_groups' => 0,
    'program' => 0,
    'spotlights' => 0,
    'student_status' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_featured_title']['id'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['table'] = 'field_data_field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['field'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['label'] = '';
  $handler->display->display_options['fields']['field_featured_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type (field_people_type) */
  $handler->display->display_options['sorts']['field_people_type_tid']['id'] = 'field_people_type_tid';
  $handler->display->display_options['sorts']['field_people_type_tid']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['sorts']['field_people_type_tid']['field'] = 'field_people_type_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'people';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'people_type' => 'people_type',
  );
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Profile Type List';
  $handler->display->display_options['pane_description'] = 'Profile Type List';
  $handler->display->display_options['pane_category']['name'] = 'People';
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

  /* Display: Staff Groups List */
  $handler = $view->new_display('panel_pane', 'Staff Groups List', 'people_groups_panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff Groups';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'people_groups' => 'people_groups',
    'audience' => 0,
    'events' => 0,
    'groups' => 0,
    'people_type' => 0,
    'spotlights' => 0,
    'tags' => 0,
    'testimonials' => 0,
    'video_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_featured_title']['id'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['table'] = 'field_data_field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['field'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['label'] = '';
  $handler->display->display_options['fields']['field_featured_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Groups (field_people_groups) */
  $handler->display->display_options['sorts']['field_people_groups_tid']['id'] = 'field_people_groups_tid';
  $handler->display->display_options['sorts']['field_people_groups_tid']['table'] = 'field_data_field_people_groups';
  $handler->display->display_options['sorts']['field_people_groups_tid']['field'] = 'field_people_groups_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'people/professional-staff';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'people_groups' => 'people_groups',
  );
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'people' => 'people',
  );
  /* Filter criterion: Content: Type (field_people_type) */
  $handler->display->display_options['filters']['field_people_type_tid']['id'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['filters']['field_people_type_tid']['field'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_people_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_type_tid']['vocabulary'] = 'people_type';
  $handler->display->display_options['pane_title'] = 'Staff Groups List';
  $handler->display->display_options['pane_description'] = 'Staff Groups List';
  $handler->display->display_options['pane_category']['name'] = 'People';
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

  /* Display: Reorder People */
  $handler = $view->new_display('page', 'Reorder People', 'people_reorder_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder People';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_people_email' => 'field_people_email',
    'field_people_picture' => 'field_people_picture',
    'title' => 'title',
    'field_people_position' => 'field_people_position',
    'field_people_responsibilities' => 'field_people_responsibilities',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_responsibilities' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Update';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'people' => 'people',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_people_exclude_value']['id'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['table'] = 'field_data_field_people_exclude';
  $handler->display->display_options['filters']['field_people_exclude_value']['field'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'admin/config/people';

  /* Display: Reorder Professional Staff */
  $handler = $view->new_display('page', 'Reorder Professional Staff', 'people_reorder_page_professional');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder Professional Staff';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_people_email' => 'field_people_email',
    'field_people_picture' => 'field_people_picture',
    'title' => 'title',
    'field_people_position' => 'field_people_position',
    'field_people_responsibilities' => 'field_people_responsibilities',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_responsibilities' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Update';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'people' => 'people',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_people_exclude_value']['id'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['table'] = 'field_data_field_people_exclude';
  $handler->display->display_options['filters']['field_people_exclude_value']['field'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Type (field_people_type) */
  $handler->display->display_options['filters']['field_people_type_tid']['id'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['filters']['field_people_type_tid']['field'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_people_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_type_tid']['vocabulary'] = 'people_type';
  $handler->display->display_options['path'] = 'admin/config/people/professional-staff';

  /* Display: Reorder Student Staff */
  $handler = $view->new_display('page', 'Reorder Student Staff', 'people_reorder_page_student');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder Peer Advisors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_people_email' => 'field_people_email',
    'field_people_picture' => 'field_people_picture',
    'title' => 'title',
    'field_people_position' => 'field_people_position',
    'field_people_responsibilities' => 'field_people_responsibilities',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_people_responsibilities' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_people_picture']['id'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['table'] = 'field_data_field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['field'] = 'field_people_picture';
  $handler->display->display_options['fields']['field_people_picture']['label'] = '';
  $handler->display->display_options['fields']['field_people_picture']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_people_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_people_picture']['settings'] = array(
    'file_view_mode' => 'people_list',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['element_wrapper_type'] = 'strong';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Update';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'people' => 'people',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_people_exclude_value']['id'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['table'] = 'field_data_field_people_exclude';
  $handler->display->display_options['filters']['field_people_exclude_value']['field'] = 'field_people_exclude_value';
  $handler->display->display_options['filters']['field_people_exclude_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Type (field_people_type) */
  $handler->display->display_options['filters']['field_people_type_tid']['id'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['table'] = 'field_data_field_people_type';
  $handler->display->display_options['filters']['field_people_type_tid']['field'] = 'field_people_type_tid';
  $handler->display->display_options['filters']['field_people_type_tid']['value'] = array(
    40 => '40',
  );
  $handler->display->display_options['filters']['field_people_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_type_tid']['vocabulary'] = 'people_type';
  $handler->display->display_options['path'] = 'admin/config/people/student-staff';
  $export['people'] = $view;

  return $export;
}
