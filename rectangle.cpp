#include "rectangle.h"

Rectangle::Rectangle()
{}
Rectangle::Rectangle(double line, double width)
{
    rectangleLength=line;
    rectangleWidth=width;
}
double Rectangle::RectangleArea()
{
    rectangleArea=rectangleLength*rectangleWidth;
    return rectangleArea;
}
