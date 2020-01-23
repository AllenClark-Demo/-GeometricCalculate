#ifndef CYLINDERFILE_H
#define CYLINDERFILE_H
#include<vector>
#include<QFile>


class CylinderFile
{
public:
    struct CylinderDate
    {int number;
        char graphics[20];
        double radius;
        double height;
        double volume;
    };
    CylinderFile();
    bool save(double r,double h,double v);
    QList<CylinderDate>getAllCylinder();
    bool inital();
private:
    const char * filePath_;
    int lastNumber_;
    QFile dataFile_;

};
CylinderFile *getCylinderFile();

#endif // CYLINDERFILE_H
