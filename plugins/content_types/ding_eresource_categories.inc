<?php
/**
 * @file
 * Provides a category browser for the E-resource overview page.
 */

$plugin = array(
  'title' => t('Ding e-resource categories'),
  'description' => t('Provides a selector for e-resource categories.'),
  'single' => TRUE,
  'render callback' => 'ding_eresource_ding_eresource_categories_content_type_render',
  'category' => t('Ding!'),
);

/**
 * Return the pane contents.
 */
function ding_eresource_ding_eresource_categories_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $selected_tid = FALSE;

  if (isset($conf['vocabulary']) && $conf['vocabulary'] > 0) {
    $links = array();

    $base_path = 'e-materialer';

    // Default link of 'All libraries' links to staff list page. 
    // Set active class if no term is given in panel arguments.
    $options = array('attributes' => array('class' => array('active')));
    if (isset($panel_args[0])) {
      $selected_tid = $panel_args[0];
      $options = array();
    }
    
    // Add "All"-link.
    $items[] = l(t('All'), $base_path , $options);
    
    // Add a link to each category.
    foreach (taxonomy_get_tree($conf['vocabulary'], 0, 1, FALSE) as $term) {
      $options = array();
      if ($selected_tid && $selected_tid == $term->tid) {
        $options = array('attributes' => array('class' => array('active')));
      }
      $items[] = l($term->name, $base_path . '/' . $term->tid, $options);
    }
  }

  $block->content = array(
    '#theme' => 'item_list',
    '#items' => $items,
    '#attributes' => array(
      'class' => array('sub-menu'),
    ),
  );
  
  return $block;
}

/**
 * Returns an edit form for the content type.
 *
 */
function ding_eresource_ding_eresource_categories_content_type_edit_form($form, &$form_state) {
  $vocabulary_options = array();
  foreach (taxonomy_get_vocabularies() as $voc) {
    $vocabulary_options[$voc->vid] = $voc->name;
  }

  $form['vocabulary'] = array(
    '#type' => 'select',
    '#title' => t('Vocabulary'),
    '#description' => t('Select the vocabulary used for E-resource categories.'),
    '#options' => $vocabulary_options,
    '#default_value' => $form_state['conf']['vocabulary'],
  );

  return $form;
}

/**
 * Submit handler for the content type editing form.
 */
function ding_eresource_ding_eresource_categories_content_type_edit_form_submit(&$form, &$form_state) {
  $form_state['conf']['vocabulary'] = $form_state['values']['vocabulary'];
}