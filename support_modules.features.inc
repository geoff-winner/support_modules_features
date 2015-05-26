<?php
/**
 * @file
 * support_modules.features.inc
 */

/**
 * Implements hook_node_info().
 */
function support_modules_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Recipe Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
