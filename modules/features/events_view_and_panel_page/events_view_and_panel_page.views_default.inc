<?php
/**
 * @file
 * events_view_and_panel_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_view_and_panel_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'xml';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['xml_file'] = 'http://data.its.uiowa.edu/mastercal/custom?calendar=73&enddate=12-31-2014';
  $handler->display->display_options['query']['options']['row_xpath'] = 'event';
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: EventUrl: Markup */
  $handler->display->display_options['fields']['markup']['id'] = 'markup';
  $handler->display->display_options['fields']['markup']['table'] = 'xml';
  $handler->display->display_options['fields']['markup']['field'] = 'markup';
  $handler->display->display_options['fields']['markup']['label'] = '';
  $handler->display->display_options['fields']['markup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['markup']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['markup']['xpath_selector'] = 'EventUrl';
  $handler->display->display_options['fields']['markup']['multiple'] = 0;
  $handler->display->display_options['fields']['markup']['format'] = 'filtered_html';
  /* Field: EventTitle: Text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'xml';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['text']['alter']['path'] = '[markup]';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['text']['xpath_selector'] = 'EventTitle';
  $handler->display->display_options['fields']['text']['multiple'] = 0;
  /* Field: EventStartTime: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'xml';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['label'] = '';
  $handler->display->display_options['fields']['date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['date']['element_wrapper_class'] = 'events-date';
  $handler->display->display_options['fields']['date']['xpath_selector'] = 'EventStartTime';
  $handler->display->display_options['fields']['date']['multiple'] = 0;
  $handler->display->display_options['fields']['date']['date_format'] = 'long';
  /* Field: LocationURL: Markup */
  $handler->display->display_options['fields']['markup_1']['id'] = 'markup_1';
  $handler->display->display_options['fields']['markup_1']['table'] = 'xml';
  $handler->display->display_options['fields']['markup_1']['field'] = 'markup';
  $handler->display->display_options['fields']['markup_1']['label'] = '';
  $handler->display->display_options['fields']['markup_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['markup_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['markup_1']['xpath_selector'] = 'LocationURL';
  $handler->display->display_options['fields']['markup_1']['multiple'] = 0;
  $handler->display->display_options['fields']['markup_1']['format'] = 'filtered_html';
  /* Field: Location: Text */
  $handler->display->display_options['fields']['text_1']['id'] = 'text_1';
  $handler->display->display_options['fields']['text_1']['table'] = 'xml';
  $handler->display->display_options['fields']['text_1']['field'] = 'text';
  $handler->display->display_options['fields']['text_1']['label'] = '';
  $handler->display->display_options['fields']['text_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['text_1']['alter']['path'] = '[markup_1]';
  $handler->display->display_options['fields']['text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_1']['element_wrapper_class'] = 'events-location';
  $handler->display->display_options['fields']['text_1']['xpath_selector'] = 'Location';
  $handler->display->display_options['fields']['text_1']['multiple'] = 0;
  /* Field: EventDescription: Markup */
  $handler->display->display_options['fields']['markup_3']['id'] = 'markup_3';
  $handler->display->display_options['fields']['markup_3']['table'] = 'xml';
  $handler->display->display_options['fields']['markup_3']['field'] = 'markup';
  $handler->display->display_options['fields']['markup_3']['label'] = '';
  $handler->display->display_options['fields']['markup_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['markup_3']['xpath_selector'] = 'EventDescription';
  $handler->display->display_options['fields']['markup_3']['multiple'] = 0;
  $handler->display->display_options['fields']['markup_3']['format'] = 'filtered_html';
  /* Field: EventContactEmail: Markup */
  $handler->display->display_options['fields']['markup_2']['id'] = 'markup_2';
  $handler->display->display_options['fields']['markup_2']['table'] = 'xml';
  $handler->display->display_options['fields']['markup_2']['field'] = 'markup';
  $handler->display->display_options['fields']['markup_2']['label'] = '';
  $handler->display->display_options['fields']['markup_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['markup_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['markup_2']['xpath_selector'] = 'EventContactEmail';
  $handler->display->display_options['fields']['markup_2']['multiple'] = 0;
  $handler->display->display_options['fields']['markup_2']['format'] = 'filtered_html';
  /* Field: EventContactName: Text */
  $handler->display->display_options['fields']['text_2']['id'] = 'text_2';
  $handler->display->display_options['fields']['text_2']['table'] = 'xml';
  $handler->display->display_options['fields']['text_2']['field'] = 'text';
  $handler->display->display_options['fields']['text_2']['label'] = 'Contact';
  $handler->display->display_options['fields']['text_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['text_2']['alter']['path'] = '[markup_2]';
  $handler->display->display_options['fields']['text_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_2']['xpath_selector'] = 'EventContactName';
  $handler->display->display_options['fields']['text_2']['multiple'] = 0;
  /* Sort criterion: EventStartTime: Date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'xml';
  $handler->display->display_options['sorts']['date']['field'] = 'date';
  $handler->display->display_options['sorts']['date']['xpath_selector'] = 'EventStartTime';

  /* Display: Short/Minimal List */
  $handler = $view->new_display('panel_pane', 'Short/Minimal List', 'events_short_list');
  $handler->display->display_options['display_description'] = 'A short listing to be displayed on the homepage or in a block.';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="calendar/">View Events</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: EventUrl: Markup */
  $handler->display->display_options['fields']['markup']['id'] = 'markup';
  $handler->display->display_options['fields']['markup']['table'] = 'xml';
  $handler->display->display_options['fields']['markup']['field'] = 'markup';
  $handler->display->display_options['fields']['markup']['label'] = '';
  $handler->display->display_options['fields']['markup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['markup']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['markup']['xpath_selector'] = 'EventUrl';
  $handler->display->display_options['fields']['markup']['multiple'] = 0;
  $handler->display->display_options['fields']['markup']['format'] = 'filtered_html';
  /* Field: EventTitle: Text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'xml';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['text']['alter']['path'] = '[markup]';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['text']['xpath_selector'] = 'EventTitle';
  $handler->display->display_options['fields']['text']['multiple'] = 0;
  /* Field: EventStartTime: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'xml';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['label'] = '';
  $handler->display->display_options['fields']['date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['date']['element_wrapper_class'] = 'events-date';
  $handler->display->display_options['fields']['date']['xpath_selector'] = 'EventStartTime';
  $handler->display->display_options['fields']['date']['multiple'] = 0;
  $handler->display->display_options['fields']['date']['date_format'] = 'long';
  /* Field: LocationURL: Markup */
  $handler->display->display_options['fields']['markup_1']['id'] = 'markup_1';
  $handler->display->display_options['fields']['markup_1']['table'] = 'xml';
  $handler->display->display_options['fields']['markup_1']['field'] = 'markup';
  $handler->display->display_options['fields']['markup_1']['label'] = '';
  $handler->display->display_options['fields']['markup_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['markup_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['markup_1']['xpath_selector'] = 'LocationURL';
  $handler->display->display_options['fields']['markup_1']['multiple'] = 0;
  $handler->display->display_options['fields']['markup_1']['format'] = 'filtered_html';
  /* Field: Location: Text */
  $handler->display->display_options['fields']['text_1']['id'] = 'text_1';
  $handler->display->display_options['fields']['text_1']['table'] = 'xml';
  $handler->display->display_options['fields']['text_1']['field'] = 'text';
  $handler->display->display_options['fields']['text_1']['label'] = '';
  $handler->display->display_options['fields']['text_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['text_1']['alter']['path'] = '[markup_1]';
  $handler->display->display_options['fields']['text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_1']['element_wrapper_class'] = 'events-location';
  $handler->display->display_options['fields']['text_1']['xpath_selector'] = 'Location';
  $handler->display->display_options['fields']['text_1']['multiple'] = 0;
  $export['events'] = $view;

  return $export;
}
