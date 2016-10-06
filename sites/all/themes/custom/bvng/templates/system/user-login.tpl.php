<?php
/**
 * @file
 * Default theme implementation to user login page.
 */
?>
<div class="container">
  <div class="row">
    <div class="col-xs-9 well well-lg well-margin-top">

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
        <div class="row">
          <div class="col-xs-8">
            <div>
              <p>By logging in to GBIF.org you agree to the <a href="/terms/privacy-policy">privacy agreement</a>.  Please be aware that this was changed on October 6th, 2016.</p>
            </div>
            <div class="forgot-password">
              <p><a href="/user/password">Forgot your password?</a></p>
              <p>Do you need to sign up? <a href="/user/register">Create your account.</a></p>
            </div>
          </div>
        </div>
        <?php print drupal_render($form['actions']); ?>
      </div>

    </div>
  </div>
</div>