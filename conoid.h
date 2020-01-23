#ifndef CONOID_H
#define CONOID_H
#include "circle.h"

class Conoid:public Circle
{
public:
    Conoid(double r,double h);
    double ConoidVolume();
private:
    double conoidHeight;
    double volume;

};

#endif // CONOID_H
