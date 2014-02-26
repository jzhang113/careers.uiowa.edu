<?php

/**
 * @file
 * Home of the MasterCalFetcher and related classes.
 */

/**
 * Fetches Master Calendar data via HTTP.
 */
class MasterCalFetcher extends FeedsHTTPFetcher {

  /**
   * Expose source form.
   */
  public function sourceForm($source_config) {
    $form = array();
    $form['source'] = array(
      '#type' => 'textfield',
      '#title' => t('URL'),
      '#access' => FALSE,
      '#description' => t('Enter a feed URL.'),
      '#default_value' => 'http://data.its.uiowa.edu/mastercal/custom-udq',
      '#maxlength' => NULL,
      '#required' => TRUE,
    );
    $form['calendar'] = array(
      '#type' => 'textfield',
      '#title' => t('Calendar ID'),
      '#description' => t('This is the ID for the calendar you are requesting. If this is not passed, it will default to the default Master Calendar.'),
      '#default_value' => isset($source_config['calendar']) ? $source_config['calendar'] : '',
      '#maxlength' => NULL,
    );
    $form['startdate'] = array(
      '#type' => 'textfield',
      '#title' => t('Start Date'),
      '#description' => t('Set a relative start date, based upon a <a href="@url">Relative Date Format</a>. If no value is provided, the feed defaults to today as a value.', array('@url' => url('http://www.php.net/manual/en/datetime.formats.relative.php'))),
      '#default_value' => isset($source_config['startdate']) ? $source_config['startdate'] : '',
    );
    $form['enddate'] = array(
      '#type' => 'textfield',
      '#title' => t('End Date'),
      '#description' => t('Set a relative end date, based upon a <a href="@url">Relative Date Format</a>. If no value is provided, the feed defaults to today as a value.', array('@url' => url('http://www.php.net/manual/en/datetime.formats.relative.php'))),
      '#default_value' => isset($source_config['enddate']) ? $source_config['enddate'] : '',
    );
    return $form;
  }

  /**
   * Override parent::sourceFormValidate().
   */
  public function sourceFormValidate(&$values) {
    $values['source'] = trim($values['source']);
    $query = array();
    // If there is a calendar ID defined, let's use it.
    // Otherwise, don't pass a calendar ID and use the default provided calendar
    // from the feed, which is 7.
    if ($values['calendar']) {
      // Add calendar ID to query array.
      $query['calendar'] = $values['calendar'];
    }
    // If there is a relative date provided, convert it and use it as a
    // parameter.
    if ($values['startdate']) {
      $startstrtotime = strtotime($values['startdate']);
      if ($startstrtotime) {
        $startdate = date('m-d-Y', $startstrtotime);
        $query['startdate'] = $startdate;
      }
      else {
        // Let's provide a form error message.
        $form_key = 'feeds][' . get_class($this) . '][source';
        form_set_error($form_key, t('The Start Date %startdate is invalid. Please use a valid <a href="@url">Relative Date Format</a>.', array('%startdate' => $values['startdate'], '@url' => url('http://www.php.net/manual/en/datetime.formats.relative.php'))));
      }
    }
    // If there is a relative date provided, convert it and use it as a
    // parameter.
    if ($values['enddate']) {
      $endstrtotime = strtotime($values['enddate']);
      if ($endstrtotime) {
        $enddate = date('m-d-Y', $endstrtotime);
        $query['enddate'] = $enddate;
      }
      else {
        // Let's provide a form error message.
        $form_key = 'feeds][' . get_class($this) . '][source';
        form_set_error($form_key, t('The End Date %enddate is invalid. Please use a valid <a href="@url">Relative Date Format</a>.', array('%enddate' => $values['enddate'], '@url' => url('http://www.php.net/manual/en/datetime.formats.relative.php'))));
      }

    }
    // If there are query parameters, build a query string and append it to the
    // source URL.
    if(!empty($query)) {
      // Build query.
      $query_string = http_build_query($query);
      // Apend query string.
      $values['source'] = $values['source'] . '?' . $query_string;
    }
    // This is reused from the validation in FeedsHTTPFetcher.
    if (!feeds_valid_url($values['source'], TRUE)) {
      $form_key = 'feeds][' . get_class($this) . '][source';
      form_set_error($form_key, t('The URL %source is invalid.', array('%source' => $values['source'])));
    }
    // This is reused from the validation in FeedsHTTPFetcher.
    elseif ($this->config['auto_detect_feeds']) {
      feeds_include_library('http_request.inc', 'http_request');
      if ($url = http_request_get_common_syndication($values['source'])) {
        $values['source'] = $url;
      }
    }
  }
}
