Because of this bug: https://www.drupal.org/node/1309144
Rules cannot be written into the table without triggering error, which blocks
the execution of Drush script. We then still keep it stored in the DB by
manually importing it.