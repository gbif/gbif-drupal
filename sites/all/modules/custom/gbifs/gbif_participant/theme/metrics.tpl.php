<?php
	switch ($repatri_mode) {
		case 'about':
			$data_address = 'country=' . $iso2;
			break;
		case 'from':
			$data_address = 'publishingCountry=' . $iso2;
			break;
	}
?>
<table class="table table-curved metrics" data-address="<?php print $data_address; ?>">
  <thead>
  <tr>
    <th width="10%">
    </th><th colspan="2" width="9%">Specimen</th>
    <th colspan="2" width="9%">Observation</th>
    <th colspan="2" width="9%">Fossil</th>
    <th colspan="2" width="9%">Living</th>
    <th colspan="2" width="9%" class="total">All (incl. "unknown")</th>
  </tr>
  <tr>
    <th width="10%">
    </th><th>Records</th>
    <th>Georef.</th>
    <th>Records</th>
    <th>Georef.</th>
    <th>Records</th>
    <th>Georef.</th>
    <th>Records</th>
    <th>Georef.</th>
    <th class="total">Records</th>
    <th class="total">Georef.</th>
  </tr>
  </thead>
  <tbody>
  <tr data-kingdom="1">
    <td width="10%" class="title">Animalia</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="2">
    <td width="10%" class="title">Archaea</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="3">
    <td width="10%" class="title">Bacteria</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="4">
    <td width="10%" class="title">Chromista</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="5">
    <td width="10%" class="title">Fungi</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="6">
    <td width="10%" class="title">Plantae</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="7">
    <td width="10%" class="title">Protozoa</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="8">
    <td width="10%" class="title">Viruses</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr data-kingdom="0">
    <td width="10%" class="title">Unknown</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  <tr class="total">
    <td width="10%" class="title">Total</td>
    <td class="nonGeo" width="9%" data-bor="PRESERVED_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="PRESERVED_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="OBSERVATION"><div>-</div></td>
    <td width="9%" data-bor="OBSERVATION"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="FOSSIL_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="FOSSIL_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo" width="9%" data-bor="LIVING_SPECIMEN"><div>-</div></td>
    <td width="9%" data-bor="LIVING_SPECIMEN"><div class="geo">-</div></td>
    <td class="nonGeo total" width="9%"><div>-</div></td>
    <td width="9%" class="totalgeo total"><div class="geo">-</div></td>
  </tr>
  </tbody>
</table>