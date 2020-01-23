#include "triangularfile.h"
#include<QDebug>


TriangularFile::TriangularFile():filePath_("./triangular.date")
{}
bool TriangularFile::save(double b, double h1,double h2, double v)
{ if(!dataFile_.isOpen()){
        return false;
    }
    lastNumber_+=1;
    dataFile_.seek(0);
    dataFile_.write((const char *)&lastNumber_,sizeof(int));
    TriangularDate date={ lastNumber_,"三棱锥",b,h1,h2,v};
    dataFile_.seek(dataFile_.size());
    dataFile_.write((const char *)&date,sizeof(date));
    dataFile_.flush();
    return true;
}
QList<TriangularFile::TriangularDate>TriangularFile::getAllTriangular()
{
    QList<TriangularFile::TriangularDate>dataList;
    dataFile_.seek(sizeof(int));
    TriangularDate data;
    qint64 readSize=0;
    bool readSuccess=false;
    do {
        readSize=dataFile_.read((char *)&data,sizeof(data));
        readSuccess=readSize==sizeof(data);
        if(readSuccess){
            dataList.append(data);
        }
    } while(readSuccess);
    return dataList;
}

bool TriangularFile::inital()
{  dataFile_.setFileName(filePath_);
    if(dataFile_.open(QIODevice::ReadWrite))
    {if(dataFile_.size()==0)
        {lastNumber_=0;
            dataFile_.write((const char *)&lastNumber_,sizeof(int));
        }else
        {dataFile_.read((char *)&lastNumber_,sizeof(int));
        }
        return true;
    }
    else
    {return false;
    }
}
TriangularFile *getTriangularFile()
{static TriangularFile triangularFile;
    return &triangularFile;
}
