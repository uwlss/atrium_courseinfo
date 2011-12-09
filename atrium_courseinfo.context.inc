<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_courseinfo_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'courseinfo_listing';
  $context->description = '';
  $context->tag = 'Course Info';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'courseinfo' => 'courseinfo',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'courseinfo_listing' => 'courseinfo_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-courseinfo_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'courseinfo_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-courseinfo_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'courseinfo_listing-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'courseinfo',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Course Info');
  $export['courseinfo_listing'] = $context;

  return $export;
}
