<table class="table table-curved <?php print $classes;?>">
	<tbody>
	<tr><th width="30%">Participant</th><th>Delegation members</th></tr>

	<?php foreach ($results as $participant => $contacts): ?>
		<tr>
			<td><?php print $participant; ?></td>
			<?php if (count($contacts) > 0 && $contacts[0]->first_name != NULL): ?>
			<td>
				<?php foreach ($contacts as $row): ?>
					<div class="contact">
					<a name="<?php print $row->first_name . ',' . $row->last_name; ?>"></a>
					<div class="contactName"><?php print $row->first_name . ' ' . $row->last_name; ?> (<?php print $row->group_role_name; ?>)</div>
					<div style="display: none;">
						<div class="contactPosition"><?php print $row->job_position; ?></div>
						<div class="contactInstitution"><?php print $row->contact_institution; ?></div>
						<div class="address">
							<span><?php print $row->address; ?></span>
							<span class="city"><?php print $row->city; ?></span>
							<span class="country"><?php print $row->contact_country; ?></span>
							<span class="email"><a href="mailto:<?php print $row->email_address; ?>" title="email"><?php print $row->email_address; ?></a></span>
							<span class="phone"><?php print $row->phone_office; ?></span>
							<span class="fax"><?php print $row->fax; ?></span>
						</div>
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