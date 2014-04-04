<?php
/**
 * @file
 * majors.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function majors_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collapsible_fields|node|major|default';
  $field_group->group_name = 'group_collapsible_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'group_major_additional_resources',
      1 => 'group_major_employment_areas',
      2 => 'group_major_general',
      3 => 'group_major_hiriing_orgs',
      4 => 'group_major_job_titles',
      5 => 'group_major_jobs_internships',
      6 => 'group_major_professional_orgs',
      7 => 'group_major_student_orgs',
      8 => 'group_major_ui_websites',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'tablist',
        'element' => 'div',
        'attributes' => 'role="tablist"',
      ),
    ),
  );
  $export['group_collapsible_fields|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employment_areas|node|major|form';
  $field_group->group_name = 'group_employment_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employment Areas',
    'weight' => '8',
    'children' => array(
      0 => 'field_major_employment_areas',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-employment-areas field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_employment_areas|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_additional_resources|node|major|default';
  $field_group->group_name = 'group_major_additional_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'Additional Resources',
    'weight' => '10',
    'children' => array(
      0 => 'field_major_additonal_resources',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Resources',
      'instance_settings' => array(
        'classes' => 'group-major-additional-resources field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_additional_resources|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_additional_resources|node|major|form';
  $field_group->group_name = 'group_major_additional_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Resources',
    'weight' => '10',
    'children' => array(
      0 => 'field_major_additonal_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-additional-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_additional_resources|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_employment_areas|node|major|default';
  $field_group->group_name = 'group_major_employment_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'Employment Areas',
    'weight' => '7',
    'children' => array(
      0 => 'field_major_employment_areas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Employment Areas',
      'instance_settings' => array(
        'classes' => 'group-major-employment-areas field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_employment_areas|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_general|node|major|default';
  $field_group->group_name = 'group_major_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'General Career Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_major_general_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'General Career Information',
      'instance_settings' => array(
        'classes' => 'group-major-general field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_general|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_general|node|major|form';
  $field_group->group_name = 'group_major_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Career Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_major_general_info',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'General Career Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-major-general field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_major_general|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_hiriing_orgs|node|major|default';
  $field_group->group_name = 'group_major_hiriing_orgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'Organizations That Have Hired UI Students and Alumni',
    'weight' => '9',
    'children' => array(
      0 => 'field_major_hiring_orgs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Organizations That Have Hired UI Students and Alumni',
      'instance_settings' => array(
        'classes' => 'group-major-hiriing-orgs field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_hiriing_orgs|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_hiring_orgs|node|major|form';
  $field_group->group_name = 'group_major_hiring_orgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hiring Organizations',
    'weight' => '5',
    'children' => array(
      0 => 'field_major_hiring_orgs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-hiring-orgs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_hiring_orgs|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_job_titles|node|major|default';
  $field_group->group_name = 'group_major_job_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'Sample Job Titles',
    'weight' => '6',
    'children' => array(
      0 => 'field_major_job_titles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sample Job Titles',
      'instance_settings' => array(
        'classes' => 'group-major-job-titles field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_job_titles|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_job_titles|node|major|form';
  $field_group->group_name = 'group_major_job_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sample Job Titles',
    'weight' => '6',
    'children' => array(
      0 => 'field_major_job_titles',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-job-titles field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_job_titles|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_jobs_internships|node|major|default';
  $field_group->group_name = 'group_major_jobs_internships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'Job and Internship Listings',
    'weight' => '8',
    'children' => array(
      0 => 'field_major_jobs_internshps',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Job and Internship Listings',
      'instance_settings' => array(
        'classes' => 'group-major-jobs-internships field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_jobs_internships|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_jobs_internships|node|major|form';
  $field_group->group_name = 'group_major_jobs_internships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job and Internship Listings',
    'weight' => '9',
    'children' => array(
      0 => 'field_major_jobs_internshps',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-jobs-internships field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_jobs_internships|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_major|node|major|form';
  $field_group->group_name = 'group_major_major';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Major',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-major field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_major|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_professional_orgs|node|major|default';
  $field_group->group_name = 'group_major_professional_orgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'Professional Organizations',
    'weight' => '4',
    'children' => array(
      0 => 'field_major_professional_orgs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Professional Organizations',
      'instance_settings' => array(
        'classes' => 'group-major-professional-orgs field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_professional_orgs|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_professional_orgs|node|major|form';
  $field_group->group_name = 'group_major_professional_orgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional Organizations',
    'weight' => '4',
    'children' => array(
      0 => 'field_major_professional_orgs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-professional-orgs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_professional_orgs|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_student_orgs|node|major|default';
  $field_group->group_name = 'group_major_student_orgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'UI Student Organizations',
    'weight' => '5',
    'children' => array(
      0 => 'field_major_student_orgs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'UI Student Organizations',
      'instance_settings' => array(
        'classes' => 'group-major-student-orgs field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_student_orgs|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_student_orgs|node|major|form';
  $field_group->group_name = 'group_major_student_orgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UI Student Organizations',
    'weight' => '3',
    'children' => array(
      0 => 'field_major_student_orgs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-student-orgs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_student_orgs|node|major|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_ui_websites|node|major|default';
  $field_group->group_name = 'group_major_ui_websites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_collapsible_fields';
  $field_group->data = array(
    'label' => 'UI Websites',
    'weight' => '3',
    'children' => array(
      0 => 'field_major_ui_websites',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'UI Websites',
      'instance_settings' => array(
        'classes' => 'group-major-ui-websites field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_major_ui_websites|node|major|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_ui_websites|node|major|form';
  $field_group->group_name = 'group_major_ui_websites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'major';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UI Websites',
    'weight' => '2',
    'children' => array(
      0 => 'field_major_ui_websites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-major-ui-websites field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_ui_websites|node|major|form'] = $field_group;

  return $export;
}
