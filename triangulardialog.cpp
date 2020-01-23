#include "triangulardialog.h"
#include "ui_triangulardialog.h"
#include "triangularfile.h"
#include "qdebug.h"



triangulardialog::triangulardialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::triangulardialog)
{
    ui->setupUi(this);
}

triangulardialog::~triangulardialog()
{
    delete ui;
}

void triangulardialog::on_pushButton_clicked()
{
    QString heightString =ui->heightEdit_1->text();
    double height_1 =heightString.toDouble();
    QString lineString=ui->lineEdit->text();
    double line=lineString.toDouble();
    QString height2String=ui->heightEdit_2->text();
    double height_2=height2String.toDouble();
    Triangular triangular01(height_1,line,height_2);
    double volume =triangular01.TriangularVolume();
    ui->volumeEdit->setText(QString::number(volume,'f',2));
}

void triangulardialog::on_pushButton_2_clicked()
{
    this->close();
}


/*void triangulardialog::on_saveButton_clicked()
{
    QString buttomString=ui->lineEdit->text();
    QString height1String=ui->heightEdit_1->text();
    QString height2String=ui->heightEdit_2->text();
    QString volumeString=ui->volumeEdit->text();
    double buttom=buttomString.toDouble();
    qDebug()<<buttom;
    double height1=height1String.toDouble();
    qDebug()<<height1;
    double height2=height2String.toDouble();
    qDebug()<<height1;
    double volume=volumeString.toDouble();
    qDebug()<<volume;
    getTriangularFile()->save(buttom,height1,height2,volume);

}





void triangulardialog::on_lookButton_clicked()
{
    while(ui->triangularTbWidget->rowCount())
    {ui->triangularTbWidget->removeRow(0);}
    QList<TriangularFile::TriangularDate>dateList=getTriangularFile()->getAllTriangular();
    for(QList<TriangularFile::TriangularDate>::iterator it=dateList.begin();
        it!=dateList.end();++it)
     {
    ui->triangularTbWidget->insertRow(ui->triangularTbWidget->rowCount());
    ui->triangularTbWidget->setItem(ui->triangularTbWidget->rowCount()-1,0,
    new QTableWidgetItem(QString::number(it->number)));
    ui->triangularTbWidget->setItem(ui->triangularTbWidget->rowCount()-1,1,
    new QTableWidgetItem(it->graphics));
    ui->triangularTbWidget->setItem(ui->triangularTbWidget->rowCount()-1,2,
    new QTableWidgetItem(QString::number(it->buttom)));
    ui->triangularTbWidget->setItem(ui->triangularTbWidget->rowCount()-1,3,
    new QTableWidgetItem(QString::number(it->height1)));
    ui->triangularTbWidget->setItem(ui->triangularTbWidget->rowCount()-1,4,
    new QTableWidgetItem(QString::number(it->height2)));
    ui->triangularTbWidget->setItem(ui->triangularTbWidget->rowCount()-1,5,
    new QTableWidgetItem(QString::number(it->volume)));


        }
    }*/

