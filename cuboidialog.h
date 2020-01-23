#ifndef CUBOIDIALOG_H
#define CUBOIDIALOG_H

#include <QDialog>
#include"cuboid.h"

namespace Ui {
class cuboidialog;
}

class cuboidialog : public QDialog
{
    Q_OBJECT

public:
    explicit cuboidialog(QWidget *parent = 0);
    ~cuboidialog();

private slots:
    void on_calculateButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::cuboidialog *ui;
};

#endif // CUBOIDIALOG_H
