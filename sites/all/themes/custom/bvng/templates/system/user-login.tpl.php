<?php
/**
 * @file
 * Default theme implementation to user login page.
 */
?>
<div class="container">
  <div class="row">
    <div class="col-md-9 well well-lg well-margin-top">

      <div class="row user-login-row">
        <div class="subscribe">
          <?php
            print drupal_render($form['name']);
            print drupal_render($form['pass']);
            print drupal_render($form['form_build_id']);
            print drupal_render($form['form_id']);
          ?>
        </div>
      </div>
      <div class="row user-login-action">
          <?php print drupal_render($form['actions']); ?>
          <p><a href="/user/password">Forgot your password?</a></p>
          <p>Do you need to sign up? <a href="/user/register">Create your account.</a></p>
      </div>

    </div>
  </div>
</div>