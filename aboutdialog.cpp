#include "aboutdialog.h"
#include "ui_aboutdialog.h"

aboutdialog::aboutdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutdialog)
{
    ui->setupUi(this);
}

aboutdialog::~aboutdialog()
{
    delete ui;
}

void aboutdialog::on_pushButton_clicked()
{
    this->close();
}

void aboutdialog::on_pushButton_2_clicked()
{
    this->close();
}
