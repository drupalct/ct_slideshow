<?php
/**
 * @file
 * ct_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ct_slideshow content.
  $permissions['create ct_slideshow content'] = array(
    'name' => 'create ct_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ct_slideshow content.
  $permissions['delete any ct_slideshow content'] = array(
    'name' => 'delete any ct_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ct_slideshow content.
  $permissions['delete own ct_slideshow content'] = array(
    'name' => 'delete own ct_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any ct_slideshow content.
  $permissions['edit any ct_slideshow content'] = array(
    'name' => 'edit any ct_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own ct_slideshow content.
  $permissions['edit own ct_slideshow content'] = array(
    'name' => 'edit own ct_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
