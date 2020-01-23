#ifndef ABOUT1DIALOG_H
#define ABOUT1DIALOG_H

#include <QDialog>

namespace Ui {
class about1dialog;
}

class about1dialog : public QDialog
{
    Q_OBJECT

public:
    explicit about1dialog(QWidget *parent = 0);
    ~about1dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::about1dialog *ui;
};

#endif // ABOUT1DIALOG_H
