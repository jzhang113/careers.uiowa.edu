<?php
/**
 * @file
 * careers_events.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function careers_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'careers_localist_importer';
  $feeds_importer->config = array(
    'name' => 'Careers Localist Importer',
    'description' => 'Import events as nodes from UIowa Localist calendar.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => 'events.*.event',
        'sources' => array(
          'jsonpath_parser:0' => 'event_instances.*.event_instance.id',
          'jsonpath_parser:1' => 'title',
          'jsonpath_parser:2' => 'event_instances.*.event_instance.start',
          'jsonpath_parser:3' => 'event_instances.*.event_instance.end',
          'jsonpath_parser:4' => 'description',
          'jsonpath_parser:5' => 'filters.event_types.*.name',
          'jsonpath_parser:6' => 'geo.street',
          'jsonpath_parser:7' => 'geo.city',
          'jsonpath_parser:8' => 'geo.state',
          'jsonpath_parser:9' => 'geo.country',
          'jsonpath_parser:10' => '',
          'jsonpath_parser:12' => 'geo.latitude',
          'jsonpath_parser:13' => 'geo.longitude',
          'jsonpath_parser:14' => 'url',
          'jsonpath_parser:15' => 'geo.zip',
          'jsonpath_parser:18' => 'tags.*',
          'jsonpath_parser:19' => 'tags.*',
          'jsonpath_parser:20' => 'room_number',
          'jsonpath_parser:21' => 'location_name',
          'jsonpath_parser:22' => 'tags.*',
          'jsonpath_parser:23' => 'localist_url',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:14' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:18' => 0,
            'jsonpath_parser:19' => 0,
            'jsonpath_parser:20' => 0,
            'jsonpath_parser:21' => 0,
            'jsonpath_parser:22' => 0,
            'jsonpath_parser:23' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_event_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_event_date:end',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_event_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_event_location:thoroughfare',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_event_location:locality',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_event_location:administrative_area',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_event_location:country',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_event_location:name_line',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_event_location_latitude',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_event_location_longitude',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:14',
            'target' => 'field_event_link:url',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_event_location:postal_code',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'jsonpath_parser:18',
            'target' => 'field_event_audience',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'jsonpath_parser:19',
            'target' => 'field_event_program',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:20',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:21',
            'target' => 'Temporary target 2',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'jsonpath_parser:22',
            'target' => 'field_event_category',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'jsonpath_parser:23',
            'target' => 'field_event_localist_url:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['careers_localist_importer'] = $feeds_importer;

  return $export;
}
