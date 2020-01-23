#include "cuboidialog.h"
#include "ui_cuboidialog.h"

cuboidialog::cuboidialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cuboidialog)
{
    ui->setupUi(this);
}

cuboidialog::~cuboidialog()
{
    delete ui;
}

void cuboidialog::on_calculateButton_clicked()
{
    QString lengthString=ui->lengthEdit->text();
    QString heightString=ui->heightEdit->text();
    QString widthString=ui->widthEdit->text();
    double length=lengthString.toDouble();
    double height=heightString.toDouble();
    double width=widthString.toDouble();
    Cuboid cuboid01(length,width,height);
    double volume=cuboid01.CuboidVolume();
    ui->volumeEdit->setText(QString::number(volume,'f',2));
}

void cuboidialog::on_exitButton_clicked()
{
    this->close();
}
