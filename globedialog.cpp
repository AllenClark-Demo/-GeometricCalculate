#include "globedialog.h"
#include "ui_globedialog.h"
#include "globefile.h"
#include "qdebug.h"

globedialog::globedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::globedialog)
{
    ui->setupUi(this);
}

globedialog::~globedialog()
{
    delete ui;
}

void globedialog::on_calculateButton_clicked()
{
    QString radiusString = ui->radiusEdit->text();
    double radius =radiusString.toDouble();
    Globe globe01(radius);
    double volume =globe01.GlobeVolume();
    ui->volumeEdit->setText(QString::number(volume,'f',2));
}

void globedialog::on_exitButton_2_clicked()
{
    this->close();
}

void globedialog::on_saveButton_clicked()
{
        QString radiusString=ui->radiusEdit->text();
        QString volumeString=ui->volumeEdit->text();
        double radius=radiusString.toDouble();
        qDebug()<<radius;
        double volume=volumeString.toDouble();
        qDebug()<<volume;
        getGlobeFile()->save(radius,volume);

    }


void globedialog::on_lookButton_clicked()
{
    while(ui->globeTbWidget->rowCount())
    {ui->globeTbWidget->removeRow(0);}
    QList<GlobeFile::GlobeDate>dateList=getGlobeFile()->getAllGlobe();
    for(QList<GlobeFile::GlobeDate>::iterator it=dateList.begin();
        it!=dateList.end();++it)
     {
    ui->globeTbWidget->insertRow(ui->globeTbWidget->rowCount());
    ui->globeTbWidget->setItem(ui->globeTbWidget->rowCount()-1,0,
    new QTableWidgetItem(QString::number(it->number)));
    ui->globeTbWidget->setItem(ui->globeTbWidget->rowCount()-1,1,
    new QTableWidgetItem(it->graphics));
    ui->globeTbWidget->setItem(ui->globeTbWidget->rowCount()-1,2,
    new QTableWidgetItem(QString::number(it->radius)));
    ui->globeTbWidget->setItem(ui->globeTbWidget->rowCount()-1,3,
    new QTableWidgetItem(QString::number(it->volume)));


        }
}
