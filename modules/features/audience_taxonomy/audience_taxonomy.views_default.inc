<?php
/**
 * @file
 * audience_taxonomy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function audience_taxonomy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Blocks';
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
  /* Field: Taxonomy term: Side Button Link */
  $handler->display->display_options['fields']['field_side_button_link']['id'] = 'field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['table'] = 'field_data_field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['field'] = 'field_side_button_link';
  $handler->display->display_options['fields']['field_side_button_link']['label'] = '';
  $handler->display->display_options['fields']['field_side_button_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_side_button_link']['click_sort_column'] = 'url';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
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

  /* Display: SIdebar Button */
  $handler = $view->new_display('block', 'SIdebar Button', 'sidebar_button');
  $export['taxonomy_blocks'] = $view;

  return $export;
}
