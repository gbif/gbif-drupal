<table class="table table-curved">
  <tbody>
  <!--
  <?php if ($group == 'Nodes Committee'): ?>
    <thead>
      <tr>
        <th>Name</th>
        <th width="25%">Title</th>
        <th>Participant</th>
        <th>Member Status</th>
      <tr>
    </thead>
  <?php endif; ?>
  -->
  <!-- <thead><tr><th colspan="2"></th><tr></thead> -->
  <?php foreach ($results as $row): ?>
    <?php
    $class = (isset($row['firstName']) && $row['firstName'] == 'Pending appointment') ? '' : 'contactName'; // remove class for "pending appointment" so it's not click-able.
    if ($group == 'GBIF Secretariat' && (isset($row['job_title']) || isset($row['jobTitle']))) {
      $job_or_role = (isset($row['jobTitle'])) ? $row['jobTitle'] : $row['job_title'];
    }
    else {
      $job_or_role = (isset($row['role'])) ? ucwords(strtolower(str_replace('_', ' ', $row['role']))) : '';
    }
    if (!isset($row['firstName']) && (isset($row['name']))) {
      $row['firstName'] = '';
    }

    // As the mailing address, "Taiwan" should be used to ensure the delivery.
    if (isset($row['countryName'])) {
      $country_name = ($row['countryName'] == 'Chinese Taipei') ? 'Taiwan' : $row['countryName'];
    }

    ?>
    <tr>
      <td>
        <div class="contact">
          <a name="<?php print $row['firstName'] . ',' . $row['surname']; ?>"></a>
          <div class="<?php print $class; ?>"><?php print $row['firstName'] . ' ' . $row['surname']; ?></div>
          <div style="display: none;">
            <?php if (isset($job_or_role)): ?>
            <div class="contactPosition"><?php print $job_or_role; ?></div>
            <?php endif; ?>
            <?php if (isset($row['institutionName'])): ?><div class="contactInstitution"><?php print $row['institutionName']; ?></div><?php endif; ?>
            <div class="address"><?php if (isset($row['address'])): ?><?php print _gbif_participant_print_address_fields($row['address']); ?><?php endif; ?><?php if (isset($row['countryName'])): ?><span class="country"><?php print $country_name; ?></span><?php endif; ?><span class="email"><a href="mailto:<?php print $row['email']; ?>" title="email"><?php print $row['email']; ?></a></span><?php if (isset($row['phone'])): ?><span class="phone"><?php print 'Tel: ' . $row['phone']; ?></span><?php endif; ?><?php if (isset($row['fax'])): ?><span class="fax"><?php print 'Fax: ' . $row['fax']; ?></span><?php endif; ?></div>
          </div>
        </div>
      </td>
      <?php if ($group == 'Nodes Committee'): ?>
      <td>
      <?php else: ?>
      <td>
      <?php endif; ?>
      <?php if (isset($job_or_role)): ?>
      <?php print $job_or_role; ?>
      <?php endif; ?>
      </td>
      <?php if ($group == 'Nodes Committee'): ?>
        <td>
          <?php if (isset($row['participantTableName'])): ?>
            <?php print $row['participantTableName']; ?>
          <?php endif; ?>
        </td>
        <td>
          <?php if (isset($row['participantMembership'])): ?>
            <?php print $row['participantMembership']; ?>
          <?php endif; ?>
        </td>
      <?php endif; ?>
    </tr>
  <?php endforeach; ?>
  </tbody>
</table>