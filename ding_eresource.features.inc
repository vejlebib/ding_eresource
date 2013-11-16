<?php
/**
 * @file
 * ding_eresource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_eresource_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ding_eresource_node_info() {
  $items = array(
    'ding_eresource' => array(
      'name' => t('E-resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
