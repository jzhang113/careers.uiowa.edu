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
    'file_view_mode' => 'default',
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_spotlight_teaser_taxonomy_term']['id'] = 'reverse_field_spotlight_teaser_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_spotlight_teaser_taxonomy_term']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_spotlight_teaser_taxonomy_term']['field'] = 'reverse_field_spotlight_teaser_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_spotlight_teaser_taxonomy_term']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'file_view_mode' => 'default',
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
  $handler->display->display_options['arguments']['tid']['relationship'] = 'reverse_field_spotlight_teaser_taxonomy_term';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'file_view_mode' => 'default',
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
  /* Field: Content: Spotlight Type */
  $handler->display->display_options['fields']['field_spotlight_type']['id'] = 'field_spotlight_type';
  $handler->display->display_options['fields']['field_spotlight_type']['table'] = 'field_data_field_spotlight_type';
  $handler->display->display_options['fields']['field_spotlight_type']['field'] = 'field_spotlight_type';
  $handler->display->display_options['fields']['field_spotlight_type']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_spotlight_type']['delta_offset'] = '0';
  $export['spotlights'] = $view;

  return $export;
}