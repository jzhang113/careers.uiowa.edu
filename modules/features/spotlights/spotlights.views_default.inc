<?php
/**
 * @file
 * spotlights.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spotlights_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotlights';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotlights';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotlights';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_spotlight_name']['id'] = 'field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['table'] = 'field_data_field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['field'] = 'field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_name']['element_wrapper_type'] = 'h3';
  /* Field: Content: Title/Position */
  $handler->display->display_options['fields']['field_spotlight_position']['id'] = 'field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['table'] = 'field_data_field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['field'] = 'field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_position']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_spotlight_organization']['id'] = 'field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['table'] = 'field_data_field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['field'] = 'field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_organization']['element_wrapper_type'] = 'strong';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
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
    'spotlight' => 'spotlight',
  );

  /* Display: Spotlight Entity Teaser */
  $handler = $view->new_display('panel_pane', 'Spotlight Entity Teaser', 'spotlight_teaser_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Spotlight';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all Spotlights';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View all Spotlights';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="spotlights">View all Spotlights</a>';
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
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_spotlight_name']['id'] = 'field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['table'] = 'field_data_field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['field'] = 'field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotlight_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_spotlight_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_name']['element_wrapper_type'] = 'h3';
  /* Field: Content: Title/Position */
  $handler->display->display_options['fields']['field_spotlight_position']['id'] = 'field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['table'] = 'field_data_field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['field'] = 'field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_position']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_spotlight_organization']['id'] = 'field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['table'] = 'field_data_field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['field'] = 'field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_organization']['element_wrapper_type'] = 'strong';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More...';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
    'program' => 'program',
  );
  $handler->display->display_options['pane_title'] = 'Spotlights Entity Teaser';
  $handler->display->display_options['pane_description'] = 'Spotlights Entity Teaser';
  $handler->display->display_options['pane_category']['name'] = 'Spotlights';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Spotlights */
  $handler = $view->new_display('panel_pane', 'Spotlights', 'spotlights_panel_pane');
  $handler->display->display_options['display_description'] = 'A full listing of Spotlights';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'spotlights' => 'spotlights',
    'audience' => 0,
    'events' => 0,
    'people_groups' => 0,
    'people_type' => 0,
    'program' => 0,
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
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_spotlight_name']['id'] = 'field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['table'] = 'field_data_field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['field'] = 'field_spotlight_name';
  $handler->display->display_options['fields']['field_spotlight_name']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotlight_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_spotlight_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_name']['element_wrapper_type'] = 'h2';
  /* Field: Content: Title/Position */
  $handler->display->display_options['fields']['field_spotlight_position']['id'] = 'field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['table'] = 'field_data_field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['field'] = 'field_spotlight_position';
  $handler->display->display_options['fields']['field_spotlight_position']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_position']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_spotlight_organization']['id'] = 'field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['table'] = 'field_data_field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['field'] = 'field_spotlight_organization';
  $handler->display->display_options['fields']['field_spotlight_organization']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_organization']['element_wrapper_type'] = 'strong';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More...';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1 Spotlights';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'spotlights' => 'spotlights',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Spotlights';
  $handler->display->display_options['pane_description'] = 'Spotlights';
  $handler->display->display_options['pane_category']['name'] = 'Spotlights';
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
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Spotlight Categories */
  $handler = $view->new_display('panel_pane', 'Spotlight Categories', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Spotlight by Category';
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
    'spotlights' => 'spotlights',
    'audience' => 0,
    'events' => 0,
    'people_groups' => 0,
    'people_type' => 0,
    'program' => 0,
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Spotlight Type (field_spotlight_type) */
  $handler->display->display_options['sorts']['field_spotlight_type_tid']['id'] = 'field_spotlight_type_tid';
  $handler->display->display_options['sorts']['field_spotlight_type_tid']['table'] = 'field_data_field_spotlight_type';
  $handler->display->display_options['sorts']['field_spotlight_type_tid']['field'] = 'field_spotlight_type_tid';
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
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'spotlights';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'spotlights' => 'spotlights',
  );
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Spotlight Categories';
  $handler->display->display_options['pane_description'] = 'Spotlight Categories';
  $handler->display->display_options['pane_category']['name'] = 'Spotlights';
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
  $export['spotlights'] = $view;

  return $export;
}
