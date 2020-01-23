#include "helpdialog.h"
#include "ui_helpdialog.h"

helpdialog::helpdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpdialog)
{
    ui->setupUi(this);
}

helpdialog::~helpdialog()
{
    delete ui;
}

void helpdialog::on_pushButton_clicked()
{
    this->close();
}

void helpdialog::on_pushButton_2_clicked()
{
     this->close();
}
