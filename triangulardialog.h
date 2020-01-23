#ifndef TRIANGULARDIALOG_H
#define TRIANGULARDIALOG_H

#include <QDialog>
#include<triangular.h>


namespace Ui {
class triangulardialog;
}

class triangulardialog : public QDialog
{
    Q_OBJECT

public:
    explicit triangulardialog(QWidget *parent = 0);
    ~triangulardialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    /*void on_saveButton_clicked();

    void on_lookButton_clicked();*/

private:
    Ui::triangulardialog *ui;
};

#endif // TRIANGULARDIALOG_H
