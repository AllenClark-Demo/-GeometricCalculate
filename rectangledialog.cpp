#include "rectangledialog.h"
#include "ui_rectangledialog.h"

rectangledialog::rectangledialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rectangledialog)
{
    ui->setupUi(this);
}

rectangledialog::~rectangledialog()
{
    delete ui;
}

void rectangledialog::on_exitButton_clicked()
{
    this->close();
}

void rectangledialog::on_calculateButton_clicked()
{
    QString lineString=ui->lineEdit->text();
    QString widthString=ui->widthEdit->text();
    double line=lineString.toDouble();
    double width=widthString.toDouble();
    Rectangle rectangle01(line,width);
    double area =rectangle01.RectangleArea();
    ui->areaEdit_2->setText(QString::number(area,'f',2));
}
