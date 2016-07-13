<?php

/**
 * @file
 * Contains \Drupal\gbif_restful\Plugin\resource\ResourceNodeGbifInterface.
 */

namespace Drupal\gbif_restful\Plugin\resource;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

/**
 * Interface ResourceNodeGbifInterface.
 *
 * @package Drupal\gbif_restful\Plugin\resource
 */
interface ResourceNodeGbifInterface extends ResourceInterface {

  /**
   *
   */
  public function viewUrlAlias($path);

  /**
   *
   */
  public static function getTargetUrl(DataInterpreterInterface $interpreter);

  /**
   *
   */
  public function imageProcess($value);

  /*
   * 
   */
  public static function getSystemAttributes(DataInterpreterInterface $interpreter);

  /*
   *
   */
  public static function getTermValue($value);

  /*
   *
   */
  public static function getEntityValue($value);

  /*
   *
   */
  public static function getDateValue($value);
}

