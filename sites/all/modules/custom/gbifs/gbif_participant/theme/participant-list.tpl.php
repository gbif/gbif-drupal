<table class="table table-curved alt-row-color">
<tr>
	<?php if (in_array($type, array('affiliate'))): ?>
	<th>Affiliate</th>
	<?php else: ?>
	<th>Participant</th>
	<?php endif; ?>
	<?php if (in_array($type, array('voting', 'associate'))): ?>
	<th>Node Institution</th>
	<?php endif; ?>
	<?php if (in_array($type, array('affiliate'))): ?>
	<th>Affiliate since</th>
	<?php else: ?>
	<th>Member since</th>
	<?php endif; ?>
</tr>
<?php foreach ($participants as $participant): ?>
<tr>
	<td><?php print $participant->participant_link; ?></td>
	<?php if (in_array($type, array('voting', 'associate'))): ?>
		<td><?php print $participant->node_link; ?></td>
	<?php endif; ?>
	<td><?php print $participant->member_as_of; ?></td>
</tr>
<?php endforeach; ?>
</table>