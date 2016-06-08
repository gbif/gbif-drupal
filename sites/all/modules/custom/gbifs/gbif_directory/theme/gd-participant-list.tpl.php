<table class="table table-curved <?php print $classes;?>">
  <tbody>
  <tr><th width="30%">Participant</th><th>Delegation members</th></tr>

  <?php foreach ($results as $participant): ?>
    <tr>
      <td><?php print $participant['name']; ?></td>
      <?php if (count($participant['people']) > 0): ?>
        <td>
          <?php foreach ($participant['people'] as $row): ?>
            <?php
            // As the mailing address, "Taiwan" should be used to ensure the delivery.
            if (isset($row['countryName'])) {
                $country_name = ($row['countryName'] == 'Chinese Taipei') ? 'Taiwan' : $row['countryName'];
              }
            ?>
            <div class="contact">
              <a name="<?php print $row['firstName'] . ',' . $row['surname']; ?>"></a>
              <div class="contactName"><?php print $row['firstName'] . ' ' . $row['surname']; ?> (<?php print $row['role']; ?>)</div>
              <div style="display: none;">
                <?php if (isset($row['jobTitle'])): ?><div class="contactPosition"><?php print $row['jobTitle']; ?></div><?php endif; ?>
                <?php if (isset($row['institutionName'])): ?><div class="contactInstitution"><?php print $row['institutionName']; ?></div><?php endif; ?>
                <div class="address"><?php if (isset($row['address'])): ?><?php print _gbif_participant_print_address_fields($row['address']); ?><?php endif; ?><?php if (isset($row['countryName'])): ?><span class="country"><?php print $country_name; ?></span><?php endif; ?><?php if (isset($row['email'])): ?><span class="email"><a href="mailto:<?php print $row['email']; ?>" title="email"><?php print $row['email']; ?></a></span><?php endif; ?><?php if (isset($row['phone'])): ?><span class="phone"><?php print 'Tel: ' . $row['phone']; ?></span><?php endif; ?><?php if (isset($row['fax'])): ?><span class="fax"><?php print 'Fax: ' . $row['fax']; ?></span><?php endif; ?></div>
              </div>
            </div>
          <?php endforeach; ?>
        </td>
      <?php else: ?>
        <td><em style="color:#D0D0D0">No official delegation information</em></td>
      <?php endif; ?>
    </tr>
  <?php endforeach; ?>
  </tbody>
</table>