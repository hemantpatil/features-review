<?php
/**
 * @file
 * ms_strongarm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ms_strongarm_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'hemant.patil2007@gmail.com';
  $export['site_mail'] = $strongarm;

  return $export;
}
