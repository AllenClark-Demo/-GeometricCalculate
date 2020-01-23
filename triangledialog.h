#ifndef TRIANGLEDIALOG_H
#define TRIANGLEDIALOG_H

#include <QDialog>
#include"triangle.h"
namespace Ui {
class TriangleDialog;
}

class TriangleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TriangleDialog(QWidget *parent = 0);
    ~TriangleDialog();

private slots:
    void on_calculateButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::TriangleDialog *ui;
};

#endif // TRIANGLEDIALOG_H
