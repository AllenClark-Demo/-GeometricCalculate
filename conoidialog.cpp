#include "conoidialog.h"
#include "ui_conoidialog.h"
#include "conoidfile.h"
#include "qdebug.h"
conoidialog::conoidialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conoidialog)
{
    ui->setupUi(this);
}

conoidialog::~conoidialog()
{
    delete ui;
}

void conoidialog::on_pushButton_clicked()
{
    QString radiusString =ui->radiusEdit->text();
    double radius =radiusString.toDouble();
    QString heightString=ui->heightEdit->text();
    double height=heightString.toDouble();
    Conoid conoid01(radius,height);
    double conoid =conoid01.ConoidVolume();
    ui->volumeEdit->setText(QString::number(conoid,'f',2));
}

void conoidialog::on_pushButton_2_clicked()
{
    this->close();
}

void conoidialog::on_saveButton_clicked()
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
    getConoidFile()->save(radius,height,volume);

}





void conoidialog::on_lookButton_clicked()
{


while(ui->conoidTbWidget->rowCount())
{ui->conoidTbWidget->removeRow(0);}
QList<ConoidFile::ConoidData>dataList=getConoidFile()->getAllConoid();
for(QList<ConoidFile::ConoidData>::iterator it=dataList.begin();
    it!=dataList.end();++it)
 {
ui->conoidTbWidget->insertRow(ui->conoidTbWidget->rowCount());
ui->conoidTbWidget->setItem(ui->conoidTbWidget->rowCount()-1,0,
new QTableWidgetItem(QString::number(it->number)));
ui->conoidTbWidget->setItem(ui->conoidTbWidget->rowCount()-1,1,
new QTableWidgetItem(it->graphics));
ui->conoidTbWidget->setItem(ui->conoidTbWidget->rowCount()-1,2,
new QTableWidgetItem(QString::number(it->radius)));
ui->conoidTbWidget->setItem(ui->conoidTbWidget->rowCount()-1,3,
new QTableWidgetItem(QString::number(it->height)));
ui->conoidTbWidget->setItem(ui->conoidTbWidget->rowCount()-1,4,
new QTableWidgetItem(QString::number(it->volume)));


    }
}
