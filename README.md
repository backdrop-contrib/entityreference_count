Entity Reference Count
======================

Entity Reference Count is a field type that will count and display the number of
references to a particular entity.

For an entity type that is referenced by other entities, you can add a special
field of type 'Entity reference count' that is automatically calculated when the
referencing or referenced entity is created, updated or deleted. You can choose
which fields from referencing entity types you want to aggregate in the count.
That way, every time an entity references this one, the counter will be
incremented. This can be used to display the count in the entity itself, or as a
field in a view.


Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

- Be sure you have at least one entity reference field configured, then add an
  'entity reference count' field to the entity type that is referenced by the
  entity reference field. Check the boxes for the entity reference fields that
  should be counted.

- You will need to re-save any existing entities (or their referencing entities)
  in order to update the count, otherwise it will be empty.

- NOTE: The module only works with entity reference fields which use the "Simple
  (with optional filter by bundle)" mode. The "Views: filter by an entity
  reference view" mode will not work.


Issues
------

Bugs and Feature Requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/entityreference_count/issues.


Current Maintainers
-------------------

- Seeking a maintainer


Credits
-------

- Ported to Backdrop CMS by [Norm](https://github.com/NormPlum).
- Originally written for Drupal by [Pablo Cerda](https://github.com/citlacom).
- Based on [Nodereference Count](https://www.drupal.org/project/nodereference_count).


License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
