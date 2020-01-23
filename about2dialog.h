#ifndef ABOUT2DIALOG_H
#define ABOUT2DIALOG_H

#include <QDialog>

namespace Ui {
class about2dialog;
}

class about2dialog : public QDialog
{
    Q_OBJECT

public:
    explicit about2dialog(QWidget *parent = 0);
    ~about2dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::about2dialog *ui;
};

#endif // ABOUT2DIALOG_H
