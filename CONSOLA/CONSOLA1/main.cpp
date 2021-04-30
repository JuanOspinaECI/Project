#include <QCoreApplication>
#include <QTimer>
#include <iostream>
#include <alarma.h>

using namespace std;

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);
    QTimer *temp_cont = new QTimer();
    Alarma al;
    QObject::connect( temp_cont, SIGNAL(timeout()), &al, SLOT(llamado()) );
    temp_cont->setInterval( 100 );
    temp_cont->start();

    return a.exec();
}
