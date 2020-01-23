#include "triangle.h"

Triangle::Triangle()
{
}
Triangle::Triangle(double Bottom, double Height)
{
    triangleBottom=Bottom;
    triangleHeight=Height;
}
double Triangle::TriangleArea()
{
    triangleArea=0.5*triangleBottom*triangleHeight;
    return triangleArea;
}
