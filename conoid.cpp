#include "conoid.h"

Conoid::Conoid(double r,double h):Circle(r)
{conoidHeight=h;

}
double Conoid::ConoidVolume()
{volume=CircleArea() * conoidHeight*0.3333333;
    return volume;
}


