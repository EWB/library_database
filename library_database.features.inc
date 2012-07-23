<?php
/**
 * @file
 * library_database.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_database_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_database_node_info() {
  $items = array(
    'base_library_database' => array(
      'name' => t('Library Database'),
      'base' => 'node_content',
      'description' => t('Library Index or Database'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
