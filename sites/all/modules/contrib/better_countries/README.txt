This module provides various extenstions and (possible) improvements to the Countries modules.

It has several dependencies in addition to the obvious Countries module:
- Entity (entity)
- Libraries

The GeoNames PEAR library is also necessary for pin fetching/updating.
To install it do the following:

1. After installing and enabling the Libraries module, download
   http://download.pear.php.net/package/Services_GeoNames-1.0.1.tgz into sites/default/libraries/.

2. Extract the file with something like
      tar xvzf Services_GeoNames-1.0.1.tgz

3. Rename the extracted directory ("Services_GeoNames-1.0.1") to 'geonames'. After this, check to
  make sure you have a directory named "Services_GeoNames-1.0.1" in sites/default/libraries/geonames/,
  so that the path to  GeoNames.php is
      sites/default/libraries/geonames/Services_GeoNames-1.0.1/Services/GeoNames.php

4. Don't worry, be happy: You're done.

