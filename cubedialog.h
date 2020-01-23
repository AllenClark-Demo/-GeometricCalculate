#ifndef CUBEDIALOG_H
#define CUBEDIALOG_H

#include <QDialog>
#include"cube.h"
#include"cubedialog.h"
namespace Ui {
class cubedialog;
}

class cubedialog : public QDialog
{
    Q_OBJECT

public:
    explicit cubedialog(QWidget *parent = 0);
    ~cubedialog();

private slots:
    void on_calculateButton_clicked();

    void on_exitButton_clicked();

    void on_saveButton_clicked();

    void on_lookButton_clicked();

private:
    Ui::cubedialog *ui;
};

#endif // CUBEDIALOG_H
