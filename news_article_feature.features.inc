<?php
/**
 * @file
 * news_article_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_article_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_article_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function news_article_feature_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: news_articles_carousel
  $nodequeues['news_articles_carousel'] = array(
    'qid' => '1',
    'name' => 'news_articles_carousel',
    'title' => 'News/Articles Carousel',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'news_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function news_article_feature_image_default_styles() {
  $styles = array();

  // Exported image style: news_carousel-580x300
  $styles['news_carousel-580x300'] = array(
    'name' => 'news_carousel-580x300',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '580',
          'height' => '300',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function news_article_feature_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('Add a news article to your site. This content type includes a title, body, caption and media field (such as an image or video).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
