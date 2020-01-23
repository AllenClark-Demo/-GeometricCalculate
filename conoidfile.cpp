#include "conoidfile.h"
#include "qdebug.h"

ConoidFile::ConoidFile():filePath1_("./conoid.date")
{}
    bool ConoidFile::save(double r, double h, double v)
    { if(!dataFile1_.isOpen()){
            return false;
        }
        lastNumber1_+=1;
        dataFile1_.seek(0);
        dataFile1_.write((const char *)&lastNumber1_,sizeof(int));
        ConoidData data={ lastNumber1_,"圆锥体",r,h,v};
        dataFile1_.seek(dataFile1_.size());
        dataFile1_.write((const char *)&data,sizeof(data));
        dataFile1_.flush();
        return true;
    }
    QList<ConoidFile::ConoidData>ConoidFile::getAllConoid()
    {
        QList<ConoidFile::ConoidData>dataList;
        dataFile1_.seek(sizeof(int));
        ConoidData data;
        qint64 readSize=0;
        bool readSuccess=false;
        do {
            readSize=dataFile1_.read((char *)&data,sizeof(data));
            readSuccess=readSize==sizeof(data);
            if(readSuccess){
                dataList.append(data);
            }
        } while(readSuccess);
        return dataList;
    }

    bool ConoidFile::inital()
    {  dataFile1_.setFileName(filePath1_);
        if(dataFile1_.open(QIODevice::ReadWrite))
        {if(dataFile1_.size()==0)
            {lastNumber1_=0;
                dataFile1_.write((const char *)&lastNumber1_,sizeof(int));
            }else
            {dataFile1_.read((char *)&lastNumber1_,sizeof(int));
            }
            return true;
        }
        else
        {return false;
        }
    }
    ConoidFile *getConoidFile()
    {static ConoidFile conoidFile;
        return &conoidFile;

    }


