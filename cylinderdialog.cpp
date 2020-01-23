#include "cylinderdialog.h"
#include "ui_cylinderdialog.h"
#include"cylinderfile.h"
#include"qdebug.h"

cylinderdialog::cylinderdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cylinderdialog)
{
    ui->setupUi(this);
}

cylinderdialog::~cylinderdialog()
{
    delete ui;
}



void cylinderdialog::on_calculateButton_clicked()
{
    QString radiusString =ui->radiusEdit->text();
    double radius =radiusString.toDouble();
    QString heightString=ui->heightEdit->text();
    double height=heightString.toDouble();
    Cylinder cylinder01(radius,height);
    double volume =cylinder01.CylinderVolume();
    ui->volumeEdit->setText(QString::number(volume,'f',2));
}

void cylinderdialog::on_exitButton_clicked()
{
    this->close();
}

void cylinderdialog::on_saveButton_clicked()
{
    QString radiusString=ui->radiusEdit->text();
    QString heightString=ui->heightEdit->text();
    QString volumeString=ui->volumeEdit->text();
    double radius=radiusString.toDouble();
    qDebug()<<radius;
    double height=heightString.toDouble();
    qDebug()<<height;
    double volume=volumeString.toDouble();
    qDebug()<<volume;
    getCylinderFile()->save(radius,height,volume);

}





void cylinderdialog::on_lookButton_clicked()
{


while(ui->cylinderTbWidget->rowCount())
{ui->cylinderTbWidget->removeRow(0);}
QList<CylinderFile::CylinderDate>dateList=getCylinderFile()->getAllCylinder();
for(QList<CylinderFile::CylinderDate>::iterator it=dateList.begin();
    it!=dateList.end();++it)
 {
ui->cylinderTbWidget->insertRow(ui->cylinderTbWidget->rowCount());
ui->cylinderTbWidget->setItem(ui->cylinderTbWidget->rowCount()-1,0,
new QTableWidgetItem(QString::number(it->number)));
ui->cylinderTbWidget->setItem(ui->cylinderTbWidget->rowCount()-1,1,
new QTableWidgetItem(it->graphics));
ui->cylinderTbWidget->setItem(ui->cylinderTbWidget->rowCount()-1,2,
new QTableWidgetItem(QString::number(it->radius)));
ui->cylinderTbWidget->setItem(ui->cylinderTbWidget->rowCount()-1,3,
new QTableWidgetItem(QString::number(it->height)));
ui->cylinderTbWidget->setItem(ui->cylinderTbWidget->rowCount()-1,4,
new QTableWidgetItem(QString::number(it->volume)));


    }
}


