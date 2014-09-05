<article class="container">
	<div class="row">

		<section id="species-occurrence" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2>Number of occurrence records</h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-12">
					<p>These charts illustrate the change in availability of the species occurrence records over time.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h4>Records by kingdom</h4>
					<p>The number of available records categorized by kingdom.  "Unknown" includes records with taxonomic information that cannot be linked to available taxonomic checklists.</p>
				</div>
				<div class="col-md-4">
					<h4>Records for Animalia</h4>
					<p>The number of animal records categorized by the basis of record. "Unknown" includes records without defined basis of record or with an unrecognised value for basis of record.</p>
				</div>
				<div class="col-md-4">
					<h4>Records for Plantae</h4>
					<p>The number of plant records categorized by the basis of record. "Unknown" includes records without defined basis of record or with an unrecognised value for basis of record.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_kingdom.png" data-lightbox="occ_kingdom"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_kingdom.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_animaliaBoR.png" data-lightbox="occ_AnimaliaBoR"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_animaliaBoR.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_plantaeBoR.png" data-lightbox="occ_PlantaeBoR"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_plantaeBoR.png" class="img-thumbnail"></a>
				</div>
			</div>
		</section>

		<section id="species-occurrence" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2>Species counts</h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-12">
					<p>These charts illustrate the change in the number of species for which occurrence records are available.</p>
					<div class="bs-callout bs-callout-definition">
						<h4>Definition</h4>
						<p>Species counts are based on the number of binomial scientific names for which GBIF has received data records, organised as far as possible using synonyms recorded in key databases such as the Catalogue of Life. Since many names are not yet included in these databases, some proportion of these names will be unrecognised synonyms and do not represent valid species.  Therefore these counts can be used as an indication of richness only, and do not represent true species counts. All data have been processed using the same, most recent, version of the common GBIF backbone taxonomy, and comparisons over time are therefore realistic.</p>
					</div>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h4>Species count by kingdom</h4>
					<p>The number of species with available occurrence records, categorized by kingdom.</p>
				</div>
				<div class="col-md-4">
					<h4>Species count for specimen records</h4>
					<p>The number of species associated with specimen records.</p>
				</div>
				<div class="col-md-4">
					<h4>Species count for observation records</h4>
					<p>The number of species associated with observation records.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/spe_kingdom.png" data-lightbox="spe_kingdom"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/spe_kingdom.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/spe_kingdom_specimen.png" data-lightbox="spe_kingdom_specimen"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/spe_kingdom_specimen.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/spe_kingdom_observation.png" data-lightbox="spe_kingdom_observation"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/spe_kingdom_observation.png" class="img-thumbnail"></a>
				</div>
			</div>
		</section>

		<section id="occurrence-temporal" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2>Time and seasonality</h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-12">
					<p>These charts illustrate changes in the spread of records by year of occurrence and by day of year, indicating the extent of possible bias towards more recent periods or particular seasons. Snapshots are provided for approximately 3-year intervals to show changes in spread.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h4>Occurrence records by year of occurrence</h4>
					<p>The number of occurrence records available for each year since 1950.</p>
				</div>
				<div class="col-md-4">
					<h4>Species by year of occurrence</h4>
					<p>The number of species (see above) for which records are available for each year since 1950.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_yearCollected.png" data-lightbox="occ_yearCollected"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_yearCollected.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/spe_yearCollected.png" data-lightbox="spe_yearCollected"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/spe_yearCollected.png" class="img-thumbnail"></a>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h4>Occurrence records by day of year</h4>
					<p>The number of occurrence records available for each day of the year.</p>
				</div>
				<div class="col-md-4">
					<h4>Species by day of year</h4>
					<p>The number of species (see above) for which records are available for each day of the year.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_dayCollected.png" data-lightbox="occ_dayCollected"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_dayCollected.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/spe_dayCollected.png" data-lightbox="spe_dayCollected"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/spe_dayCollected.png" class="img-thumbnail"></a>
				</div>
			</div>
			<div class="row">
				<div class="col-md-12">
					<div class="bs-callout bs-callout-warning">
						<h4>Note</h4>
						<p>These charts may reveal patterns that represent biases in data collection (seasonality, public holidays) or potential issues in data management (disproportionate numbers of records shown for the first or last days in the year or each month or week).
							Such issues may arise at various stages in data processing and require further investigation.</p>
						<p>By generating these charts <a href="http://dev.gbif.org/issues/browse/POR-2120">an issue</a> was detected in the GBIF processing which contributes to the spike seen on the first day of the year in several charts and will be addressed.</p>
					</div>
				</div>
			</div>
		</section>

		<section id="occurrence-completeness" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2>Completeness and precision</h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-12">
					<p>These charts illustrate changes in the completeness (see below) of available records and in the precision of these records with respect to time, geography and taxonomy.</p>
					<div class="bs-callout bs-callout-definition">
						<h4>Definition</h4>
						<p>A record is here defined to be complete if it includes an identification at least to species rank, valid coordinates, a full date of occurrence and a given basis of record (e.g. Observation, specimen etc).</p>
					</div>
				</div>
			</div>
			<div class="row">
				<div class="col-md-12">
					<h4>Completeness</h4>
					<p>These charts illustrate changes in the number of records considered complete according to the definition above.  Separate charts separately show the same information for specimen records and for observation records. Subsequent charts illustrate the component elements that affect the number of complete records.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h5>All records</h5>
				</div>
				<div class="col-md-4">
					<h5>Specimen records</h5>
				</div>
				<div class="col-md-4">
					<h5>Observation records</h5>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete.png" data-lightbox="occ_complete"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_specimen.png" data-lightbox="occ_complete_specimen"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_specimen.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_observation.png" data-lightbox="occ_complete_observation"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_observation.png" class="img-thumbnail"></a>
				</div>
			</div>
			<div class="row">
				<div class="col-md-12">
					<h4>Taxonomic precision</h4>
					<p>These charts illustrate changes in the number of available records which include an identification at least to the species rank.  The numbers of records identified to an infraspecific rank or to a genus are also shown.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h5>All records</h5>
				</div>
				<div class="col-md-4">
					<h5>Specimen records</h5>
				</div>
				<div class="col-md-4">
					<h5>Observation records</h5>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_kingdom.png" data-lightbox="occ_complete_kingdom"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_kingdom.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_kingdom_specimen.png" data-lightbox="occ_complete_kingdom_specimen"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_kingdom_specimen.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_kingdom_observation.png" data-lightbox="occ_complete_kingdom_observation"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_kingdom_observation.png" class="img-thumbnail"></a>
				</div>
			</div>
			<div class="row">
				<div class="col-md-12">
					<h4>Geographic precision</h4>
					<p>These charts illustrate changes in the number of available records which include coordinates for which no known issues have been detected.  For records without accepted valid coordinates, these charts also show the number of records for which the country of occurrence is known.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h5>All records</h5>
				</div>
				<div class="col-md-4">
					<h5>Specimen records</h5>
				</div>
				<div class="col-md-4">
					<h5>Observation records</h5>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_geo.png" data-lightbox="occ_complete_geo"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_geo.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_geo_specimen.png" data-lightbox="occ_complete_geo_specimen"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_geo_specimen.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_geo_observation.png" data-lightbox="occ_complete_geo_observation"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_geo_observation.png" class="img-thumbnail"></a>
				</div>
			</div>
			<div class="row">
				<div class="col-md-12">
					<h4>Temporal precision</h4>
					<p>These charts illustrate changes in the number of available records which include a complete date including year, month and day.  The numbers of records including only the month and year or only the year are also shown.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h5>All records</h5>
				</div>
				<div class="col-md-4">
					<h5>Specimen records</h5>
				</div>
				<div class="col-md-4">
					<h5>Observation records</h5>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_date.png" data-lightbox="occ_complete_date"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_date.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_date_specimen.png" data-lightbox="occ_complete_date"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_date_specimen.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_complete_date_observation.png" data-lightbox="occ_complete_date_observation"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_complete_date_observation.png" class="img-thumbnail"></a>
				</div>
			</div>
		</section>

		<section id="occurrence-cells" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2>Geographic coverage for recorded species</h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-12">
					<p>These charts illustrate changes in the number of species for which records are available from a range of localities.  The earth’s surface is divided into a series of increasingly fine grids (one degree, half degree and tenth of a degree).  Species are categorised according to the number of cells in each of these grids for which GBIF has available data for the species since 1970.
						The charts show changes in the number of species recorded in only one such grid cell, in between two and twenty such grid cells, etc.  Greater distribution of records typically increases the value of the data for various modelling activities.</p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h5>1.0 degree</h5>
				</div>
				<div class="col-md-4">
					<h5>0.5 degree</h5>
				</div>
				<div class="col-md-4">
					<h5>0.1 degree</h5>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_cells_one_deg.png" data-lightbox="occ_cells_one_deg"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_cells_one_deg.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_cells_half_deg.png" data-lightbox="occ_cells_half_deg"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_cells_half_deg.png" class="img-thumbnail"></a>
				</div>
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_cells_point_one_deg.png" data-lightbox="occ_cells_point_one_deg"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_cells_point_one_deg.png" class="img-thumbnail"></a>
				</div>
			</div>
		</section>

		<section id="occurrence-repatriation" class="col-md-12 well well-lg">
			<div class="row">
				<header class="content-header col-md-12">
					<h2>Data sharing with country of origin</h2>
				</header>
			</div>
			<div class="row">
				<div class="col-md-4">
					<h4>Origin of occurrence records</h4>
					<p><?php print $datasharingDescription;?></p>
				</div>
			</div>
			<div class="row">
				<div class="col-md-4">
					<a href="<?php print $imgBaseUrl;?>/occ_repatriation.png" data-lightbox="occ_repatriation"><img onerror="this.src='<?php print $assetsUrl;?>/img/insufficient-data.png'" src="<?php print $imgBaseUrl;?>/occ_repatriation.png" class="img-thumbnail"></a>
				</div>
			</div>

		</section>

	</div>
</article>