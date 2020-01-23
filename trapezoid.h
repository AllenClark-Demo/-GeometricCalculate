#ifndef TRAPEZOID_H
#define TRAPEZOID_H


class Trapezoid
{
public:
    Trapezoid();
    Trapezoid(double Line1,double Line2,double Height);
    double TrapezoidArea();
private:
    double trapezoidLine1,trapezoidLine2,trapezoidHeight,trapezoidArea;
};

#endif // TRAPEZOID_H
