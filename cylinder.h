#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"

class Cylinder:public Circle
{
private:
    double cylinderHeight;
    double Volume;
public:
    Cylinder(double r,double h);
    double CylinderVolume();

};

#endif // CYLINDER_H
