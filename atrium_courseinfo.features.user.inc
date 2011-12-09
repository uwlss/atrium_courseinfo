<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_courseinfo_user_default_permissions() {
  $permissions = array();

  // Exported permission: create courseinfo content
  $permissions['create courseinfo content'] = array(
    'name' => 'create courseinfo content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own courseinfo content
  $permissions['delete own courseinfo content'] = array(
    'name' => 'delete own courseinfo content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own courseinfo content
  $permissions['edit own courseinfo content'] = array(
    'name' => 'edit own courseinfo content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
