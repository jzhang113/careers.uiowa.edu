<?php
/**
 * @file
 * taxonomy_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function taxonomy_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_blocks_nodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy Blocks Nodes';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'page' => 'page',
  );

  /* Display: Program Contact on Node Block */
  $handler = $view->new_display('block', 'Program Contact on Node Block', 'program_contact_node_block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'program' => 'program',
    'audience' => 0,
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
  /* Field: Taxonomy term: Point of Contact */
  $handler->display->display_options['fields']['field_program_poc']['id'] = 'field_program_poc';
  $handler->display->display_options['fields']['field_program_poc']['table'] = 'field_data_field_program_poc';
  $handler->display->display_options['fields']['field_program_poc']['field'] = 'field_program_poc';
  $handler->display->display_options['fields']['field_program_poc']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_program_poc']['label'] = '';
  $handler->display->display_options['fields']['field_program_poc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_poc']['settings'] = array(
    'link' => 1,
  );
  /* Field: Taxonomy term: Program Email */
  $handler->display->display_options['fields']['field_program_email']['id'] = 'field_program_email';
  $handler->display->display_options['fields']['field_program_email']['table'] = 'field_data_field_program_email';
  $handler->display->display_options['fields']['field_program_email']['field'] = 'field_program_email';
  $handler->display->display_options['fields']['field_program_email']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_program_email']['label'] = '';
  $handler->display->display_options['fields']['field_program_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Contact %2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'program' => 'program',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Point of Contact (field_program_poc) */
  $handler->display->display_options['filters']['field_program_poc_target_id']['id'] = 'field_program_poc_target_id';
  $handler->display->display_options['filters']['field_program_poc_target_id']['table'] = 'field_data_field_program_poc';
  $handler->display->display_options['filters']['field_program_poc_target_id']['field'] = 'field_program_poc_target_id';
  $handler->display->display_options['filters']['field_program_poc_target_id']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_program_poc_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_program_poc_target_id']['group'] = 2;
  /* Filter criterion: Taxonomy term: Program Email (field_program_email) */
  $handler->display->display_options['filters']['field_program_email_email']['id'] = 'field_program_email_email';
  $handler->display->display_options['filters']['field_program_email_email']['table'] = 'field_data_field_program_email';
  $handler->display->display_options['filters']['field_program_email_email']['field'] = 'field_program_email_email';
  $handler->display->display_options['filters']['field_program_email_email']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_program_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_program_email_email']['group'] = 2;
  $handler->display->display_options['block_description'] = 'Program Contact on Node Block';

  /* Display: Program SideButton on Node Block */
  $handler = $view->new_display('block', 'Program SideButton on Node Block', 'program_sidebutton_node_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'program' => 'program',
    'audience' => 0,
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
  /* Field: Taxonomy term: Side Button Link */
  $handler->display->display_options['fields']['field_side_button_link']['id'] = 'field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['table'] = 'field_data_field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['field'] = 'field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_side_button_link']['label'] = '';
  $handler->display->display_options['fields']['field_side_button_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_side_button_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'program' => 'program',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Program SideButton on Node Block';
  $export['taxonomy_blocks_nodes'] = $view;

  $view = new view();
  $view->name = 'taxonomy_blocks_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Blocks Terms';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Program Contact Term Block */
  $handler = $view->new_display('block', 'Program Contact Term Block', 'program_contact_term_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Point of Contact */
  $handler->display->display_options['fields']['field_program_poc']['id'] = 'field_program_poc';
  $handler->display->display_options['fields']['field_program_poc']['table'] = 'field_data_field_program_poc';
  $handler->display->display_options['fields']['field_program_poc']['field'] = 'field_program_poc';
  $handler->display->display_options['fields']['field_program_poc']['label'] = '';
  $handler->display->display_options['fields']['field_program_poc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_poc']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_program_poc']['settings'] = array(
    'view_mode' => 'point_of_contact',
    'links' => 1,
  );
  /* Field: Taxonomy term: Program Email */
  $handler->display->display_options['fields']['field_program_email']['id'] = 'field_program_email';
  $handler->display->display_options['fields']['field_program_email']['table'] = 'field_data_field_program_email';
  $handler->display->display_options['fields']['field_program_email']['field'] = 'field_program_email';
  $handler->display->display_options['fields']['field_program_email']['label'] = '';
  $handler->display->display_options['fields']['field_program_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Contact %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'program' => 'program',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Point of Contact (field_program_poc) */
  $handler->display->display_options['filters']['field_program_poc_target_id']['id'] = 'field_program_poc_target_id';
  $handler->display->display_options['filters']['field_program_poc_target_id']['table'] = 'field_data_field_program_poc';
  $handler->display->display_options['filters']['field_program_poc_target_id']['field'] = 'field_program_poc_target_id';
  $handler->display->display_options['filters']['field_program_poc_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_program_poc_target_id']['group'] = 1;
  /* Filter criterion: Taxonomy term: Program Email (field_program_email) */
  $handler->display->display_options['filters']['field_program_email_email']['id'] = 'field_program_email_email';
  $handler->display->display_options['filters']['field_program_email_email']['table'] = 'field_data_field_program_email';
  $handler->display->display_options['filters']['field_program_email_email']['field'] = 'field_program_email_email';
  $handler->display->display_options['filters']['field_program_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_program_email_email']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Program Contact Term Block';

  /* Display: Side Button Term Block */
  $handler = $view->new_display('block', 'Side Button Term Block', 'sidebutton_term_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Side Button Link */
  $handler->display->display_options['fields']['field_side_button_link']['id'] = 'field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['table'] = 'field_data_field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['field'] = 'field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['label'] = '';
  $handler->display->display_options['fields']['field_side_button_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_side_button_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
    'program' => 'program',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Side Button Link (field_side_button_link:url) */
  $handler->display->display_options['filters']['field_side_button_link_url']['id'] = 'field_side_button_link_url';
  $handler->display->display_options['filters']['field_side_button_link_url']['table'] = 'field_data_field_side_button_link';
  $handler->display->display_options['filters']['field_side_button_link_url']['field'] = 'field_side_button_link_url';
  $handler->display->display_options['filters']['field_side_button_link_url']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Side Button Term Block';
  $export['taxonomy_blocks_terms'] = $view;

  return $export;
}
