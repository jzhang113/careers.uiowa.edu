<?php
// Plugin definition
$plugin = array(
  'title' => t('Bartlett Wide'),
  'icon' => 'bartlett-wide.png',
  'category' => t('Panopoly'),
  'theme' => 'bartlett_wide',
  'css' => 'bartlett-wide.css',
  'regions' => array(
    'contentmain' => t('Content Main'),
    'contentfeatured' => t('Content Featured'),
    'contentcolumn1' => t('Content Column 1'),
    'contentcolumn2' => t('Content Column 2'),
  ),
);
