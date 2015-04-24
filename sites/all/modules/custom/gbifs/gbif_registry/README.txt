gbif_registry module
====================

DESCRIPTION
-----------
This module aims to equip all functionality needed to interact with GBIF Registry.

As the version 1.0, it mainly implements necessary features that are required to
automate the endorsement process. This includes:

 * AngularJS app that is responsible for the front end form, which includes validation,
   step control, workflow routing, and interacting with the GBIF API to populate
   form data.
 * A backend that handles data and file submission from the AngularJS app, including
   * email messaging and reminders to various parties.
 * A queue that allows helpdesk agent to approve or reject a request.
 * Necessary features to create an organization in the GBIF Registry and associated
   contacts.

The AngularJS app is an independent project at https://github.com/burkeker/ng-exp.
Full task managing and workflow is included in the project. Only the target/ folder
as the built outcome is included in this module. This way we avoid complexities
of build environment, and most importantly, to avoid overload of some Drupal operations
due to too many files, i.e. node_modules. Though the workflow can always be improved.

In the future, more relevant features will be included in this module.

REQUIREMENTS
------------
Drupal 7.x