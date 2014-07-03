<div class="container">

  <div class="row">
    <div class="col-md-9 well well-lg well-margin-top disclaimer">
      <div class="content-header">
        <?php print $disclaimer; ?>
      </div>
    </div>
  </div>

  <div class="row">
    <div class="col-md-9 well well-lg">

      <div class="row user-login-row">
        <div class="subscribe">
          <?php	print render($form['form_id']); ?>
          <?php	print render($form['form_build_id']); ?>
          <?php print render($form['account']['name']); ?>
  				<?php print render($form['field_firstname']); ?>
  				<?php print render($form['field_lastname']); ?>
  				<?php print render($form['account']['mail']); ?>
  				<?php print render($form['field_country_mono']); ?>
        </div>
      </div>
      <div class="row user-login-action">
        <button type="submit" class="btn btn-primary"><span>Create new account</span></button>
      </div>

    </div>
  </div>
</div>