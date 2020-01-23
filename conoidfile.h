#ifndef CONOIDFILE_H
#define CONOIDFILE_H
#include<vector>
#include<QFile>


class ConoidFile
{  public:
    struct ConoidData
    {int number;
        char graphics[20];
        double radius;
        double height;
        double volume;
    };
    ConoidFile();
    bool save(double r,double h,double v);
    QList<ConoidData>getAllConoid();
    bool inital();
private:
    const char * filePath1_;
    int lastNumber1_;
    QFile dataFile1_;

};
ConoidFile *getConoidFile();

#endif // CONOIDFILE_H
