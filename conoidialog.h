#ifndef CONOIDIALOG_H
#define CONOIDIALOG_H

#include <QDialog>
#include<conoid.h>

namespace Ui {
class conoidialog;
}

class conoidialog : public QDialog
{
    Q_OBJECT

public:
    explicit conoidialog(QWidget *parent = 0);
    ~conoidialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_saveButton_clicked();

    void on_lookButton_clicked();

private:
    Ui::conoidialog *ui;
};

#endif // CONOIDIALOG_H
