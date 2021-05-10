#include "mainwindow.h"
#include "autenticacion.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    autenticacion f;
    //f.show();
    //if(f._acc == 1){
    MainWindow w;
    //w.show();
    f.show();
    f.exec();
    w.show();
    //}


    return a.exec();
}
