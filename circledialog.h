#ifndef CIRCLEDIALOG_H
#define CIRCLEDIALOG_H

#include <QDialog>
#include <circle.h>

namespace Ui {
class CircleDialog;
}

class CircleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CircleDialog(QWidget *parent = 0);
    ~CircleDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CircleDialog *ui;
};

#endif // CIRCLEDIALOG_H
