#!/bin/bash

# Put this file under the site folder before running it.
# This is to ensure drush get the correct configuration.

drush cc all
drush fr -y gbif_project
drush gbif-project-publish
drush refresh-gbif-menus
drush field-delete pj_image