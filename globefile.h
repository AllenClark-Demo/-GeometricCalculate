#ifndef GLOBEFILE_H
#define GLOBEFILE_H
#include<vector>
#include<QFile>


class GlobeFile
{
public:
    struct GlobeDate
    {int number;
        char graphics[20];
        double radius;
        double volume;
    };
    GlobeFile();
    bool save(double r,double v);
    QList<GlobeDate>getAllGlobe();
    bool inital();
private:
    const char * filePath_;
    int lastNumber_;
    QFile dataFile_;

};
GlobeFile *getGlobeFile();



#endif // GLOBEFILE_H
