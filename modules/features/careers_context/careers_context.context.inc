<?php
/**
 * @file
 * careers_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function careers_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'audience_taxonomy';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'audience' => 'audience',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-79fea503c6c0914ea54880d4afe3b77e' => array(
          'module' => 'views',
          'delta' => '79fea503c6c0914ea54880d4afe3b77e',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['audience_taxonomy'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hireahawk';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/3' => 'taxonomy/term/3',
        'taxonomy/term/46' => 'taxonomy/term/46',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['hireahawk'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'program_page';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'program' => 'program',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bbdfcd660bd38971e2360e3feeccdf0c' => array(
          'module' => 'views',
          'delta' => 'bbdfcd660bd38971e2360e3feeccdf0c',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-2f174773965785579e77841785ff311a' => array(
          'module' => 'views',
          'delta' => '2f174773965785579e77841785ff311a',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['program_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'program_taxonomy';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'program' => 'program',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-79fea503c6c0914ea54880d4afe3b77e' => array(
          'module' => 'views',
          'delta' => '79fea503c6c0914ea54880d4afe3b77e',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-e7aaa1ee49f2d7f3c1e399eebbf15c70' => array(
          'module' => 'views',
          'delta' => 'e7aaa1ee49f2d7f3c1e399eebbf15c70',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'views-77d67690efde8905c465b157f1b7c650' => array(
          'module' => 'views',
          'delta' => '77d67690efde8905c465b157f1b7c650',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['program_taxonomy'] = $context;

  return $export;
}
