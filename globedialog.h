#ifndef GLOBEDIALOG_H
#define GLOBEDIALOG_H

#include <QDialog>
#include <globe.h>
#include <globefile.h>

namespace Ui {
class globedialog;
}

class globedialog : public QDialog
{
    Q_OBJECT

public:
    explicit globedialog(QWidget *parent = 0);
    ~globedialog();

private slots:
    void on_calculateButton_clicked();

    void on_exitButton_2_clicked();

    void on_saveButton_clicked();

    void on_lookButton_clicked();

private:
    Ui::globedialog *ui;
};

#endif // GLOBEDIALOG_H
