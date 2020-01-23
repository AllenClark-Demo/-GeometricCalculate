#ifndef CYLINDERDIALOG_H
#define CYLINDERDIALOG_H

#include <QDialog>
#include"cylinder.h"
#include"cylinderfile.h"

namespace Ui {
class cylinderdialog;
}

class cylinderdialog : public QDialog
{
    Q_OBJECT

public:
    explicit cylinderdialog(QWidget *parent = 0);
    ~cylinderdialog();

private slots:

    void on_calculateButton_clicked();

    void on_exitButton_clicked();


    void on_saveButton_clicked();

    void on_lookButton_clicked();

    //void on_cylinderTbWidget_activated(const QModelIndex &index);

    //void on_cylinderTbWidget_activated(const QModelIndex &index);

private:
    Ui::cylinderdialog *ui;
};

#endif // CYLINDERDIALOG_H
