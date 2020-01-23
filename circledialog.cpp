#include "circledialog.h"
#include "ui_circledialog.h"

CircleDialog::CircleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CircleDialog)
{
    ui->setupUi(this);
}

CircleDialog::~CircleDialog()
{
    delete ui;
}

void CircleDialog::on_pushButton_clicked()
{
    QString radiusString = ui->radiusEdit->text();
    double radius =radiusString.toDouble();
    Circle circle01(radius);
    double area =circle01.CircleArea();
    ui->areaEdit->setText(QString::number(area,'f',2));

}

void CircleDialog::on_pushButton_2_clicked()
{
    this->close();
}
