#ifndef CUBEFILE_H
#define CUBEFILE_H
#include<vector>
#include<QFile>


class CubeFile
{  public:
    struct CubeDate
    {int number;
        char graphics[20];
        double line;
        double volume;

    };
    CubeFile();
    bool save(double l,double v);
    QList<CubeDate>getAllCube();
    bool inital();
private:
    const char * filePath_;
    int lastNumber_;
    QFile dateFile_;

};
CubeFile *getCubeFile();

#endif // CONOIDFILE_H

