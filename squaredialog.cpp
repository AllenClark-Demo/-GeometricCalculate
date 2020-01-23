#include "squaredialog.h"
#include "ui_squaredialog.h"

squaredialog::squaredialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::squaredialog)
{
    ui->setupUi(this);
}

squaredialog::~squaredialog()
{
    delete ui;
}

void squaredialog::on_pushButton_clicked()
{
    QString lineString=ui->lineEdit->text();
    double length=lineString.toDouble();
    Square square01(length);
    double area =square01.SquareArea();
    ui->areaEdit_2->setText(QString::number(area,'f',2));
}

void squaredialog::on_pushButton_2_clicked()
{
    this->close();
}
