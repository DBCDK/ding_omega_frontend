<?php
/**
 * @file
 * dbcore_omega_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbcore_omega_frontend_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
