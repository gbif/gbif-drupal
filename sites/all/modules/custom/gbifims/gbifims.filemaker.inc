<?php
/**
 *
 * @defgroup  Cron
 * @ingroup GBIF
 *
 * Attempt to keep the FileMaker related 
 * functions separate from the main module
 */

/**
 * Break apart each of the data migration tasks 
 */
function _gbifims_doContact() {
	
		db_query('TRUNCATE {gbifims_Contact}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Contact' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Contact:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ; 
				$FMResults[$key]['ContactID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_CountryID_Address') ;
				$FMResults[$key]['CountryID_Address'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$tmp = $record->getField('_kf_InstitutionID') ; 
				$FMResults[$key]['InstitutionID'] = (empty($tmp)) ? NULL : (int)$tmp ; 
				
				$FMResults[$key]['Name_First'] = $record->getField('Name_First') ;
				$FMResults[$key]['Name_Middle'] = $record->getField('Name_Middle') ;
				$FMResults[$key]['Name_Last'] =  $record->getField('Name_Last') ;
				
				$tmp = $record->getField('Address') ; 
				$FMResults[$key]['Address'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('City') ; 
				$FMResults[$key]['City'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('Email') ; 
				$FMResults[$key]['Email'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('Fax') ; 
				$FMResults[$key]['Fax'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('OnTheWeb') ; 
				$FMResults[$key]['OnTheWeb'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$tmp = $record->getField('Job_Position') ; 
				$FMResults[$key]['Job_Position'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('Phone_Office') ; 
				$FMResults[$key]['Phone_Office'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('ZipCode') ; 
				$FMResults[$key]['ZipCode'] = (empty($tmp)) ? NULL : $tmp ; 
				
				$tmp = $record->getField('GBIF_Order') ;
				$FMResults[$key]['GBIF_Order'] = (empty($tmp)) ? NULL : (int)$tmp ;

				$tmp = $record->getField('Job_Description') ; 
				$FMResults[$key]['Job_Description'] = (empty($tmp)) ? NULL : $tmp ;
				
				$tmp = $record->getField('URL') ; 
				$FMResults[$key]['URL'] = (empty($tmp)) ? NULL : $tmp ; 

				$tmp = 	$record->getField('GBIF_Staff') ;
				$FMResults[$key]['GBIF_Staff'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$FMResults[$key]['zz__PEOP_SuperContainer_IMGURL__lct'] = $record->getField('zz__PEOP_SuperContainer_IMGURL__lct') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Contact') 
							->fields( $values )
							->execute();
			
		}
}



function _gbifims_ContactGrouproleNodeParticipant() {
	
		db_query('TRUNCATE {gbifims_ContactGrouproleNodeParticipant}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__ContactGrouproleNodeParticipant' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			gbifims_queue_report_work(1,$item,'FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'CGNP:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ;
				
				$FMResults[$key]['ContactGrouproleNodeParticipantID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_ContactID') ;
				$FMResults[$key]['ContactID'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$tmp = $record->getField('_kf_GrouproleID') ; 
				$FMResults[$key]['GrouproleID'] = (empty($tmp)) ? NULL : (int)$tmp ; 

				$tmp = $record->getField('_kf_NodeID') ;
				$FMResults[$key]['NodeID'] = (empty($tmp)) ? NULL : (int)$tmp ;

				$tmp = 	$record->getField('_kf_ParticipantID') ;
				$FMResults[$key]['ParticipantID'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$FMResults[$key]['Active'] = $record->getField('Active') ;

			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_ContactGrouproleNodeParticipant') 
							->fields( $values )
							->execute();
			
		}
}


function _gbifims_doGroup() {
	
		db_query('TRUNCATE {gbifims_Group}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Group' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Group:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ; 
				
				$FMResults[$key]['GroupID'] = $record->getField('__kp_ID') ;
				
				$FMResults[$key]['Name'] = $record->getField('Name') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Group') 
							->fields( $values )
							->execute();
			
		}
}

function _gbifims_doGrouprole() {
	
		db_query('TRUNCATE {gbifims_Grouprole}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Grouprole' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Grouprole:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '';
				
				$FMResults[$key]['GrouproleID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_GroupID') ;
				$FMResults[$key]['GroupID'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$tmp = $record->getField('Sort_Order__lcn') ;
				$FMResults[$key]['SortOrder'] = (empty($tmp)) ? 0 : (int)$tmp ;

								
				$FMResults[$key]['Name'] = $record->getField('Name') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Grouprole') 
							->fields( $values )
							->execute();
			
		}
}


function _gbifims_doInstitution() {
	
		db_query('TRUNCATE {gbifims_Institution}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Institution' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Institution:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ;
				$FMResults[$key]['InstitutionID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_CountryID') ;
				$FMResults[$key]['CountryID'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$FMResults[$key]['Acronym'] = $record->getField('Acronym') ;
				$FMResults[$key]['Address'] = $record->getField('Address') ;
				$FMResults[$key]['City'] =  $record->getField('City') ;
				$FMResults[$key]['Description'] = $record->getField('Description') ;
				$FMResults[$key]['Email'] = $record->getField('Email') ;
				$FMResults[$key]['Name'] = $record->getField('Name') ;
				$FMResults[$key]['State'] = $record->getField('State') ;
				$FMResults[$key]['Telephone'] = $record->getField('Telephone') ;
				$FMResults[$key]['ZipCode'] = $record->getField('ZipCode') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Institution') 
							->fields( $values )
							->execute();
			
		}
}



function _gbifims_doCountry() {
	
		db_query('TRUNCATE {gbifims_Country}');
	
		$resultSetError = FALSE;
		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Country' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Country:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ; 
				$FMResults[$key]['CountryID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_RegionID') ;
				$FMResults[$key]['RegionID'] = (empty($tmp)) ? NULL : (int)$tmp ;
			
				$FMResults[$key]['ISO2'] = $record->getField('ISO2') ;
				$FMResults[$key]['ISO3'] = $record->getField('ISO3') ;
				$FMResults[$key]['Name'] =  $record->getField('Name') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Country') 
							->fields( $values )
							->execute();
			
		}
}


/**
*
* Break apart each of the data migration tasks 
*
*/
function _gbifims_doNode() {
	
		db_query('TRUNCATE {gbifims_Node}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Node' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Node:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ; 
				$FMResults[$key]['NodeID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_ParticipantID') ;
				$FMResults[$key]['ParticipantID'] = (empty($tmp)) ? NULL : (int)$tmp ;
			
				$FMResults[$key]['Name_Full'] = $record->getField('Name_Full') ;
				$FMResults[$key]['Name_Acronym'] = $record->getField('Name_Acronym') ;
				$FMResults[$key]['URL'] =  $record->getField('URL') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Node') 
							->fields( $values )
							->execute();
			
		}
}


function _gbifims_doParticipant() {
	
		db_query('TRUNCATE {gbifims_Participant}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__Participant' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Participant:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ; 
				$FMResults[$key]['ParticipantID'] = $record->getField('__kp_ID') ;
				
				$tmp = $record->getField('_kf_RegionID') ;
				$FMResults[$key]['RegionID'] = (empty($tmp)) ? NULL : (int)$tmp ;
				
				$tmp = $record->getField('_kf_CountryID') ; 
				$FMResults[$key]['CountryID'] = (empty($tmp)) ? NULL : (int)$tmp ; 
				
				$tmp = $record->getField('_kf_InstitutionID') ; 
				$FMResults[$key]['InstitutionID'] = (empty($tmp)) ? NULL : (int)$tmp ; 
				
				$FMResults[$key]['GBIFmembership'] = $record->getField('GBIFmembership') ;
				
				$tmp = $record->getField('Member_AsOf') ; 
				if ( !empty( $tmp ) ) {
					// original field is returned as "April 2001"
					$tmp = '01 '. $tmp . ' 00:00' ;
					$cur_format = 'd F Y H:i';
					$date = DateTime::createFromFormat($cur_format, $tmp);
  					$member_asof = $date->format('Y-m-d h:i') ;
					$FMResults[$key]['Member_AsOf'] = $member_asof ;
				} else {
					$FMResults[$key]['Member_AsOf'] = NULL ;
				}
				
				
				$FMResults[$key]['Name_Full'] = $record->getField('Name_Full') ;
				$FMResults[$key]['Name_Short'] =  $record->getField('Name_Short') ;
				
				$FMResults[$key]['PublicDescription'] = $record->getField('PublicDescription') ; 
				
				$tmp = $record->getField('MOU2012_Date') ;
				if ( !empty( $tmp ) ) {
					// format is (so far...) 'mm/dd/yyyy' so we only patch the time
 					$tmp .= ' 00:00' ;
					$cur_format = 'm/d/Y H:i';
					$date = DateTime::createFromFormat($cur_format, $tmp);
  					$mou2012_date = $date->format('Y-m-d h:i') ;
					$FMResults[$key]['MOU2012_Date'] = $mou2012_date ;
				} else {
					$FMResults[$key]['MOU2012_Date'] = NULL ;
				}
				
				$FMResults[$key]['Host_URL'] = $record->getField('Host_URL') ; 

			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_Participant') 
							->fields( $values )
							->execute();
			
		}
}

function _gbifims_doGBIFarea() {
	
		db_query('TRUNCATE {gbifims_GBIFarea}');
	
		$resultSetError = FALSE;

		$FMAccess = new db ;

		$FMFindCMD = $FMAccess->newFindCommand( '__GBIFarea' );
		$FMFindCMD->addFindCriterion( '', '');		

		$FMResult = $FMFindCMD->execute();

		if ( FileMaker::isError( $FMResult ) ) {
			$resultSetError = TRUE ;
			$resultSetErrorMessage = $FMResult->getMessage() ;
			$resultSetErrorCode = $FMResult->code ;
			drupal_set_message('FileMaker Error:'.$resultSetErrorMessage);
		} else {
			$resultSet = $FMResult->getRecords();
			$resultSetNumRecords = count( $resultSet ) ;		

			gbifims_queue_report_work(1,$item,'Area:'.$resultSetNumRecords.' records');
			
			$FMResults = array() ;
			foreach ( $resultSet as $key => $record ) {
				$FMResults[] = array ();
				$tmp = '' ; 
				
				$FMResults[$key]['GBIFareaID'] = $record->getField('__kp_ID') ;
				
				$FMResults[$key]['GBIFarea'] = $record->getField('GBIFarea') ;
				$FMResults[$key]['Drupal_tid'] = $record->getField('_kf_Drupal_tid') ;
			}
			
			foreach ($FMResults as $values) 
				$mytmp = db_insert('gbifims_GBIFarea') 
							->fields( $values )
							->execute();
			
		}
}





function _gbifims_get_ParticipantsList( $type ) {
$PList = '' ;

switch ($type) {
	case 'Voting Participant':
		$where = 'gbifims_Participant.GBIFMembership = :ptype';
	case 'Associate Country Participant':
		$where = 'gbifims_Participant.GBIFMembership = :ptype';
	case 'Other Associate Participant':
		$where = 'gbifims_Participant.GBIFMembership = :ptype';
		// explicitelly fall through from all above
		$ptype = array ( ':ptype'=> $type );
		break ;
	case 'All':
		$where = "(gbifims_Participant.GBIFMembership = 'Voting Participant' OR gbifims_Participant.GBIFMembership = 'Associate Country Participant' OR gbifims_Participant.GBIFMembership = 'Other Associate Participant') ";
		$ptype = array ();
}
	
$result = db_query('SELECT gbifims_Participant.Name_Short, gbifims_Participant.Name_Full, Contacts.Name_First, Contacts.Name_Last, Contacts.CountryNameAdd, 
						Contacts.GrouproleName, Contacts.Job_Position, Contacts.Institution, Contacts.Address, Contacts.AddrInstitution, Contacts.Email, Contacts.City, Contacts.ZipCode, Contacts.Phone_Office, Contacts.Fax
					FROM gbifims_Participant
					LEFT JOIN gbifims_Institution ON gbifims_Participant.InstitutionID = gbifims_Institution.InstitutionID
					LEFT JOIN gbifims_Country ON gbifims_Participant.CountryID = gbifims_Country.CountryID
					LEFT JOIN ( SELECT gbifims_Participant.ParticipantId AS PId, gbifims_Contact.Name_First, gbifims_Contact.Name_Last, gbifims_ContactGrouproleNodeParticipant.Active, c2.Name AS CountryNameAdd, 
									gbifims_Grouprole.Name AS GrouproleName, gbifims_Contact.Job_Position, gbifims_Institution.Name AS Institution, AddrInstitution.Name AS AddrInstitution, gbifims_Grouprole.SortOrder, gbifims_Contact.Address, gbifims_Contact.Email, gbifims_Contact.City, gbifims_Contact.ZipCode, gbifims_Contact.Phone_Office, gbifims_Contact.Fax
								FROM gbifims_Participant
								LEFT JOIN gbifims_Institution ON gbifims_Participant.InstitutionID = gbifims_Institution.InstitutionID
								LEFT JOIN gbifims_Country ON gbifims_Participant.CountryID = gbifims_Country.CountryID
								LEFT JOIN gbifims_ContactGrouproleNodeParticipant ON gbifims_Participant.ParticipantID = gbifims_ContactGrouproleNodeParticipant.ParticipantID
								LEFT JOIN gbifims_Contact ON gbifims_ContactGrouproleNodeParticipant.ContactID = gbifims_Contact.ContactID
								LEFT JOIN gbifims_Institution AddrInstitution ON gbifims_Contact.InstitutionID = AddrInstitution.InstitutionID
								LEFT JOIN gbifims_Country c2 ON gbifims_Contact.CountryID_Address = c2.CountryID 
								LEFT JOIN gbifims_Grouprole ON gbifims_ContactGrouproleNodeParticipant.GrouproleID = gbifims_Grouprole.GrouproleID
								WHERE '.$where.'
								AND gbifims_ContactGrouproleNodeParticipant.Active = 1
					) AS Contacts ON gbifims_Participant.ParticipantID = Contacts.PID
					WHERE '.$where.'
					ORDER BY gbifims_Participant.Name_Full, Contacts.SortOrder, Contacts.Name_First', 
					array(':ptype'=>$type)
					);

$dbrows = $result->fetchAll();
/* Wanna build an array keyed by Name_Short; for countries short and full are the same
	['Argentina'][0] = array (
          'Name_Full' => 'Argentina' 
          'Name_First' => 'Edgardo Juan' 
          'Name_Last' => 'Romero'
          'GrouproleName' => 'Head of delegation'
          'Job_Position' => 'Programmer'
          'CountryNameAdd' => 'Argentina'
          'Address' => 'Av. Angel Gallardo 470'
          'Email' => 'ejromero@macn.gov.ar'
          'City' => 'Buenos Aires'
          'ZipCode' => string '1405 '
          'Phone_Office' => '++54 11 4982 0306' 
          'Fax' => '++54  11  4982  5243' )
	['Argentina'][1] = array (
          'Name_Full' => 'Argentina'
          'Name_First' => 'Arturo Jose'
          'Name_Last' => 'Martinez'
          'GrouproleName' => 'Additional delegate'
          'CountryNameAdd' => null
          'Address' => 'Consejo Nacional de Investigaciones Cientificas y Técnicas (CONICET)'
          ...
*/

$resultsize = count( array_keys( $dbrows ) ); 
$row = 0 ;

while ( $row < $resultsize ) {
	$i = 0;

	do {
		$participants[$dbrows[$row]->Name_Short][$i] = array( 'Name_Full'=>$dbrows[$row+$i]->Name_Full, 
															'Name_First'=>$dbrows[$row+$i]->Name_First, 
															'Name_Last'=>$dbrows[$row+$i]->Name_Last, 
															'GrouproleName'=>$dbrows[$row+$i]->GrouproleName, 
															'Institution'=>$dbrows[$row+$i]->Institution, 
															'AddrInstitution'=>$dbrows[$row+$i]->AddrInstitution, 
															'Job_Position'=>$dbrows[$row+$i]->Job_Position, 
															'CountryNameAdd'=>$dbrows[$row+$i]->CountryNameAdd, 
															'Address'=>$dbrows[$row+$i]->Address, 
															'Email'=>$dbrows[$row+$i]->Email, 
															'City'=>$dbrows[$row+$i]->City, 
															'ZipCode'=>$dbrows[$row+$i]->ZipCode, 
															'Phone_Office'=>$dbrows[$row+$i]->Phone_Office, 
															'Fax'=>$dbrows[$row+$i]->Fax) ;
		$i++;
	} while ( $dbrows[$row]->Name_Short == $dbrows[$row+$i]->Name_Short ) ;

	$row += $i ;

} 

$PList = '<table style="" class="table table-curved"><tbody><tr><th width="30%">Participant</th><th>Delegation members</th></tr>';

foreach ( $participants as $p => $data ) {
	$PList .= "<tr><td>{$p}</td><td>";
	foreach ( $data as $d ) {
		if ( !empty( $d['Name_First'] ) ) {
			$PList .= " 
			<div class='contact'>
				<a name='{$d['Name_First']},{$d['Name_Last']}'></a>
				<div class='contactName'>{$d['Name_First']} {$d['Name_Last']}  ({$d['GrouproleName']})</div>
				<div style='display: none;'>
					<div class='contactPosition'>{$d['Job_Position']}</div>
					<div class='contactInstitution'>{$d['AddrInstitution']}</div>
					<div class='address'>
						<span>{$d['Address']}</span>
						<span class='city'>{$d['City']}</span>
						<span class='country'>{$d['CountryNameAdd']}</span>
						<span class='email'><a href='mailto:{$d['Email']} title='email'>{$d['Email']}</a></span>
						<span class='phone'>{$d['Phone_Office']}</span>
						<span class='phone'>{$d['Fax']}</span>
					</div>
				</div>
			</div>
			";
		} else {
 			$PList .= "<em style='color:#D0D0D0'>No official delegation information</em> " ;
		}
	}
	$PList .= '</td></tr>' ;
}


$PList .= '</tbody></table>' ;

return $PList ;

}


function _gbifims_get_SecretariatList () {
	$CList = '';

	$result = db_query('SELECT * FROM gbifims_Contact WHERE GBIF_Staff = 1 ORDER BY GBIF_Order') ;

	$CList = '<table style="" class="table table-curved"><tbody>';
	// <thead><tr><th colspan="2" >'.$options[1].'</th><tr></thead>
	foreach ($result as $row) {
		$CList .= '<tr><td>';
		$CList .= '<div class="contact">';
		$CList .= '<a name="' . $row->Name_First . ',' . $row->Name_Last . '"></a>';
		$CList .= '<div class="contactName">' . $row->Name_First . ' ' . $row->Name_Last . '</div>';
		$CList .= '<div style="display: none;">';
		$CList .= '<div class="contactPosition">' . $row->Job_Position . '</div>';
		$CList .= '<div class="address">';
		$CList .= '<span>' . $row->Address . '</span>';
		$CList .= '<span class="city">' . $row->City . '</span>';
		$CList .= '<span class="email"><a href="mailto:' . $row->Email . ' title="email">' . $row->Email . '</a></span>';
		$CList .= '<span class="phone">' . $row->Phone_Office . '</span>';
		$CList .= '<span class="phone">' . $row->Fax . '</span>';
		$CList .= '</div>';
		$CList .= '</div>';
		$CList .= '</div>';
		$CList .= '</td><td>' . $row->Job_Position . '</td>';
	}
	$CList .= '</tbody></table>' ;
	return $CList ;
}

function _gbifims_get_CommitteeList( $committee ) {
	$CList = '';

	$tempres = db_query('SELECT DISTINCT Name_First, Name_Last, Address, Email, City, ZipCode, Phone_Office, Fax, Job_Position, gbifims_Country.Name AS CountryNameAdd, gbifims_Grouprole.Name AS Role, gbifims_Grouprole.SortOrder 
						FROM {gbifims_Contact}, {gbifims_ContactGrouproleNodeParticipant}, {gbifims_Grouprole}, {gbifims_Country}
						WHERE gbifims_Contact.ContactID = gbifims_ContactGrouproleNodeParticipant.ContactID 
							AND gbifims_Contact.CountryID_Address = gbifims_Country.CountryID
							AND gbifims_Grouprole.GrouproleID = gbifims_ContactGrouproleNodeParticipant.GrouproleID 
							AND gbifims_ContactGrouproleNodeParticipant.Active = 1  
							AND gbifims_ContactGrouproleNodeParticipant.GrouproleID IN 
										(SELECT GrouproleID FROM {gbifims_Grouprole} 
										WHERE gbifims_Grouprole.GroupID IN (SELECT GroupID FROM {gbifims_Group} WHERE gbifims_Group.Name= :rcom)
										AND gbifims_Grouprole.Name <> :rSS  AND gbifims_Grouprole.Name <> :rscis) 
							GROUP BY Name_First
							ORDER BY gbifims_Grouprole.SortOrder, gbifims_Contact.GBIF_Order, Name_Last', 
									array(':rcom'=>$committee, ':rSS'=>'Secretariat Support', ':rscis'=>'Sci-staff')) ;
	$result = $tempres->fetchAll();
	
	// add the empty seats in the NSC by mathching the values from FM's __GBIFarea with the results above
	if ( $committee == 'Nodes Steering Group' ) {
		$tempres = db_query ('SELECT * FROM gbifims_GBIFarea ') ;
		$areas = $tempres->fetchAll();
		
		foreach ($result as $row ) { 
			foreach ( $areas as $key => $area ) {
				$hasNodeRep = strpos( $row->Role, $area->GBIFarea ); 
				if ( $hasNodeRep ) unset( $areas[$key] );
			}
		}
		
		if ( ! empty( $areas ) ) {
			foreach ($areas as $area) {
				$template = clone $result[0] ;
				$template->Name_First = 'pending' ;
				$template->Name_Last = 'appointment' ;
				$template->Address = '' ;
				$template->City = '' ;
				$template->CountryNameAdd = '' ;
				$template->Email = '' ;
				$template->Phone_Office = '' ;
				$template->Fax = '' ;
				$template->Job_Position = '' ;
				$template->Role = 'Regional Node Representative - '.$area->GBIFarea ;
				array_push( $result, $template );
			}
		}

	}


	// hook_theme? What hook_theme... :-| 	
	$CList = '<table style="" class="table table-curved"><tbody>';
	// <thead><tr><th colspan="2" >'.$options[1].'</th><tr></thead>
	foreach ( $result as $row) {
		$contactNameCSS = $row->Name_First == 'pending' ? '':'contactName' ; 		// remove class for "pending" so it's not clickable
		$job_or_role = ( $committee == 'GBIF Secretariat' ) ? $row->Job_Position : $row->Role ;
		$CList .= "<tr><td>
			<div class='contact'>
				<a name='$row->Name_First,$row->Name_Last'></a>
				<div class='".$contactNameCSS."'>$row->Name_First $row->Name_Last</div>
				<div style='display: none;'>
					<div class='contactPosition'>$row->Job_Position</div>
					<div class='contactInstitution'></div>
					<div class='address'>
						<span>$row->Address</span>
						<span class='city'>$row->City</span>
						<span class='country'>$row->CountryNameAdd</span>
						<span class='email'><a href='mailto:$row->Email' title='email'>$row->Email</a></span>
						<span class='phone'>$row->Phone_Office</span>
						<span class='phone'>$row->Fax</span>
					</div>
				</div>
			</div>
		</td><td>$job_or_role</td>";
	}
	$CList .= '</tbody></table>' ;
	return $CList ;
}

/* 
 * Nodes committee is special! =:-o
 *
 */
function _gbifims_get_NCList( ) {

	$CList = '';

	$result = db_query("SELECT N.Name_Full, N.Name_Acronym, 
							P.Name_Full, P.Name_Short,
							COALESCE( C.Name_First,'pending') AS Name_First, COALESCE( C.Name_Last,'appointment') AS Name_Last, C.Job_Position, C.Address, C.Email, C.City, C.ZipCode, C.Phone_Office, C.Fax, I.Acronym AS ContactInstitution, CO.Name AS ConctactCountry,
							GR.Name AS GroupRoleName, G.Name AS GroupName,
							COALESCE(GR.SortOrder,40) AS NewSort
						FROM gbifims_Node AS N
						LEFT JOIN gbifims_Participant AS P ON N.ParticipantID = P.ParticipantID
						LEFT JOIN (
							SELECT CGNP.*
							FROM gbifims_Node AS N
							LEFT JOIN gbifims_Participant AS P ON N.ParticipantID = P.ParticipantID
							LEFT JOIN gbifims_ContactGrouproleNodeParticipant AS CGNP ON CGNP.NodeID = N.NodeID
							LEFT JOIN gbifims_Grouprole AS GR ON CGNP.GrouproleID = GR.GrouproleID
							LEFT JOIN gbifims_Group AS G ON GR.GroupID = G.GroupID
							WHERE (P.GBIFMembership = 'Voting Participant' OR P.GBIFMembership = 'Associate Country Participant' OR P.GBIFMembership = 'Other Associate Participant' OR  P.ParticipantID IS NULL)
								AND ( G.Name = :nc OR G.Name IS NULL )
								AND ( GR.Name = 'Node Manager' OR GR.Name = 'Chair' OR GR.Name='1st Vice Chair' OR GR.Name='2nd Vice Chair' OR GR.Name IS NULL )
								AND GR.Name <> :GSS
								AND GR.Name <> :rSs
								AND CGNP.Active = 1
							) AS CGNP ON CGNP.NodeID = N.NodeID
						LEFT JOIN gbifims_Grouprole AS GR ON CGNP.GrouproleID = GR.GrouproleID
						LEFT JOIN gbifims_Group AS G ON GR.GroupID = G.GroupID
						LEFT JOIN gbifims_Contact AS C ON CGNP.ContactID = C.ContactID
						LEFT JOIN gbifims_Institution as I ON C.InstitutionID = I.InstitutionID
						LEFT JOIN gbifims_Country as CO ON C.CountryID_Address = CO.CountryID
						WHERE (P.GBIFMembership = 'Voting Participant' OR P.GBIFMembership = 'Associate Country Participant' OR P.GBIFMembership = 'Other Associate Participant' OR  P.ParticipantID IS NULL)
						ORDER BY NewSort, P.Name_Short", array(':nc'=>'Nodes Committee', ':rSs'=>'Secretariat support', 'GSS'=>'GBIF Secretariat Staff' )) ;

	// hook_theme? What hook_theme... :-| 

	$CList = '<table style="" class="table table-curved"><tbody>';
	// <thead><tr><th colspan="2" >'.$options[1].'</th><tr></thead>
	foreach ( $result as $row) {
		$contactNameCSS = $row->Name_First == 'pending' ? '':'contactName' ; 		// remove class for "pending" so it's not clickable
		$CList .= "<tr><td>
			<div class='contact'>
				<a name='$row->Name_First,$row->Name_Last'></a>
				<div class='".$contactNameCSS."'>$row->Name_First $row->Name_Last</div>
				<div style='display: none;'>
					<div class='contactPosition'>$row->Job_Position</div>
					<div class='contactInstitution'>$row->ContactInstitution</div>
					<div class='address'>
						<span>$row->Address</span>
						<span class='city'>$row->City</span>
						<span class='country'>$row->ConctactCountry</span>
						<span class='email'><a href='mailto:$row->Email' title='email'>$row->Email</a></span>
						<span class='phone'>$row->Phone_Office</span>
						<span class='phone'>$row->Fax</span>
					</div>
				</div>
			</div>
		</td><td width='20%'>$row->GroupRoleName</td><td width='25%'>$row->Name_Short</td>";
	}
	$CList .= '</tbody></table>' ;

	return $CList ;
}


?>