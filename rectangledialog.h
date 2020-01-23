#ifndef RECTANGLEDIALOG_H
#define RECTANGLEDIALOG_H

#include <QDialog>
#include <rectangle.h>

namespace Ui {
class rectangledialog;
}

class rectangledialog : public QDialog
{
    Q_OBJECT

public:
    explicit rectangledialog(QWidget *parent = 0);
    ~rectangledialog();

private slots:


    void on_exitButton_clicked();

    void on_calculateButton_clicked();

private:
    Ui::rectangledialog *ui;
};

#endif // RECTANGLEDIALOG_H
