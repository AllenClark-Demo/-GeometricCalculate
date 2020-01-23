#ifndef CUBE_H
#define CUBE_H
#include "square.h"


class Cube:public Square
{
public:
    Cube(double l);
    double CubeVolume();
private:
    double line,cubeVolume;
};

#endif // CUBE_H
