<?php
/**
 * @file
 * featured.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function featured_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured';
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
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_featured_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_featured_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_featured_link']['id'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['table'] = 'field_data_field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['field'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_featured_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_featured_title']['id'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['table'] = 'field_data_field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['field'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['label'] = '';
  $handler->display->display_options['fields']['field_featured_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_title']['alter']['text'] = '<div class="featured-title"><h3><a href="[field_featured_link]">[field_featured_title]</a></h3></div>';
  $handler->display->display_options['fields']['field_featured_title']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_featured_title']['element_wrapper_class'] = 'featured-title';
  $handler->display->display_options['fields']['field_featured_title']['hide_empty'] = TRUE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_featured_caption']['id'] = 'field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['table'] = 'field_data_field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['field'] = 'field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['label'] = '';
  $handler->display->display_options['fields']['field_featured_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_caption']['alter']['text'] = '<div class="featured-caption">[field_featured_caption]</div>';
  $handler->display->display_options['fields']['field_featured_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_caption']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_featured_caption']['hide_empty'] = TRUE;
  /* Field: Content: Icon/Logo Overlay */
  $handler->display->display_options['fields']['field_featured_logo']['id'] = 'field_featured_logo';
  $handler->display->display_options['fields']['field_featured_logo']['table'] = 'field_data_field_featured_logo';
  $handler->display->display_options['fields']['field_featured_logo']['field'] = 'field_featured_logo';
  $handler->display->display_options['fields']['field_featured_logo']['label'] = '';
  $handler->display->display_options['fields']['field_featured_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_logo']['alter']['text'] = '<div class="featured-logo"><a href="[field_featured_link]">[field_featured_logo]</a></div>';
  $handler->display->display_options['fields']['field_featured_logo']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_logo']['element_wrapper_class'] = 'featured-logo';
  $handler->display->display_options['fields']['field_featured_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_logo']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_featured_logo']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['text'] = '[field_featured_image]
';
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link] ';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'file_view_mode' => 'featured',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_featured_logo][field_featured_title][field_featured_caption]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'views-field-field-featured-text';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
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
    'featured' => 'featured',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Featured Pane */
  $handler = $view->new_display('panel_pane', 'Featured Pane', 'panel_pane_featured');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_featured_link']['id'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['table'] = 'field_data_field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['field'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_featured_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_featured_title']['id'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['table'] = 'field_data_field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['field'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['label'] = '';
  $handler->display->display_options['fields']['field_featured_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_title']['alter']['text'] = '<div class="featured-title"><h3><a href="[field_featured_link]">[field_featured_title]</a></h3></div>';
  $handler->display->display_options['fields']['field_featured_title']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_featured_title']['element_wrapper_class'] = 'featured-title';
  $handler->display->display_options['fields']['field_featured_title']['hide_empty'] = TRUE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_featured_caption']['id'] = 'field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['table'] = 'field_data_field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['field'] = 'field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['label'] = '';
  $handler->display->display_options['fields']['field_featured_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_caption']['alter']['text'] = '<div class="featured-caption">[field_featured_caption]</div>';
  $handler->display->display_options['fields']['field_featured_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_caption']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_featured_caption']['hide_empty'] = TRUE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['text'] = '[field_featured_image]
';
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link] ';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'file_view_mode' => 'featured',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_featured_title][field_featured_caption]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'views-field-field-front-featured-text';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'featured:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Reorder Featured */
  $handler = $view->new_display('page', 'Reorder Featured', 'featured_reorder_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder Homepage Featured Items';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_featured_link' => 'field_featured_link',
    'title' => 'title',
    'field_featured_image' => 'field_featured_image',
    'counter' => 'counter',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_featured_link' => array(
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
    'field_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['text'] = '[field_featured_image]
<h3 class="field-title">[title]</h3>';
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link] ';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['path'] = 'admin/config/featured';

  /* Display: Featured Entity Reference */
  $handler = $view->new_display('panel_pane', 'Featured Entity Reference', 'featured_entity_reference');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_featured_entity_reference_taxonomy_term']['id'] = 'reverse_field_featured_entity_reference_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_featured_entity_reference_taxonomy_term']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_featured_entity_reference_taxonomy_term']['field'] = 'reverse_field_featured_entity_reference_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_featured_entity_reference_taxonomy_term']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_featured_link']['id'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['table'] = 'field_data_field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['field'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_featured_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_featured_title']['id'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['table'] = 'field_data_field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['field'] = 'field_featured_title';
  $handler->display->display_options['fields']['field_featured_title']['label'] = '';
  $handler->display->display_options['fields']['field_featured_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_title']['alter']['text'] = '<div class="featured-title"><h3><a href="[field_featured_link]">[field_featured_title]</a></h3></div>';
  $handler->display->display_options['fields']['field_featured_title']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_featured_title']['element_wrapper_class'] = 'featured-title';
  $handler->display->display_options['fields']['field_featured_title']['hide_empty'] = TRUE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_featured_caption']['id'] = 'field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['table'] = 'field_data_field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['field'] = 'field_featured_caption';
  $handler->display->display_options['fields']['field_featured_caption']['label'] = '';
  $handler->display->display_options['fields']['field_featured_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_caption']['alter']['text'] = '<div class="featured-caption">[field_featured_caption]</div>';
  $handler->display->display_options['fields']['field_featured_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_caption']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_featured_caption']['hide_empty'] = TRUE;
  /* Field: Content: Icon/Logo Overlay */
  $handler->display->display_options['fields']['field_featured_logo']['id'] = 'field_featured_logo';
  $handler->display->display_options['fields']['field_featured_logo']['table'] = 'field_data_field_featured_logo';
  $handler->display->display_options['fields']['field_featured_logo']['field'] = 'field_featured_logo';
  $handler->display->display_options['fields']['field_featured_logo']['label'] = '';
  $handler->display->display_options['fields']['field_featured_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_logo']['alter']['text'] = '<div class="featured-logo"><a href="[field_featured_link]">[field_featured_logo]</a></div>';
  $handler->display->display_options['fields']['field_featured_logo']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_logo']['element_wrapper_class'] = 'featured-logo';
  $handler->display->display_options['fields']['field_featured_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_logo']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_featured_logo']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['text'] = '[field_featured_image]
';
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link] ';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'file_view_mode' => 'featured',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_featured_logo][field_featured_title][field_featured_caption]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'views-field-field-featured-text';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'reverse_field_featured_entity_reference_taxonomy_term';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
    'program' => 'program',
  );
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
    'featured' => 'featured',
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
  $export['featured'] = $view;

  return $export;
}
