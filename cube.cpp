#include "cube.h"


Cube::Cube(double l):Square(l)
    { line=l;


    }
    double Cube::CubeVolume()
    { cubeVolume=SquareArea()*line;
        return cubeVolume;

}

