#include "about1dialog.h"
#include "ui_about1dialog.h"

about1dialog::about1dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about1dialog)
{
    ui->setupUi(this);
}

about1dialog::~about1dialog()
{
    delete ui;
}

void about1dialog::on_pushButton_clicked()
{
    this->close();
}
