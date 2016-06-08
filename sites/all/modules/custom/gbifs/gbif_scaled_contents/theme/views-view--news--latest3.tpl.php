<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 *
 * @todo The newsletter form should be integrated in Drupal,
 *       hence we can monitor the subscription from within Drupal, and use jangomail
 *       for the delivery.
 */

// Prepare JangoMail redirection on successful signing up.
//http://www.jangomail.com/OptIn.aspx?RedirectURLSuccess=http%3A%2F%2Fwww.gbif.org%2Fpage%2F2998
$redirection_on_success = url('http://www.jangomail.com/OptIn.aspx', array(
	'query' => array(
		'RedirectURLSuccess' => 'http://www.gbif.org/newsletter-subscription/confirmation',
	)
));

?>
<div class="container well well-lg well-margin-bottom">
  <div class="row news-summary">
    <header class="col-xs-12">
      <h2><?php print $view->get_title(); ?></h2>
      <h3><?php print $view->description; ?></h3>
    </header>
  </div>
  <div class="row">
    <div class="view-column-summary col-xs-8">
      <div class="<?php print $classes; ?>">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <?php print $title; ?>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($header): ?>
          <div class="view-header">
            <?php print $header; ?>
          </div>
        <?php endif; ?>

        <?php if ($exposed): ?>
          <div class="view-filters">
            <?php print $exposed; ?>
          </div>
        <?php endif; ?>

        <?php if ($attachment_before): ?>
          <div class="attachment attachment-before">
            <?php print $attachment_before; ?>
          </div>
        <?php endif; ?>

        <?php if ($rows): ?>
          <div class="view-content">
            <?php print $rows; ?>
          </div>
        <?php elseif ($empty): ?>
          <div class="view-empty">
            <?php print $empty; ?>
          </div>
        <?php endif; ?>

        <?php if ($attachment_after): ?>
          <div class="attachment attachment-after">
            <?php print $attachment_after; ?>
          </div>
        <?php endif; ?>
        <hr>
        <?php if ($pager): ?>
          <?php print $pager; ?>
        <?php endif; ?>
        <?php if ($more): ?>
          <?php print $more; ?>
        <?php endif; ?>
      </div>
    </div>
    <div class="sidebar-signup col-xs-3">
      <div class="subscribe">
        <a id="signup" name="sign-up"></a>
        <h4>GBIF NEWSLETTERS</h4>
        <p>Download the latest issue of our bimonthly newsletter <a href="/newsroom/newsletter">here</a> or keep up to date with the latest GBIF news by signing up to GBits</p>
        <form accept-charset="UTF-8" action="https://madmimi.com/signups/subscribe/194104" id="ema_signup_form" method="post" target="_blank">
          <div style="margin:0;padding:0;display:inline">
            <input name="utf8" type="hidden" value="✓"/>
          </div>
          <div class="mimi_field required">
            <input id="signup_email" name="signup[email]" class="form-control" type="text" data-required-field="This field is required" placeholder="Enter your email (required)"/>
          </div>
          <div class="mimi_field required">
            <input id="signup_first_name" name="signup[first_name]" class="form-control" type="text" data-required-field="This field is required" placeholder="First name (required)"/>
          </div>
          <div class="mimi_field required">
            <input id="signup_last_name" name="signup[last_name]" class="form-control" type="text" data-required-field="This field is required" placeholder="Last name (required)"/>
          </div>
          <div class="mimi_field">
            <input data-required-field="This field is required" id="signup_organization" name="signup[organization]" class="form-control" type="text" placeholder="Organization (optional)"/>
            <input class="field_type" type="hidden" data-field-type="text_field"/>
          </div>
          <div class="mimi_field">
            <select class="mimi_html_dropdown form-control" id="signup_country" name="signup[country]">
              <option value="">Choose your country</option>
              <option value="Afghanistan">Afghanistan</option>
              <option value="Åland Islands">Åland Islands</option>
              <option value="Albania">Albania</option>
              <option value="Algeria">Algeria</option>
              <option value="American Samoa">American Samoa</option>
              <option value="Andorra">Andorra</option>
              <option value="Angola">Angola</option>
              <option value="Anguilla">Anguilla</option>
              <option value="Antarctica">Antarctica</option>
              <option value="Antigua and Barbuda">Antigua and Barbuda</option>
              <option value="Argentina">Argentina</option>
              <option value="Armenia">Armenia</option>
              <option value="Aruba">Aruba</option>
              <option value="Australia">Australia</option>
              <option value="Austria">Austria</option>
              <option value="Azerbaijan">Azerbaijan</option>
              <option value="Bahamas">Bahamas</option>
              <option value="Bahrain">Bahrain</option>
              <option value="Bangladesh">Bangladesh</option>
              <option value="Barbados">Barbados</option>
              <option value="Belarus">Belarus</option>
              <option value="Belgium">Belgium</option>
              <option value="Belize">Belize</option>
              <option value="Benin">Benin</option>
              <option value="Bermuda">Bermuda</option>
              <option value="Bhutan">Bhutan</option>
              <option value="Bolivia">Bolivia</option>
              <option value="Bosnia and Herzegovina">Bosnia and Herzegovina</option>
              <option value="Botswana">Botswana</option>
              <option value="Bouvet Island">Bouvet Island</option>
              <option value="Brazil">Brazil</option>
              <option value="British Indian Ocean Territory">British Indian Ocean Territory</option>
              <option value="Brunei Darussalam">Brunei Darussalam</option>
              <option value="Bulgaria">Bulgaria</option>
              <option value="Burkina Faso">Burkina Faso</option>
              <option value="Burundi">Burundi</option>
              <option value="Cambodia">Cambodia</option>
              <option value="Cameroon">Cameroon</option>
              <option value="Canada">Canada</option>
              <option value="Cape Verde">Cape Verde</option>
              <option value="Caribbean Netherlands">Caribbean Netherlands</option>
              <option value="Cayman Islands">Cayman Islands</option>
              <option value="Central African Republic">Central African Republic</option>
              <option value="Chad">Chad</option>
              <option value="Chile">Chile</option>
              <option value="China">China</option>
              <option value="Christmas Island">Christmas Island</option>
              <option value="Cocos (Keeling) Islands">Cocos (Keeling) Islands</option>
              <option value="Colombia">Colombia</option>
              <option value="Comoros">Comoros</option>
              <option value="Congo">Congo</option>
              <option value="Congo, Democratic Republic of">Congo, Democratic Republic of</option>
              <option value="Cook Islands">Cook Islands</option>
              <option value="Costa Rica">Costa Rica</option>
              <option value="Côte d'Ivoire">Côte d'Ivoire</option>
              <option value="Croatia">Croatia</option>
              <option value="Cuba">Cuba</option>
              <option value="Curaçao">Curaçao</option>
              <option value="Cyprus">Cyprus</option>
              <option value="Czech Republic">Czech Republic</option>
              <option value="Denmark">Denmark</option>
              <option value="Djibouti">Djibouti</option>
              <option value="Dominica">Dominica</option>
              <option value="Dominican Republic">Dominican Republic</option>
              <option value="Ecuador">Ecuador</option>
              <option value="Egypt">Egypt</option>
              <option value="El Salvador">El Salvador</option>
              <option value="Equatorial Guinea">Equatorial Guinea</option>
              <option value="Eritrea">Eritrea</option>
              <option value="Estonia">Estonia</option>
              <option value="Ethiopia">Ethiopia</option>
              <option value="Falkland Islands">Falkland Islands</option>
              <option value="Faroe Islands">Faroe Islands</option>
              <option value="Fiji">Fiji</option>
              <option value="Finland">Finland</option>
              <option value="France">France</option>
              <option value="French Guiana">French Guiana</option>
              <option value="French Polynesia">French Polynesia</option>
              <option value="French Southern Territories">French Southern Territories</option>
              <option value="Gabon">Gabon</option>
              <option value="Gambia">Gambia</option>
              <option value="Georgia">Georgia</option>
              <option value="Germany">Germany</option>
              <option value="Ghana">Ghana</option>
              <option value="Gibraltar">Gibraltar</option>
              <option value="Greece">Greece</option>
              <option value="Greenland">Greenland</option>
              <option value="Grenada">Grenada</option>
              <option value="Guadeloupe">Guadeloupe</option>
              <option value="Guam">Guam</option>
              <option value="Guatemala">Guatemala</option>
              <option value="Guernsey">Guernsey</option>
              <option value="Guinea">Guinea</option>
              <option value="Guinea-Bissau">Guinea-Bissau</option>
              <option value="Guyana">Guyana</option>
              <option value="Haiti">Haiti</option>
              <option value="Heard and McDonald Islands">Heard and McDonald Islands</option>
              <option value="Honduras">Honduras</option>
              <option value="Hong Kong">Hong Kong</option>
              <option value="Hungary">Hungary</option>
              <option value="Iceland">Iceland</option>
              <option value="India">India</option>
              <option value="Indonesia">Indonesia</option>
              <option value="Iran">Iran</option>
              <option value="Iraq">Iraq</option>
              <option value="Ireland">Ireland</option>
              <option value="Isle of Man">Isle of Man</option>
              <option value="Israel">Israel</option>
              <option value="Italy">Italy</option>
              <option value="Jamaica">Jamaica</option>
              <option value="Japan">Japan</option>
              <option value="Jersey">Jersey</option>
              <option value="Jordan">Jordan</option>
              <option value="Kazakhstan">Kazakhstan</option>
              <option value="Kenya">Kenya</option>
              <option value="Kiribati">Kiribati</option>
              <option value="Kuwait">Kuwait</option>
              <option value="Kyrgyzstan">Kyrgyzstan</option>
              <option value="Lao People's Democratic Republic">Lao People's Democratic Republic</option>
              <option value="Latvia">Latvia</option>
              <option value="Lebanon">Lebanon</option>
              <option value="Lesotho">Lesotho</option>
              <option value="Liberia">Liberia</option>
              <option value="Libya">Libya</option>
              <option value="Liechtenstein">Liechtenstein</option>
              <option value="Lithuania">Lithuania</option>
              <option value="Luxembourg">Luxembourg</option>
              <option value="Macau">Macau</option>
              <option value="Macedonia">Macedonia</option>
              <option value="Madagascar">Madagascar</option>
              <option value="Malawi">Malawi</option>
              <option value="Malaysia">Malaysia</option>
              <option value="Maldives">Maldives</option>
              <option value="Mali">Mali</option>
              <option value="Malta">Malta</option>
              <option value="Marshall Islands">Marshall Islands</option>
              <option value="Martinique">Martinique</option>
              <option value="Mauritania">Mauritania</option>
              <option value="Mauritius">Mauritius</option>
              <option value="Mayotte">Mayotte</option>
              <option value="Mexico">Mexico</option>
              <option value="Micronesia, Federated States of">Micronesia, Federated States of</option>
              <option value="Moldova">Moldova</option>
              <option value="Monaco">Monaco</option>
              <option value="Mongolia">Mongolia</option>
              <option value="Montenegro">Montenegro</option>
              <option value="Montserrat">Montserrat</option>
              <option value="Morocco">Morocco</option>
              <option value="Mozambique">Mozambique</option>
              <option value="Myanmar">Myanmar</option>
              <option value="Namibia">Namibia</option>
              <option value="Nauru">Nauru</option>
              <option value="Nepal">Nepal</option>
              <option value="New Caledonia">New Caledonia</option>
              <option value="New Zealand">New Zealand</option>
              <option value="Nicaragua">Nicaragua</option>
              <option value="Niger">Niger</option>
              <option value="Nigeria">Nigeria</option>
              <option value="Niue">Niue</option>
              <option value="Norfolk Island">Norfolk Island</option>
              <option value="North Korea">North Korea</option>
              <option value="Northern Mariana Islands">Northern Mariana Islands</option>
              <option value="Norway">Norway</option>
              <option value="Oman">Oman</option>
              <option value="Pakistan">Pakistan</option>
              <option value="Palau">Palau</option>
              <option value="Palestine, State of">Palestine, State of</option>
              <option value="Panama">Panama</option>
              <option value="Papua New Guinea">Papua New Guinea</option>
              <option value="Paraguay">Paraguay</option>
              <option value="Peru">Peru</option>
              <option value="Philippines">Philippines</option>
              <option value="Pitcairn">Pitcairn</option>
              <option value="Poland">Poland</option>
              <option value="Portugal">Portugal</option>
              <option value="Puerto Rico">Puerto Rico</option>
              <option value="Qatar">Qatar</option>
              <option value="Réunion">Réunion</option>
              <option value="Romania">Romania</option>
              <option value="Russian Federation">Russian Federation</option>
              <option value="Rwanda">Rwanda</option>
              <option value="Saint Barthélemy">Saint Barthélemy</option>
              <option value="Saint Helena">Saint Helena</option>
              <option value="Saint Kitts and Nevis">Saint Kitts and Nevis</option>
              <option value="Saint Lucia">Saint Lucia</option>
              <option value="Saint Vincent and the Grenadines">Saint Vincent and the Grenadines</option>
              <option value="Saint-Martin (France)">Saint-Martin (France)</option>
              <option value="Samoa">Samoa</option>
              <option value="San Marino">San Marino</option>
              <option value="Sao Tome and Principe">Sao Tome and Principe</option>
              <option value="Saudi Arabia">Saudi Arabia</option>
              <option value="Senegal">Senegal</option>
              <option value="Serbia">Serbia</option>
              <option value="Seychelles">Seychelles</option>
              <option value="Sierra Leone">Sierra Leone</option>
              <option value="Singapore">Singapore</option>
              <option value="Sint Maarten (Dutch part)">Sint Maarten (Dutch part)</option>
              <option value="Slovakia">Slovakia</option>
              <option value="Slovenia">Slovenia</option>
              <option value="Solomon Islands">Solomon Islands</option>
              <option value="Somalia">Somalia</option>
              <option value="South Africa">South Africa</option>
              <option value="South Georgia and the South Sandwich Islands">South Georgia and the South Sandwich Islands</option>
              <option value="South Korea">South Korea</option>
              <option value="South Sudan">South Sudan</option>
              <option value="Spain">Spain</option>
              <option value="Sri Lanka">Sri Lanka</option>
              <option value="St. Pierre and Miquelon">St. Pierre and Miquelon</option>
              <option value="Sudan">Sudan</option>
              <option value="Suriname">Suriname</option>
              <option value="Svalbard and Jan Mayen Islands">Svalbard and Jan Mayen Islands</option>
              <option value="Swaziland">Swaziland</option>
              <option value="Sweden">Sweden</option>
              <option value="Switzerland">Switzerland</option>
              <option value="Syria">Syria</option>
              <option value="Taiwan">Taiwan</option>
              <option value="Tajikistan">Tajikistan</option>
              <option value="Tanzania">Tanzania</option>
              <option value="Thailand">Thailand</option>
              <option value="The Netherlands">The Netherlands</option>
              <option value="Timor-Leste">Timor-Leste</option>
              <option value="Togo">Togo</option>
              <option value="Tokelau">Tokelau</option>
              <option value="Tonga">Tonga</option>
              <option value="Trinidad and Tobago">Trinidad and Tobago</option>
              <option value="Tunisia">Tunisia</option>
              <option value="Turkey">Turkey</option>
              <option value="Turkmenistan">Turkmenistan</option>
              <option value="Turks and Caicos Islands">Turks and Caicos Islands</option>
              <option value="Tuvalu">Tuvalu</option>
              <option value="Uganda">Uganda</option>
              <option value="Ukraine">Ukraine</option>
              <option value="United Arab Emirates">United Arab Emirates</option>
              <option value="United Kingdom">United Kingdom</option>
              <option value="United States">United States</option>
              <option value="United State Minor Outlying Islands">United State Minor Outlying Islands</option>
              <option value="Uruguay">Uruguay</option>
              <option value="Uzbekistan">Uzbekistan</option>
              <option value="Vanuatu">Vanuatu</option>
              <option value="Vatican">Vatican</option>
              <option value="Venezuela">Venezuela</option>
              <option value="Vietnam">Vietnam</option>
              <option value="Virgin Islands (British)">Virgin Islands (British)</option>
              <option value="Virgin Islands (U.S.)">Virgin Islands (U.S.)</option>
              <option value="Wallis and Futuna Islands">Wallis and Futuna Islands</option>
              <option value="Western Sahara">Western Sahara</option>
              <option value="Yemen">Yemen</option>
              <option value="Zambia">Zambia</option>
              <option value="Zimbabwe">Zimbabwe</option>
            </select>
            <input class="field_type" type="hidden" data-field-type="dropdown"/>
          </div>
          <div class="mimi_field checkgroup" id="signup_audience_lists">
            <div class="checkbox">
              <label for="list_2463552">
                <input class="checkbox" id="list_2463552" name="lists[]" value="2463552" type="checkbox"/>
                BID Africa
              </label>
            </div>
            <div class="checkbox">
              <label for="list_2463553">
                <input class="checkbox" id="list_2463553" name="lists[]" value="2463553" type="checkbox"/>
                BID Caribbean
              </label>
            </div>
            <div class="checkbox">
              <label for="list_2463554">
                <input class="checkbox" id="list_2463554" name="lists[]" value="2463554" type="checkbox"/>
                BID Pacific
              </label>
            </div>
            <div class="checkbox">
              <label for="list_2463654">
                <input class="checkbox" id="list_2463654" name="lists[]" value="2463654" type="checkbox"/>
                GBIF Newsletter
              </label>
            </div>
          </div>
          <div class="mimi_field">
            <input type="submit" class="submit btn btn-primary" value="Sign me up!" id="webform_submit_button" data-default-text="Sign me up!" data-submitting-text="Sending..." data-invalid-text="↑ You forgot some required fields" data-choose-list="↑ Choose a list" data-thanks="Thank you!"/>
          </div>
        </form>
        <script type="text/javascript">
          (function(global) {
            function serialize(form){if(!form||form.nodeName!=="FORM"){return }var i,j,q=[];for(i=form.elements.length-1;i>=0;i=i-1){if(form.elements[i].name===""){continue}switch(form.elements[i].nodeName){case"INPUT":switch(form.elements[i].type){case"text":case"hidden":case"password":case"button":case"reset":case"submit":q.push(form.elements[i].name+"="+encodeURIComponent(form.elements[i].value));break;case"checkbox":case"radio":if(form.elements[i].checked){q.push(form.elements[i].name+"="+encodeURIComponent(form.elements[i].value))}break;case"file":break}break;case"TEXTAREA":q.push(form.elements[i].name+"="+encodeURIComponent(form.elements[i].value));break;case"SELECT":switch(form.elements[i].type){case"select-one":q.push(form.elements[i].name+"="+encodeURIComponent(form.elements[i].value));break;case"select-multiple":for(j=form.elements[i].options.length-1;j>=0;j=j-1){if(form.elements[i].options[j].selected){q.push(form.elements[i].name+"="+encodeURIComponent(form.elements[i].options[j].value))}}break}break;case"BUTTON":switch(form.elements[i].type){case"reset":case"submit":case"button":q.push(form.elements[i].name+"="+encodeURIComponent(form.elements[i].value));break}break}}return q.join("&")};


            function extend(destination, source) {
              for (var prop in source) {
                destination[prop] = source[prop];
              }
            }

            if (!Mimi) var Mimi = {};
            if (!Mimi.Signups) Mimi.Signups = {};

            Mimi.Signups.EmbedValidation = function() {
              this.initialize();

              var _this = this;
              if (document.addEventListener) {
                this.form.addEventListener('submit', function(e){
                  _this.onFormSubmit(e);
                });
              } else {
                this.form.attachEvent('onsubmit', function(e){
                  _this.onFormSubmit(e);
                });
              }
            };

            extend(Mimi.Signups.EmbedValidation.prototype, {
              initialize: function() {
                this.form         = document.getElementById('ema_signup_form');
                this.submit       = document.getElementById('webform_submit_button');
                this.callbackName = 'jsonp_callback_' + Math.round(100000 * Math.random());
                this.validEmail   = /.+@.+\..+/
              },

              onFormSubmit: function(e) {
                e.preventDefault();

                this.validate();
                if (this.isValid) {
                  this.submitForm();
                } else {
                  this.revalidateOnChange();
                }
              },

              validate: function() {
                this.isValid = true;
                this.emailValidation();
                this.fieldAndListValidation();
                this.updateFormAfterValidation();
              },

              emailValidation: function() {
                var email = document.getElementById('signup_email');

                if (this.validEmail.test(email.value)) {
                  this.removeTextFieldError(email);
                } else {
                  this.textFieldError(email);
                  this.isValid = false;
                }
              },

              fieldAndListValidation: function() {
                var fields = this.form.querySelectorAll('.mimi_field.required');

                for (var i = 0; i < fields.length; ++i) {
                  var field = fields[i],
                    type  = this.fieldType(field);
                  if (type === 'checkboxes' || type === 'radio_buttons') {
                    this.checkboxAndRadioValidation(field);
                  } else {
                    this.textAndDropdownValidation(field, type);
                  }
                }
              },

              fieldType: function(field) {
                var type = field.querySelectorAll('.field_type');

                if (type.length) {
                  return type[0].getAttribute('data-field-type');
                } else if (field.className.indexOf('checkgroup') >= 0) {
                  return 'checkboxes';
                } else {
                  return 'text_field';
                }
              },

              checkboxAndRadioValidation: function(field) {
                var inputs   = field.getElementsByTagName('input'),
                  selected = false;

                for (var i = 0; i < inputs.length; ++i) {
                  var input = inputs[i];
                  if((input.type === 'checkbox' || input.type === 'radio') && input.checked) {
                    selected = true;
                  }
                }

                if (selected) {
                  field.className = field.className.replace(/ invalid/g, '');
                } else {
                  if (field.className.indexOf('invalid') === -1) {
                    field.className += ' invalid';
                  }

                  this.isValid = false;
                }
              },

              textAndDropdownValidation: function(field, type) {
                var inputs = field.getElementsByTagName('input');

                for (var i = 0; i < inputs.length; ++i) {
                  var input = inputs[i];
                  if (input.name.indexOf('signup') >= 0) {
                    if (type === 'text_field') {
                      this.textValidation(input);
                    } else {
                      this.dropdownValidation(field, input);
                    }
                  }
                }
                this.htmlEmbedDropdownValidation(field);
              },

              textValidation: function(input) {
                if (input.id === 'signup_email') return;

                if (input.value) {
                  this.removeTextFieldError(input);
                } else {
                  this.textFieldError(input);
                  this.isValid = false;
                }
              },

              dropdownValidation: function(field, input) {
                if (input.value) {
                  field.className = field.className.replace(/ invalid/g, '');
                } else {
                  if (field.className.indexOf('invalid') === -1) field.className += ' invalid';
                  this.onSelectCallback(input);
                  this.isValid = false;
                }
              },

              htmlEmbedDropdownValidation: function(field) {
                var dropdowns = field.querySelectorAll('.mimi_html_dropdown');
                var _this = this;

                for (var i = 0; i < dropdowns.length; ++i) {
                  var dropdown = dropdowns[i];

                  if (dropdown.value) {
                    field.className = field.className.replace(/ invalid/g, '');
                  } else {
                    if (field.className.indexOf('invalid') === -1) field.className += ' invalid';
                    this.isValid = false;
                    dropdown.onchange = (function(){ _this.validate(); });
                  }
                }
              },

              textFieldError: function(input) {
                input.className   = 'required invalid form-control';
                input.placeholder = input.getAttribute('data-required-field');
              },

              removeTextFieldError: function(input) {
                input.className   = 'required form-control';
                input.placeholder = '';
              },

              onSelectCallback: function(input) {
                if (typeof Widget === 'undefined' || !Widget.BasicDropdown) return;

                var dropdownEl = input.parentNode,
                  instances  = Widget.BasicDropdown.instances,
                  _this = this;

                for (var i = 0; i < instances.length; ++i) {
                  var instance = instances[i];
                  if (instance.wrapperEl === dropdownEl) {
                    instance.onSelect = function(){ _this.validate() };
                  }
                }
              },

              updateFormAfterValidation: function() {
                this.form.className   = this.setFormClassName();
                this.submit.value     = this.submitButtonText();
                this.submit.disabled  = !this.isValid;
                this.submit.className = this.isValid ? 'submit' : 'disabled';
              },

              setFormClassName: function() {
                var name = this.form.className;

                if (this.isValid) {
                  return name.replace(/\s?mimi_invalid/, '');
                } else {
                  if (name.indexOf('mimi_invalid') === -1) {
                    return name += ' mimi_invalid';
                  } else {
                    return name;
                  }
                }
              },

              submitButtonText: function() {
                var invalidFields = document.querySelectorAll('.invalid'),
                  text;

                if (this.isValid || !invalidFields) {
                  text = this.submit.getAttribute('data-default-text');
                } else {
                  if (invalidFields.length || invalidFields[0].className.indexOf('checkgroup') === -1) {
                    text = this.submit.getAttribute('data-invalid-text');
                  } else {
                    text = this.submit.getAttribute('data-choose-list');
                  }
                }
                return text;
              },

              submitForm: function() {
                this.formSubmitting();

                var _this = this;
                window[this.callbackName] = function(response) {
                  delete window[this.callbackName];
                  document.body.removeChild(script);
                  _this.onSubmitCallback(response);
                };

                var script = document.createElement('script');
                script.src = this.formUrl('json');
                document.body.appendChild(script);
              },

              formUrl: function(format) {
                var action  = this.form.action;
                if (format === 'json') action += '.json';
                return action + '?callback=' + this.callbackName + '&' + serialize(this.form);
              },

              formSubmitting: function() {
                this.form.className  += ' mimi_submitting';
                this.submit.value     = this.submit.getAttribute('data-submitting-text');
                this.submit.disabled  = true;
                this.submit.className = 'disabled';
              },

              onSubmitCallback: function(response) {
                if (response.success) {
                  this.onSubmitSuccess(response.result);
                } else {
                  top.location.href = this.formUrl('html');
                }
              },

              onSubmitSuccess: function(result) {
                if (result.has_redirect) {
                  top.location.href = result.redirect;
                } else if(result.single_opt_in || !result.confirmation_html) {
                  this.disableForm();
                  this.updateSubmitButtonText(this.submit.getAttribute('data-thanks'));
                } else {
                  this.showConfirmationText(result.confirmation_html);
                }
              },

              showConfirmationText: function(html) {
                var fields = this.form.querySelectorAll('.mimi_field');

                for (var i = 0; i < fields.length; ++i) {
                  fields[i].style['display'] = 'none';
                }

                (this.form.querySelectorAll('fieldset')[0] || this.form).innerHTML = html;
              },

              disableForm: function() {
                var elements = this.form.elements;
                for (var i = 0; i < elements.length; ++i) {
                  elements[i].disabled = true;
                }
              },

              updateSubmitButtonText: function(text) {
                this.submit.value = text;
              },

              revalidateOnChange: function() {
                var fields = this.form.querySelectorAll(".mimi_field.required"),
                  _this = this;

                for (var i = 0; i < fields.length; ++i) {
                  var inputs = fields[i].getElementsByTagName('input');
                  for (var j = 0; j < inputs.length; ++j) {
                    if (this.fieldType(fields[i]) === 'text_field') {
                      inputs[j].onkeyup = function() {
                        var input = this;
                        if (input.getAttribute('name') === 'signup[email]') {
                          if (_this.validEmail.test(input.value)) _this.validate();
                        } else {
                          if (input.value.length === 1) _this.validate();
                        }
                      }
                    } else {
                      inputs[j].onchange = function(){ _this.validate() };
                    }
                  }
                }
              }
            });

            if (document.addEventListener) {
              document.addEventListener("DOMContentLoaded", function() {
                new Mimi.Signups.EmbedValidation();
              });
            }
            else {
              window.attachEvent('onload', function() {
                new Mimi.Signups.EmbedValidation();
              });
            }
          })(this);
        </script>
      </div>
    </div>
  </div>
  <div class="row">
    <div class="col-xs-12">
      <a href="/newsroom/news" class="btn btn-primary">More GBIF news</a>
      <?php if ($footer): ?>
        <div class="view-footer">
          <?php print $footer; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
  <?php /* class view */ ?>
</div>