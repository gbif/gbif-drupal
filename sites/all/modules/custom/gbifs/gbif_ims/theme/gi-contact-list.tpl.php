<table class="table table-curved">
  <tbody>
  <!-- <thead><tr><th colspan="2"></th><tr></thead> -->
  <?php foreach ($results as $row): ?>
    <?php
    $class = ($row->first_name == 'Pending appointment') ? '':'contactName'; // remove class for "pending appointment" so it's not click-able.
    $job_or_role = ($group == 'GBIF Secretariat') ? $row->job_position : $row->role;
    ?>
    <tr>
      <td>
        <div class="contact">
          <a name="<?php print $row->first_name . ',' . $row->last_name; ?>"></a>
          <div class="<?php print $class; ?>"><?php print $row->first_name . ' ' . $row->last_name; ?></div>
          <div style="display: none;">
            <div class="contactPosition"><?php print $job_or_role; ?></div>
            <div class="contactInstitution"></div>
            <div class="address"><span><?php print $row->address; ?></span><span class="city"><?php print $row->city; ?></span><?php if (!empty($row->contact_country)): ?><span class="country"><?php print $row->contact_country; ?></span><?php endif; ?><span class="email"><a href="mailto:<?php print $row->email_address; ?>" title="email"><?php print $row->email_address; ?></a></span><span class="phone"><?php print $row->phone_office; ?></span><span class="fax"><?php print $row->fax; ?></span></div>
          </div>
        </div>
      </td>
      <?php if ($group == 'Nodes Committee'): ?>
    <td width="20%">
    <?php else: ?>
      <td>
        <?php endif; ?>
        <?php print $job_or_role; ?>
      </td>
      <?php if ($group == 'Nodes Committee'): ?>
        <td width="25%"><?php print $row->participant_name_short; ?></td>
      <?php endif; ?>
    </tr>
  <?php endforeach; ?>
  </tbody>
</table>