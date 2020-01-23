#include "globe.h"

Globe::Globe()
{}


 Globe::Globe(double Radius)
 {globeRadius=Radius;}
 double Globe::GlobeVolume()
 { globeVolume=3.14 * globeRadius *globeRadius*globeRadius*1.333333;


        return globeVolume;
 }




