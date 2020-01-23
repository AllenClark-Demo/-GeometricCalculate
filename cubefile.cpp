#include "cubefile.h"
#include "qdebug.h"
CubeFile::CubeFile():filePath_("./cube.date")
{}
        bool CubeFile::save(double l,double v)
        { if(!dateFile_.isOpen()){
                return false;
            }
            lastNumber_+=1;
            dateFile_.seek(0);
            dateFile_.write((const char *)&lastNumber_,sizeof(int));
            CubeDate date={ lastNumber_,"正方体",l,v};
            dateFile_.seek(dateFile_.size());
            dateFile_.write((const char *)&date,sizeof(date));
            dateFile_.flush();
            return true;
        }
        QList<CubeFile::CubeDate>CubeFile::getAllCube()
        {
            QList<CubeFile::CubeDate>dateList;
            dateFile_.seek(sizeof(int));
            CubeDate date;
            qint64 readSize=0;
            bool readSuccess=false;
            do {
                readSize=dateFile_.read((char *)&date,sizeof(date));
                readSuccess=readSize==sizeof(date);
                if(readSuccess){
                    dateList.append(date);
                }
            } while(readSuccess);
            return dateList;
        }

        bool CubeFile::inital()
        {  dateFile_.setFileName(filePath_);
            if(dateFile_.open(QIODevice::ReadWrite))
            {if(dateFile_.size()==0)
                {lastNumber_=0;
                    dateFile_.write((const char *)&lastNumber_,sizeof(int));
                }else
                {dateFile_.read((char *)&lastNumber_,sizeof(int));
                }
                return true;
            }
            else
            {return false;
            }
        }
        CubeFile *getCubeFile()
        {static CubeFile cubeFile;
            return &cubeFile;

        }




