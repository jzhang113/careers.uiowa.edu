<?php
/**
 * @file
 * employers_organizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function employers_organizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'employer_showcase';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employer Showcase';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employer Showcase';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
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
  /* Field: Content: Website Link */
  $handler->display->display_options['fields']['field_website_link']['id'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['fields']['field_website_link']['field'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['label'] = '';
  $handler->display->display_options['fields']['field_website_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_link']['type'] = 'link_plain';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_website_link]';
  $handler->display->display_options['fields']['field_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'file_view_mode' => 'employer_showcase',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'employers_organizations' => 'employers_organizations',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_mcf_date) */
  $handler->display->display_options['filters']['field_mcf_date_value']['id'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['table'] = 'field_data_field_mcf_date';
  $handler->display->display_options['filters']['field_mcf_date_value']['field'] = 'field_mcf_date_value';
  $handler->display->display_options['filters']['field_mcf_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_mcf_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_mcf_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_mcf_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Sponsor Date - end date (field_sponsor_date:value2) */
  $handler->display->display_options['filters']['field_sponsor_date_value2']['id'] = 'field_sponsor_date_value2';
  $handler->display->display_options['filters']['field_sponsor_date_value2']['table'] = 'field_data_field_sponsor_date';
  $handler->display->display_options['filters']['field_sponsor_date_value2']['field'] = 'field_sponsor_date_value2';
  $handler->display->display_options['filters']['field_sponsor_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_sponsor_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_sponsor_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_sponsor_date_value2']['year_range'] = '-10:+10';

  /* Display: Employer Showcase Grid */
  $handler = $view->new_display('panel_pane', 'Employer Showcase Grid', 'employer_showcase_grid_panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employer Showcase';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Employer Showcase Slider */
  $handler = $view->new_display('panel_pane', 'Employer Showcase Slider', 'employer_showcase_slider_panel_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'employer_showcase_carousel';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="showcasegallery/">View full list of Employers</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Website Link */
  $handler->display->display_options['fields']['field_website_link']['id'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['fields']['field_website_link']['field'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['label'] = '';
  $handler->display->display_options['fields']['field_website_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_link']['type'] = 'link_plain';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_website_link] ';
  $handler->display->display_options['fields']['field_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'file_view_mode' => 'employer_showcase',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $export['employer_showcase'] = $view;

  return $export;
}
