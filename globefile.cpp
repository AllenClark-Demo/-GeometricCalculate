#include "globefile.h"
#include<QDebug>
GlobeFile::GlobeFile():filePath_("./globe.date")
{}
bool GlobeFile::save(double r, double v)
{ if(!dataFile_.isOpen()){
        return false;
    }
    lastNumber_+=1;
    dataFile_.seek(0);
    dataFile_.write((const char *)&lastNumber_,sizeof(int));
    GlobeDate date={ lastNumber_,"球",r,v};
    dataFile_.seek(dataFile_.size());
    dataFile_.write((const char *)&date,sizeof(date));
    dataFile_.flush();
    return true;
}
QList<GlobeFile::GlobeDate>GlobeFile::getAllGlobe()
{
    QList<GlobeFile::GlobeDate>dataList;
    dataFile_.seek(sizeof(int));
    GlobeDate data;
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

bool GlobeFile::inital()
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
GlobeFile *getGlobeFile()
{static GlobeFile globeFile;
    return &globeFile;
}
