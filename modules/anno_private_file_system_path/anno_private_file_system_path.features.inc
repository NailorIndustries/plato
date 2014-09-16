<?php
/**
 * @file
 * anno_private_file_system_path.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function anno_private_file_system_path_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
