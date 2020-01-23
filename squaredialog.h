#ifndef SQUAREDIALOG_H
#define SQUAREDIALOG_H

#include <QDialog>
#include"square.h"

namespace Ui {
class squaredialog;
}

class squaredialog : public QDialog
{
    Q_OBJECT

public:
    explicit squaredialog(QWidget *parent = 0);
    ~squaredialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::squaredialog *ui;
};

#endif // SQUAREDIALOG_H
