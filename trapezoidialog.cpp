#include "trapezoidialog.h"
#include "ui_trapezoidialog.h"

trapezoidialog::trapezoidialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trapezoidialog)
{
    ui->setupUi(this);
}

trapezoidialog::~trapezoidialog()
{
    delete ui;
}

void trapezoidialog::on_pushButton_clicked()
{
    QString lineString=ui->lineEdit->text();
    QString line2String=ui->lineEdit_2->text();
    QString heightString=ui->heightEdit->text();
    double line=lineString.toDouble();
    double line2=line2String.toDouble();
    double height=heightString.toDouble();
    Trapezoid trapezoid01(line,line2,height);
    double area =trapezoid01.TrapezoidArea();
    ui->areaEdit->setText(QString::number(area,'f',2));
}

void trapezoidialog::on_pushButton_2_clicked()
{
    this->close();
}
