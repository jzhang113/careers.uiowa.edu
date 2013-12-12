-- SUMMARY --

The Feeds Master Calendar module provides a Feeds Importer and Fetcher for use
with the Feeds Module (http://drupal.org/project/feeds).

It also provides a Master Calendar Event content type that maps the fields from
the importer.

Feeds MasterCal uses Feeds XPath Parser to consume the ITS-provided Master
Calendar XML feeds, found at http://data.its.uiowa.edu/mastercal/docs/


-- REQUIREMENTS --

* Ctools - http://drupal.org/project/ctools
* Date - http://drupal.org/project/date
* Features - http://drupal.org/project/features
* Feeds - http://drupal.org/project/feeds
* Feeds XPath Parser - http://drupal.org/project/feeds_xpathparser
* Field Group - http://drupal.org/project/field_group
* Link - http://drupal.org/project/link


-- INSTALLATION --

* Install as usual, see
  http://drupal.org/documentation/install/modules-themes/modules-7


-- USAGE --

* Navigate to http://example.com/import and click the MasterCal Feed importer.

* Configure optional Calendar ID, Start Date and End Date parameters.
  Start and end date parameters use PHP relative date formats, as documented
  here: http://www.php.net/manual/en/datetime.formats.relative.php

The feed will update every three hours.

Fields that are updated with Master Calendar data are disabled and cannot be
edited directly on the node edit form. Instead, instruct content editors to edit
their events directly on Master Calendar and the updates will propagate down.

In the future, we'll probably want to query first to see if it's a node that's
pulling data from Master Calendar. Then we could allow local events to be added using the same content type.

-- EXTEND --

* Wrap up any custom fields on the Event content type into a separate feature to
  ensure this feature doesn't become overridden.

I have not yet tested overridding the feeds importer and adding new mappings.
Hopefully we'll be able to use something like Features Override to add new field
mappings for custom fields on the Master Calendar.


-- SUPPORT --

Current maintainers:
* Brandon Neil (bneil) - https://drupal.org/user/586386
