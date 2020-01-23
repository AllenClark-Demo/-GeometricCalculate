#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
public:
    Triangle();
    Triangle(double Bottom,double Height);
    double TriangleArea();
private:
    double triangleBottom,triangleHeight,triangleArea;
};

#endif // TRIANGLE_H
