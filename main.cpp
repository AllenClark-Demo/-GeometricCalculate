#include "mainwindow.h"
#include <QApplication>
#include"cylinderfile.h"
#include"conoidfile.h"
#include"cubefile.h"
#include"globefile.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    getCylinderFile()->inital();
    getConoidFile()->inital();
    getCubeFile()->inital();
    getGlobeFile()->inital();
    //getTriangularFile()->inital();
    MainWindow w;
    w.show();

    return a.exec();
}
