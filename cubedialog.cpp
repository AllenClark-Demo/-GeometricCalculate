#include "cubedialog.h"
#include "ui_cubedialog.h"
#include "cubefile.h"
#include "qdebug.h"

cubedialog::cubedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cubedialog)
{
    ui->setupUi(this);
}

cubedialog::~cubedialog()
{
    delete ui;
}

void cubedialog::on_calculateButton_clicked()
{
    QString lineString=ui->lineEdit->text();
    double line=lineString.toDouble();
    Cube cube01(line);
    double volume=cube01.CubeVolume();
    ui->volumeEdit->setText(QString::number(volume,'f',2));
}

void cubedialog::on_exitButton_clicked()
{
    this->close();
}

void cubedialog::on_saveButton_clicked()
{
    QString lineString=ui->lineEdit->text();
    QString volumeString=ui->volumeEdit->text();
    double line=lineString.toDouble();
    qDebug()<<line;
    double volume=volumeString.toDouble();
    qDebug()<<volume;
    getCubeFile()->save(line,volume);
}

void cubedialog::on_lookButton_clicked()
{
    {while(ui->cubeTbWidget->rowCount())
        {ui->cubeTbWidget->removeRow(0);}
        QList<CubeFile::CubeDate>dateList=getCubeFile()->getAllCube();
        for(QList<CubeFile::CubeDate>::iterator it=dateList.begin();
            it!=dateList.end();++it)
         {
        ui->cubeTbWidget->insertRow(ui->cubeTbWidget->rowCount());
        ui->cubeTbWidget->setItem(ui->cubeTbWidget->rowCount()-1,0,
        new QTableWidgetItem(QString::number(it->number)));
        ui->cubeTbWidget->setItem(ui->cubeTbWidget->rowCount()-1,1,
        new QTableWidgetItem(it->graphics));
        ui->cubeTbWidget->setItem(ui->cubeTbWidget->rowCount()-1,2,
        new QTableWidgetItem(QString::number(it->line)));
        ui->cubeTbWidget->setItem(ui->cubeTbWidget->rowCount()-1,3,
        new QTableWidgetItem(QString::number(it->volume)));

            }

    }
    }

