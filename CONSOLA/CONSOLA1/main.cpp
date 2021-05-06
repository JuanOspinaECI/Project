#include <QCoreApplication>
#include <QTimer>
#include <iostream>
#include <alarma.h>
#include "base_local.h"

using namespace std;

int main(int argc, char *argv[]){
    DB_Local BASE("DATA1.db");
    BASE.AbrirDB();
    if( BASE.ValidarPass("alxperez", "9876") ){
        cout << "Ese password es correcto." << endl;
    }else{
        cout << "Ese password es erróneo." << endl;
        BASE.CerrarDB();
        return -1;
    }
    BASE.CerrarDB();
    QCoreApplication a(argc, argv);
    QTimer *temp_cont = new QTimer();
    Alarma al;
    QObject::connect( temp_cont, SIGNAL(timeout()), &al, SLOT(llamado()) );
    temp_cont->setInterval( 100 );
    temp_cont->start();

    return a.exec();
}
