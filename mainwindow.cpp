#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"qdebug.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Triangle_triggered()
{
    static TriangleDialog *triangleDlg=new TriangleDialog(this);
    triangleDlg->show();
}

void MainWindow::on_action_Circle_triggered()
{
    static CircleDialog * circleDlg = new
            CircleDialog(this);
    circleDlg->show();
}

void MainWindow::on_action_Cylinder_triggered()
{
   static cylinderdialog *CylinderDlg = new cylinderdialog(this);
   CylinderDlg ->show();
}

void MainWindow::on_action_Rectangle_triggered()
{
    static rectangledialog *RectangleDlg = new rectangledialog(this);
    RectangleDlg->show();


}

void MainWindow::on_action_Globe_triggered()
{
    static globedialog *GlobeDlg = new globedialog(this);
    GlobeDlg->show();
}

void MainWindow::on_action_Cone_triggered()
{static conoidialog *ConoidDlg = new conoidialog(this);
    ConoidDlg->show();

}

void MainWindow::on_action_Exit_triggered()
{
   this->close();
}

void MainWindow::on_action_Square_triggered()
{static squaredialog *SquareDlg = new squaredialog(this);
    SquareDlg->show();

}

void MainWindow::on_action_Trapezoid_triggered()
{
    static trapezoidialog *TrapeDlg = new trapezoidialog(this);
        TrapeDlg->show();
}

void MainWindow::on_action_Cuboid_triggered()
{
    static cuboidialog *CuboidDlg=new cuboidialog(this);
    CuboidDlg->show();
}


void MainWindow::on_action_Cube_triggered()
{   static cubedialog *CubediaDlg=new cubedialog(this);
    CubediaDlg->show();

}

void MainWindow::on_action_triggered()
{
static helpdialog *HelpdiaDlg=new helpdialog(this);
 HelpdiaDlg->show();
}

void MainWindow::on_action_2_triggered()
{
    static aboutdialog *AboutDlg=new aboutdialog(this);
    AboutDlg->show();
}

void MainWindow::on_action_Triangular_triggered()
{
    static triangulardialog *TriangularDlg=new triangulardialog(this);
    TriangularDlg->show();
}

void MainWindow::on_action_3_triggered()
{
    static about1dialog *About1Dlg=new about1dialog(this);
    About1Dlg->show();
}

void MainWindow::on_action_5_triggered()
{
    static about2dialog *About2Dlg=new about2dialog(this);
    About2Dlg->show();
}
