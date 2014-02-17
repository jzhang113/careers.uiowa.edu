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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  $handler->display->display_options['fields']['field_people_picture']['alter']['make_link'] = TRUE;
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
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'people:people_reorder_page';
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
    'people_groups' => 'people_groups',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'People Group Term Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Groups */
  $handler = $view->new_display('panel_pane', 'Groups', 'people_groups_panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups';
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
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'staff';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;

  /* Display: Reorder People */
  $handler = $view->new_display('page', 'Reorder People', 'people_reorder_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder People List';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_people_email' => 'field_people_email',
    'field_people_picture' => 'field_people_picture',
    'title' => 'title',
    'field_people_position' => 'field_people_position',
    'field_people_responsibilities' => 'field_people_responsibilities',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  $handler->display->display_options['fields']['field_people_picture']['alter']['make_link'] = TRUE;
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
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All Staff';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['path'] = 'admin/config/people/%';
  $export['people'] = $view;

  return $export;
}
