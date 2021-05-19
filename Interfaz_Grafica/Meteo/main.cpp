#include "mainwindow.h"
#include "autenticacion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    autenticacion f;
    MainWindow w;
    f.show();
    f.exec();
    w.show();
    return a.exec();
}
