#include "triangular.h"

Triangular::Triangular(double b,double h,double h2):Triangle(b,h)
{triangularHeight=h2;

}
double Triangular::TriangularVolume()
{triangularVolume=TriangleArea() * triangularHeight*0.33333333333;
    return triangularVolume;
}
