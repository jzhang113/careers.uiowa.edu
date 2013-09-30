<?php
/**
 * @file
 * people_view_and_panel_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function people_view_and_panel_page_views_default_views() {
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
  $handler->display->display_options['title'] = 'Meet The Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Filter criterion: Content: Group(s) (field_people_group) */
  $handler->display->display_options['filters']['field_people_group_value']['id'] = 'field_people_group_value';
  $handler->display->display_options['filters']['field_people_group_value']['table'] = 'field_data_field_people_group';
  $handler->display->display_options['filters']['field_people_group_value']['field'] = 'field_people_group_value';
  $handler->display->display_options['filters']['field_people_group_value']['value'] = array(
    'staff' => 'staff',
  );

  /* Display: Meet The Staff */
  $handler = $view->new_display('panel_pane', 'Meet The Staff', 'panel_pane_staff');

  /* Display: Peer Advisors */
  $handler = $view->new_display('panel_pane', 'Peer Advisors', 'panel_pane_peer_advisors');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Peer Advisors';
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
  /* Filter criterion: Content: Group(s) (field_people_group) */
  $handler->display->display_options['filters']['field_people_group_value']['id'] = 'field_people_group_value';
  $handler->display->display_options['filters']['field_people_group_value']['table'] = 'field_data_field_people_group';
  $handler->display->display_options['filters']['field_people_group_value']['field'] = 'field_people_group_value';
  $handler->display->display_options['filters']['field_people_group_value']['value'] = array(
    'peer_advisor' => 'peer_advisor',
  );
  $export['people'] = $view;

  return $export;
}
