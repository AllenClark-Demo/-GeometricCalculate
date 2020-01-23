#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<triangledialog.h>
#include<circledialog.h>
#include<cylinderdialog.h>
#include<rectangledialog.h>
#include<globedialog.h>
#include<conoidialog.h>
#include<squaredialog.h>
#include<trapezoidialog.h>
#include<cylinderfile.h>
#include<cuboidialog.h>
#include<cubedialog.h>
#include<qdebug.h>
#include<helpdialog.h>
#include<aboutdialog.h>
#include<triangulardialog.h>
#include<about1dialog.h>
#include<about2dialog.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_Triangle_triggered();

    void on_action_Circle_triggered();

    void on_action_Cylinder_triggered();

    void on_action_Rectangle_triggered();

    void on_action_Globe_triggered();

    void on_action_Cone_triggered();

    void on_action_Exit_triggered();

    void on_action_Square_triggered();

    void on_action_Trapezoid_triggered();

    void on_action_Cuboid_triggered();

    void on_action_Cube_triggered();

    //void on_action_Cube_triggered();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_Triangular_triggered();

    void on_action_3_triggered();

    void on_action_5_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
