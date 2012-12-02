<?php
/**
 * @file
 * library_database.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_database_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'databases_a_z';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Databases A-Z';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Databases';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'title' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_subjects_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_database_brief_description' => 'field_database_brief_description',
    'field_database_coverage_end' => 'field_database_coverage',
    'field_database_coverage' => 'field_database_coverage',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_database_brief_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_database_coverage_end' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_database_coverage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '-',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Brief Description */
  $handler->display->display_options['fields']['field_database_brief_description']['id'] = 'field_database_brief_description';
  $handler->display->display_options['fields']['field_database_brief_description']['table'] = 'field_data_field_database_brief_description';
  $handler->display->display_options['fields']['field_database_brief_description']['field'] = 'field_database_brief_description';
  $handler->display->display_options['fields']['field_database_brief_description']['label'] = 'Description';
  /* Field: Content: Coverage Start */
  $handler->display->display_options['fields']['field_database_coverage']['id'] = 'field_database_coverage';
  $handler->display->display_options['fields']['field_database_coverage']['table'] = 'field_data_field_database_coverage';
  $handler->display->display_options['fields']['field_database_coverage']['field'] = 'field_database_coverage';
  $handler->display->display_options['fields']['field_database_coverage']['label'] = 'Coverage';
  $handler->display->display_options['fields']['field_database_coverage']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Coverage End */
  $handler->display->display_options['fields']['field_database_coverage_end']['id'] = 'field_database_coverage_end';
  $handler->display->display_options['fields']['field_database_coverage_end']['table'] = 'field_data_field_database_coverage_end';
  $handler->display->display_options['fields']['field_database_coverage_end']['field'] = 'field_database_coverage_end';
  $handler->display->display_options['fields']['field_database_coverage_end']['label'] = '';
  $handler->display->display_options['fields']['field_database_coverage_end']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'base_library_database' => 'base_library_database',
  );
  /* Filter criterion: Content: Subjects (field_subjects) */
  $handler->display->display_options['filters']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator_id'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['label'] = 'Subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['identifier'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_subjects_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subjects_tid']['vocabulary'] = 'library_subjects';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'base_library_database' => 'base_library_database',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Subjects (field_subjects) */
  $handler->display->display_options['filters']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_subjects_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator_id'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['label'] = 'Subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['identifier'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_subjects_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subjects_tid']['vocabulary'] = 'library_subjects';
  /* Filter criterion: Content: Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator_id'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['identifier'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_types';
  $handler->display->display_options['path'] = 'databases';
  $export['databases_a_z'] = $view;

  return $export;
}
