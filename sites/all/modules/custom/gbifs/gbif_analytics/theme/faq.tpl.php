<article class="container">
	<div class="row">

		<section id="context" class="col-xs-12 well well-lg">
			<div class="row">
				<header class="content-header col-xs-12">
					<h2>Context</h2>
				</header>
			</div>
			<div class="row">
				<div class="content content-full">
					<dl class="faq">
						<dt><a href="#context1" id="context1">Who is producing these charts and why?</a></dt>
						<dd>The GBIF Secretariat is producing information on data mobilization trends observed on the GBIF network.
							Showing trends on the data mobilized by the GBIF network can help with planning data mobilization efforts,
							showing the results of previous investments in digitization or data mobilization, or in highlighting issues
							to be targeted to improve the fitness-for-use of the data.</dd>

						<dt><a href="#context2" id="context2">Are these reports available as a download?</a></dt>
						<dd>Not currently, but we plan to add this feature in 2015. If you are interested in being able to download these reports,
							please use the feedback button on the side of this page to explain how you would wish to see this feature implemented.</dd>

						<dt><a href="#context3" id="context3">Can I reproduce these charts in my national reports?</a></dt>
						<dd>Yes, however we encourage that they be reviewed before doing so.</dd>

						<dt><a href="#context4" id="context4">How often will the charts be updated?</a></dt>
						<dd>The charts show data trending from the end of 2007 until recent weeks and will be recalculated
							periodically; approximately quarterly.</dd>

						<dt><a href="#context5" id="context5">How can I contribute to this work?</a></dt>
						<dd>This project is being developed openly on the <a href="https://github.com/gbif/analytics">GitHub project site</a>.
							While some data preparation stages require access to the GBIF index and Hadoop infrastructure, other
							stages run using R and can be developed remotely.  Please <a href="mailto:dev@gbif.org">contact us</a>
							if you would like to contribute to the work.</dd>
					</dl>
				</div>
			</div>
		</section>

		<section id="improving" class="col-xs-12 well well-lg">
			<div class="row">
				<header class="content-header col-xs-12">
					<h2>Understanding the trends and improving the charts</h2>
				</header>
			</div>
			<div class="row">
				<div class="content content-full">
					<dl class="faq">
						<dt><a href="#imp1" id="imp1">How have these trends been produced?</a></dt>
						<dd>The project is documented on the <a href="https://github.com/gbif/analytics">GitHub project site</a>.
							Approximately 4 historical views per year of the GBIF index were restored (totalling approximately 8
							Billion records in May 2014), and the raw data were processed to the <strong>latest quality control and taxonomic backbone</strong>.
							Various scripts were then used to digest the records into smaller views which are then processed in R to produce the charts.
						</dd>

						<dt><a href="#imp2" id="imp2">How do they take into account changes in the GBIF taxonomic backbone over time?</a></dt>
						<dd>All data are processed to the latest GBIF backbone taxonomy, to ensure that species counts are comparable over time.</dd>

						<dt><a href="#imp3" id="imp3">In some charts I can see that the amount of mobilized data sometimes goes down before going up again. Why might that be?</a></dt>
						<dd>This is due to the removal of data sets from GBIF. This might occur if a publisher wishes to remove their data, but is often
							due to the removal of datasets that were inadvertently published twice (duplicate datasets).</dd>

						<dt><a href="#imp4" id="imp4">I can see strange peaks in the charts showing trends in the temporality of the data. What might be the cause of this?</a></dt>
						<dd>The charts may reveal patterns that represent biases in data collection (seasonality, public holidays) or potential issues in data management
							(disproportionate numbers of records shown for the first or last days in the year or each month or week). Such issues may arise at various
							stages in data processing and require further investigation.</dd>

						<dt><a href="#imp5" id="imp4">I have suggestions to improve the clarity of the charts included here - what should I do?</a></dt>
						<dd>Please use the feedback button on the side of the page to log any suggestions.</dd>

						<dt><a href="#imp6" id="imp6">Why are these charts presented as static images and not something more dynamic?</a></dt>
						<dd>This is a first iteration of work.  Future versions could be more interactive, although one has to consider if a
							PDF view or simple images for (e.g.) annual reports are required.  As an open project, anyone with interest in improving
							the data visualization is welcome to get involved.  Please <a href="mailto:dev@gbif.org">contact us</a>.</dd>

						<dt><a href="#imp7" id="imp7">How did you select the colours used in these charts and can we improve them?</a></dt>
						<dd>The colour palettes come from <a href="http://colorbrewer2.org/">colorbrewer2.org</a> and an attempt was made to select
							colours that would be colour-blind safe.  It is difficult to find suitable colour palettes that work on all charts
							(e.g. global and country specific) and input would be greatly appreciated to help improve these.</dd>

						<dt><a href="#imp8" id="imp8">Which technologies were involved in this work?</a></dt>
						<dd>The original unprocessed data resides in Hadoop.  Hive is used for the SQL processing on the Hadoop data using custom
							UDFs wrapping the GBIF core processing libraries (Java).  Hive is used to digest the data into CSV tables.  All other processing is in R.</dd>
					</dl>
				</div>
			</div>
		</section>

		<section id="involved" class="col-xs-12 well well-lg">
			<div class="row">
				<header class="content-header col-xs-12">
					<h2>How to get involved</h2>
				</header>
			</div>
			<div class="row">
				<div class="content content-full">
					<dl class="faq">
						<dt><a href="#inv1" id="inv1">What can I do to improve the completeness of records available through GBIF?</a></dt>
						<dd>A complete record is here defined as having species identification, valid coordinates and the full date of
							collection or observation. The charts show that some records published to GBIF are incomplete. There can be
							different reasons for this, which include deliberately excluding coordinates for sensitive data, or the full
							date of collection not being available for some historic collections. However, for many datasets, the completeness
							of records could be improved by working with the data publisher concerned. All GBIF Nodes are encouraged to consider
							how they can work with the data publishers in their networks to improve the completeness of the records, which will
							contribute to making these data fit for a broader range of uses.</dd>

						<dt><a href="#inv2" id="inv2">I have suggestions for other interesting charts that I would like to see on GBIF.org. Can I request more charts?</a></dt>
						<dd>In future GBIF work programmes, it may be possible to extend this work further to include other interesting trends around data mobilization in GBIF.
							Please use the feedback button to provide any additional ideas or comments on the current charts, <a href="#inv1">or consider contributing to the project</a>.</dd>

						<dt><a href="#inv3" id="inv3">What would it take for me to produce these charts myself in a different style or language?</a></dt>
						<dd>The scripts used for this work are maintained in the <a href="https://github.com/gbif/analytics">GitHub project site</a>.
							GBIF can provide the underlying digested data in the form of a collection of CSV files which can be used in various applications
							to produce the charts.  For those wishing to do far more detailed analysis than GBIF is able to do globally, the processed source
							records can be provided for subsets of the data (e.g. all records for Spain). Please note that the Secretariat has limited resources
							but will do all they can to support others wishing to further the analysis.  Please also note that the volumes of data can be very large -
							the data covers approximately 8 Billion records (May 2014)</dd>

						<dt><a href="#inv4" id="inv4">How do I provide feedback?</a></dt>
						<dd>Please use the feedback button on the side of each page or <a href="mailto:dev@gbif.org">contact us</a> by mail.</dd>
						
					</dl>
				</div>
			</div>
		</section>
	</div>
</article>
