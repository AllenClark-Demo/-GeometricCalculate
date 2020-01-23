#ifndef CUBOID_H
#define CUBOID_H


class Cuboid
{
private:
    double cuboidLength,cuboidWidth,cuboidHeight,cuboidVolume;
public:
    Cuboid(double Length,double Width,double Height);
    double CuboidVolume();
};

#endif // CUBOID_H
