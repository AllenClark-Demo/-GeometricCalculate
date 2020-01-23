#include "triangledialog.h"
#include "ui_triangledialog.h"

TriangleDialog::TriangleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TriangleDialog)
{
    ui->setupUi(this);
}

TriangleDialog::~TriangleDialog()
{
    delete ui;
}

void TriangleDialog::on_calculateButton_clicked()
{
    QString lengthString=ui->lengthEdit->text();
    QString heightString=ui->heightEdit->text();
    double length=lengthString.toDouble();
    double height=heightString.toDouble();
    Triangle triangle01(length,height);
    double area =triangle01.TriangleArea();
    ui->areaEdit->setText(QString::number(area,'f',2));

}

void TriangleDialog::on_exitButton_clicked()
{
    this->close();
}
