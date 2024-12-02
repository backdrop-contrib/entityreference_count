<?php
/**
 * @file
 * Basic rules integration for the entityreference_count module.
 */

/**
 * Implements hook_rules_event_info().
 */
function entityreference_count_rules_event_info() {
  return array(
    'entityreference_count_updated' => array(
      'label' => t('Entity Reference Count field updated'),
      'group' => t('Entity Reference Count'),
      'variables' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity containing updated Entity Reference Count field'),
        ),
      ),
    ),
  );
}
