#include "cuboid.h"


 Cuboid::Cuboid(double Length,double Width,double Height)
 {cuboidLength=Length;
 cuboidHeight=Height;
 cuboidWidth=Width;}
 double Cuboid::CuboidVolume()
 { cuboidVolume=cuboidHeight*cuboidLength*cuboidWidth;


        return cuboidVolume;
 }




