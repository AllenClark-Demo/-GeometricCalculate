#ifndef TRAPEZOIDIALOG_H
#define TRAPEZOIDIALOG_H

#include <QDialog>
#include<trapezoid.h>

namespace Ui {
class trapezoidialog;
}

class trapezoidialog : public QDialog
{
    Q_OBJECT

public:
    explicit trapezoidialog(QWidget *parent = 0);
    ~trapezoidialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::trapezoidialog *ui;
};

#endif // TRAPEZOIDIALOG_H
