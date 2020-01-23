#include "cylinder.h"

Cylinder::Cylinder(double r,double h):Circle(r)
{cylinderHeight=h;

}
double Cylinder::CylinderVolume()
{Volume=CircleArea() * cylinderHeight;
    return Volume;
}

