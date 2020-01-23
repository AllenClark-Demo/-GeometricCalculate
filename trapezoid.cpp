#include "trapezoid.h"

Trapezoid::Trapezoid()
{
}
Trapezoid::Trapezoid(double Line1, double Line2,double Height)
{
trapezoidLine1=Line1;
trapezoidLine2=Line2;
trapezoidHeight=Height;
}
double Trapezoid::TrapezoidArea()
{
    trapezoidArea=0.5*(trapezoidLine1+trapezoidLine2)*trapezoidHeight;
    return trapezoidArea;
}




