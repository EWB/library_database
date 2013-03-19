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
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_types';

  /* Display: A-Z Listing Page */
  $handler = $view->new_display('page', 'A-Z Listing Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_database_link' => 'field_database_link',
    'field_trial' => 'field_database_link',
    'field_database_brief_description' => 'field_database_brief_description',
    'field_database_coverage' => 'field_database_coverage',
    'field_database_coverage_end' => 'field_database_coverage',
    'field_database_difficulties' => 'field_database_brief_description',
    'field_new' => 'field_database_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_database_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trial' => array(
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
    'field_database_coverage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '-',
      'empty_column' => 0,
    ),
    'field_database_coverage_end' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_database_difficulties' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_new' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  /* Field: Content: Trial */
  $handler->display->display_options['fields']['field_trial']['id'] = 'field_trial';
  $handler->display->display_options['fields']['field_trial']['table'] = 'field_data_field_trial';
  $handler->display->display_options['fields']['field_trial']['field'] = 'field_trial';
  $handler->display->display_options['fields']['field_trial']['label'] = '';
  $handler->display->display_options['fields']['field_trial']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_trial']['alter']['text'] = '<img src="./sites/all/themes/slu_libraries_theme/images/trial.png" />';
  $handler->display->display_options['fields']['field_trial']['element_class'] = 'trial';
  $handler->display->display_options['fields']['field_trial']['element_label_colon'] = FALSE;
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
  /* Field: Content: Technical Difficulties */
  $handler->display->display_options['fields']['field_database_difficulties']['id'] = 'field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['table'] = 'field_data_field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['field'] = 'field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['label'] = '';
  $handler->display->display_options['fields']['field_database_difficulties']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_database_difficulties']['alter']['text'] = '<img src="./sites/all/themes/slu_libraries_theme/images/technical-difficulties.png" />';
  $handler->display->display_options['fields']['field_database_difficulties']['element_class'] = 'technical-difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['element_label_colon'] = FALSE;
  /* Field: Content: New */
  $handler->display->display_options['fields']['field_new']['id'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['table'] = 'field_data_field_new';
  $handler->display->display_options['fields']['field_new']['field'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['label'] = '';
  $handler->display->display_options['fields']['field_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new']['alter']['text'] = '<img src="./sites/all/themes/slu_libraries_theme/images/new.png" />';
  $handler->display->display_options['fields']['field_new']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Content: Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator_id'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['identifier'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_types';
  $handler->display->display_options['path'] = 'databases/a-z';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'A-Z Listing';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'A-Z Listing';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Primary */
  $handler->display->display_options['fields']['field_primary']['id'] = 'field_primary';
  $handler->display->display_options['fields']['field_primary']['table'] = 'field_data_field_primary';
  $handler->display->display_options['fields']['field_primary']['field'] = 'field_primary';
  $handler->display->display_options['fields']['field_primary']['delta_offset'] = '0';
  /* Field: Content: Subjects */
  $handler->display->display_options['fields']['field_subjects']['id'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['fields']['field_subjects']['field'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_database_link']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'database-analysis';

  /* Display: Off-Campus Links to Databases Block */
  $handler = $view->new_display('block', 'Off-Campus Links to Databases Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Off-Campus Link */
  $handler->display->display_options['fields']['field_off_campus_link']['id'] = 'field_off_campus_link';
  $handler->display->display_options['fields']['field_off_campus_link']['table'] = 'field_data_field_off_campus_link';
  $handler->display->display_options['fields']['field_off_campus_link']['field'] = 'field_off_campus_link';
  $handler->display->display_options['fields']['field_off_campus_link']['click_sort_column'] = 'url';
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
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Content: Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator_id'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['identifier'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_types';

  /* Display: Off-Campus Tabbed Page */
  $handler = $view->new_display('page', 'Off-Campus Tabbed Page', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br><p><b>Option 1 (recommended):</b> Use the <b><a href="http://infotech.stlawu.edu/node/71">SLU VPN client</a></b> with your SLU network ID and password and get access to all of the library\'s electronic databases, electronic journals and RefWorks.</p><p><b>Option 2:</b> Access to the Library\'s databases and <i>selected</i> journals is available via the links in the table below.  Access is available for all SLU faculty, staff and students.</p>';
  $handler->display->display_options['header']['area']['format'] = 'richtext_editor';
  $handler->display->display_options['path'] = 'databases/off-campus';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Off-Campus';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $export['databases_a_z'] = $view;

  $view = new view();
  $view->name = 'library_resource_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library Resource Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Resource Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Subjects (field_subjects) */
  $handler->display->display_options['arguments']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['arguments']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary']['format'] = 'default_summary';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1 Resources';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_database_link' => 'field_database_link',
    'field_new' => 'field_database_link',
    'field_trial' => 'field_database_link',
    'view_node_1' => 'field_database_link',
    'field_database_difficulties' => 'field_database_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_database_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'field_new' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_database_difficulties' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  /* Field: Content: New */
  $handler->display->display_options['fields']['field_new']['id'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['table'] = 'field_data_field_new';
  $handler->display->display_options['fields']['field_new']['field'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['label'] = '';
  $handler->display->display_options['fields']['field_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new']['alter']['text'] = '<img src="../sites/all/themes/slu_libraries_theme/images/new.png" />';
  $handler->display->display_options['fields']['field_new']['element_label_colon'] = FALSE;
  /* Field: Content: Trial */
  $handler->display->display_options['fields']['field_trial']['id'] = 'field_trial';
  $handler->display->display_options['fields']['field_trial']['table'] = 'field_data_field_trial';
  $handler->display->display_options['fields']['field_trial']['field'] = 'field_trial';
  $handler->display->display_options['fields']['field_trial']['label'] = '';
  $handler->display->display_options['fields']['field_trial']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_trial']['alter']['text'] = '<img src="../sites/all/themes/slu_libraries_theme/images/trial.png" />';
  $handler->display->display_options['fields']['field_trial']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_trial']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'details...';
  $handler->display->display_options['fields']['view_node_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['node_in_colorbox_width'] = '400';
  $handler->display->display_options['fields']['view_node_1']['node_in_colorbox_height'] = '400';
  /* Field: Content: Technical Difficulties */
  $handler->display->display_options['fields']['field_database_difficulties']['id'] = 'field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['table'] = 'field_data_field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['field'] = 'field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['label'] = '';
  $handler->display->display_options['fields']['field_database_difficulties']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_database_difficulties']['alter']['text'] = '<img src="../sites/all/themes/slu_libraries_theme/images/technical-difficulties.png" />';
  $handler->display->display_options['fields']['field_database_difficulties']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Subjects (field_subjects) */
  $handler->display->display_options['arguments']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['arguments']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_subjects_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_subjects_tid']['validate_options']['vocabularies'] = array(
    'library_subjects' => 'library_subjects',
  );
  $handler->display->display_options['arguments']['field_subjects_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_subjects_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'resources/%';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '% Databases';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>%1 Databases</h2>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<hr><h3>Related Databases</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  /* Field: Content: Trial */
  $handler->display->display_options['fields']['field_trial']['id'] = 'field_trial';
  $handler->display->display_options['fields']['field_trial']['table'] = 'field_data_field_trial';
  $handler->display->display_options['fields']['field_trial']['field'] = 'field_trial';
  $handler->display->display_options['fields']['field_trial']['label'] = '';
  $handler->display->display_options['fields']['field_trial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trial']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_trial']['alter']['text'] = '<img src="../sites/all/themes/slu_libraries_theme/images/trial.png" />';
  $handler->display->display_options['fields']['field_trial']['element_label_colon'] = FALSE;
  /* Field: Content: Technical Difficulties */
  $handler->display->display_options['fields']['field_database_difficulties']['id'] = 'field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['table'] = 'field_data_field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['field'] = 'field_database_difficulties';
  $handler->display->display_options['fields']['field_database_difficulties']['label'] = '';
  $handler->display->display_options['fields']['field_database_difficulties']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database_difficulties']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_database_difficulties']['alter']['text'] = '<img src="../sites/all/themes/slu_libraries_theme/images/technical-difficulties.png" />';
  $handler->display->display_options['fields']['field_database_difficulties']['element_label_colon'] = FALSE;
  /* Field: Content: New */
  $handler->display->display_options['fields']['field_new']['id'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['table'] = 'field_data_field_new';
  $handler->display->display_options['fields']['field_new']['field'] = 'field_new';
  $handler->display->display_options['fields']['field_new']['label'] = '';
  $handler->display->display_options['fields']['field_new']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_new']['alter']['text'] = '<img src="../sites/all/themes/slu_libraries_theme/images/new.png" />';
  $handler->display->display_options['fields']['field_new']['element_label_colon'] = FALSE;
  /* Field: Content: Coverage End */
  $handler->display->display_options['fields']['field_database_coverage_end']['id'] = 'field_database_coverage_end';
  $handler->display->display_options['fields']['field_database_coverage_end']['table'] = 'field_data_field_database_coverage_end';
  $handler->display->display_options['fields']['field_database_coverage_end']['field'] = 'field_database_coverage_end';
  $handler->display->display_options['fields']['field_database_coverage_end']['label'] = '';
  $handler->display->display_options['fields']['field_database_coverage_end']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database_coverage_end']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] coverage: [field_database_coverage]';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'database-primary';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Coverage Start */
  $handler->display->display_options['fields']['field_database_coverage']['id'] = 'field_database_coverage';
  $handler->display->display_options['fields']['field_database_coverage']['table'] = 'field_data_field_database_coverage';
  $handler->display->display_options['fields']['field_database_coverage']['field'] = 'field_database_coverage';
  $handler->display->display_options['fields']['field_database_coverage']['label'] = 'Coverage';
  $handler->display->display_options['fields']['field_database_coverage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_database_coverage']['alter']['text'] = '[field_database_coverage] - [field_database_coverage_end] [field_trial] [field_database_difficulties] [field_new]';
  $handler->display->display_options['fields']['field_database_coverage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_database_coverage']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Primary (field_primary) */
  $handler->display->display_options['arguments']['field_primary_tid']['id'] = 'field_primary_tid';
  $handler->display->display_options['arguments']['field_primary_tid']['table'] = 'field_data_field_primary';
  $handler->display->display_options['arguments']['field_primary_tid']['field'] = 'field_primary_tid';
  $handler->display->display_options['arguments']['field_primary_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_primary_tid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_primary_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_primary_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_primary_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_primary_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_primary_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_primary_tid']['validate_options']['vocabularies'] = array(
    'library_subjects' => 'library_subjects',
  );
  $handler->display->display_options['arguments']['field_primary_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_primary_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Courses Block */
  $handler = $view->new_display('block', 'Courses Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Subjects (field_subjects) */
  $handler->display->display_options['arguments']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['arguments']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_subjects_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_subjects_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subjects_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_subjects_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_subjects_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_subjects_tid']['validate_options']['vocabularies'] = array(
    'library_subjects' => 'library_subjects',
  );
  $handler->display->display_options['arguments']['field_subjects_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_subjects_tid']['validate_options']['transform'] = TRUE;
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
    'base_course_profile' => 'base_course_profile',
  );
  /* Filter criterion: Content: Semester (field_course_semester) */
  $handler->display->display_options['filters']['field_course_semester_tid']['id'] = 'field_course_semester_tid';
  $handler->display->display_options['filters']['field_course_semester_tid']['table'] = 'field_data_field_course_semester';
  $handler->display->display_options['filters']['field_course_semester_tid']['field'] = 'field_course_semester_tid';
  $handler->display->display_options['filters']['field_course_semester_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_course_semester_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_semester_tid']['vocabulary'] = 'semester';
  $export['library_resource_listing'] = $view;

  return $export;
}
