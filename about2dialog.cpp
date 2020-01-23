#include "about2dialog.h"
#include "ui_about2dialog.h"

about2dialog::about2dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about2dialog)
{
    ui->setupUi(this);
}

about2dialog::~about2dialog()
{
    delete ui;
}

void about2dialog::on_pushButton_clicked()
{
    this->close();
}
