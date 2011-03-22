<?php

/**
 * Implementation of hook_user_default_roles().
 */
function user_types_user_default_roles() {
  $roles = array();

  // Exported role: Partner Associate
  $roles['Partner Associate'] = array(
    'name' => 'Partner Associate',
    'weight' => '3',
  );

  // Exported role: Sponsor Associate
  $roles['Sponsor Associate'] = array(
    'name' => 'Sponsor Associate',
    'weight' => '4',
  );

  return $roles;
}
