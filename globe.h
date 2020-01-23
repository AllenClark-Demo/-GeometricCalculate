#ifndef GLOBE_H
#define GLOBE_H


class Globe
{
public:
    Globe();
    Globe(double Radius);
    double GlobeVolume();
private:
    double globeRadius,globeVolume;
};

#endif // GLOBE_H
