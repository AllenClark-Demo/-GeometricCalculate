#ifndef TRIANGULARFILE_H
#define TRIANGULARFILE_H
#include<vector>
#include<QFile>


class TriangularFile
{
public:
    struct TriangularDate
    {int number;
        char graphics[20];
        double buttom;
        double height1;
        double height2;
        double volume;
    };
    TriangularFile();
    bool save(double b,double h1,double h2,double v);
    QList<TriangularFile>getAllTriangular();
    bool inital();
private:
    const char * filePath_;
    int lastNumber_;
    QFile dataFile_;

};
TriangularFile *getTriangularFile();

#endif // TRIANGULARFILE_H
