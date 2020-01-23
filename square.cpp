#include "square.h"

Square::Square(double length)


    {
        squareLength=length;

    }
double Square::SquareArea()
    {
        squareArea=squareLength*squareLength;
        return squareArea;
    }


