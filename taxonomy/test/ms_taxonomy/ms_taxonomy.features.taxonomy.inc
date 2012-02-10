<?php
/**
 * @file
 * ms_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'vehicle' => array(
      'name' => 'Vehicle_Updated',
      'machine_name' => 'vehicle',
      'description' => 'Vehicle Desciription Updated',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
