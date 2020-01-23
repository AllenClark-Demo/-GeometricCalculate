#ifndef TRIANGULAR_H
#define TRIANGULAR_H
#include"triangle.h"


class Triangular:public Triangle
{public:
    Triangular(double b,double h,double h2);
    double TriangularVolume();
private:
    double triangularVolume;
    double triangularHeight;

};

#endif // TRIANGULAR_H
