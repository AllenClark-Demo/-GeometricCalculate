#include "cylinderfile.h"
#include<QDebug>
CylinderFile::CylinderFile():filePath_("./cylinder.date")
{}
bool CylinderFile::save(double r, double h, double v)
{ if(!dataFile_.isOpen()){
        return false;
    }
    lastNumber_+=1;
    dataFile_.seek(0);
    dataFile_.write((const char *)&lastNumber_,sizeof(int));
    CylinderDate date={ lastNumber_,"圆柱体",r,h,v};
    dataFile_.seek(dataFile_.size());
    dataFile_.write((const char *)&date,sizeof(date));
    dataFile_.flush();
    return true;
}
QList<CylinderFile::CylinderDate>CylinderFile::getAllCylinder()
{
    QList<CylinderFile::CylinderDate>dataList;
    dataFile_.seek(sizeof(int));
    CylinderDate data;
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

bool CylinderFile::inital()
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
CylinderFile *getCylinderFile()
{static CylinderFile cylinderFile;
    return &cylinderFile;
}
