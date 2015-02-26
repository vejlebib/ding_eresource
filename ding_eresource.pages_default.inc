<?php
/**
 * @file
 * ding_eresource.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ding_eresource_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_eresources';
  $page->task = 'page';
  $page->admin_title = 'Ding E-resources';
  $page->admin_description = '';
  $page->path = 'e-materialer/!tid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'tid' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          7 => '7',
          1 => 0,
          6 => 0,
          8 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          2 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_eresources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_eresources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'E-resurser';
  $display->uuid = 'd44ae923-a33f-4fc1-8d4c-2de4afe70ce0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3547768a-b368-4506-87fe-edcd1ec01082';
    $pane->panel = 'left_sidebar';
    $pane->type = 'ding_eresource_categories';
    $pane->subtype = 'ding_eresource_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vocabulary' => '9',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3547768a-b368-4506-87fe-edcd1ec01082';
    $display->content['new-3547768a-b368-4506-87fe-edcd1ec01082'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-3547768a-b368-4506-87fe-edcd1ec01082';
    $pane = new stdClass();
    $pane->pid = 'new-67fac3c4-5600-4994-b091-8d680e22ac66';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_eresource-ding_eresource_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67fac3c4-5600-4994-b091-8d680e22ac66';
    $display->content['new-67fac3c4-5600-4994-b091-8d680e22ac66'] = $pane;
    $display->panels['main_content'][0] = 'new-67fac3c4-5600-4994-b091-8d680e22ac66';
    $pane = new stdClass();
    $pane->pid = 'new-4c3eca62-ff45-4c17-bd19-03d7d91dab2e';
    $pane->panel = 'main_content';
    $pane->type = 'ding_eresource_index';
    $pane->subtype = 'ding_eresource_index';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c3eca62-ff45-4c17-bd19-03d7d91dab2e';
    $display->content['new-4c3eca62-ff45-4c17-bd19-03d7d91dab2e'] = $pane;
    $display->panels['main_content'][1] = 'new-4c3eca62-ff45-4c17-bd19-03d7d91dab2e';
    $pane = new stdClass();
    $pane->pid = 'new-6083a62a-5e1f-49e8-b9b9-ef1fd6d8a8ec';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'views-98880b6fbff6f74deeae473932e04e0b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6083a62a-5e1f-49e8-b9b9-ef1fd6d8a8ec';
    $display->content['new-6083a62a-5e1f-49e8-b9b9-ef1fd6d8a8ec'] = $pane;
    $display->panels['main_content'][2] = 'new-6083a62a-5e1f-49e8-b9b9-ef1fd6d8a8ec';
    $pane = new stdClass();
    $pane->pid = 'new-d6286c13-2986-46ef-bb83-a85ff00275fc';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_eresource-ding_eresource_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd6286c13-2986-46ef-bb83-a85ff00275fc';
    $display->content['new-d6286c13-2986-46ef-bb83-a85ff00275fc'] = $pane;
    $display->panels['main_content'][3] = 'new-d6286c13-2986-46ef-bb83-a85ff00275fc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4c3eca62-ff45-4c17-bd19-03d7d91dab2e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_eresources'] = $page;

  return $pages;

}
