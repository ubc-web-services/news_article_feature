<?php
/**
 * @file
 * news_article_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_article_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'news_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news_views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'news_views';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'News and Carousel nodequeue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'news_articles_carousel' => 'news_articles_carousel',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_article_image']['id'] = 'field_news_article_image';
  $handler->display->display_options['fields']['field_news_article_image']['table'] = 'field_data_field_news_article_image';
  $handler->display->display_options['fields']['field_news_article_image']['field'] = 'field_news_article_image';
  $handler->display->display_options['fields']['field_news_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_article_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_article_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_article_image']['settings'] = array(
    'image_style' => 'news_carousel-580x300',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_article_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_news_article_caption']['id'] = 'field_news_article_caption';
  $handler->display->display_options['fields']['field_news_article_caption']['table'] = 'field_data_field_news_article_caption';
  $handler->display->display_options['fields']['field_news_article_caption']['field'] = 'field_news_article_caption';
  $handler->display->display_options['fields']['field_news_article_caption']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_caption']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_article_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_article_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_article_caption']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-views';

  /* Display: News Article Carousel */
  $handler = $view->new_display('block', 'News Article Carousel', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['news_views'] = array(
    t('Master'),
    t('news_views'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('News and Carousel nodequeue'),
    t('Read more'),
    t('Page'),
    t('News Article Carousel'),
  );
  $export['news_views'] = $view;

  return $export;
}
