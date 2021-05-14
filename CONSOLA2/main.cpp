#include <QCoreApplication>
#include <QTimer>
#include <iostream>
#include <alarma.h>
#include "base_local.h"
#include <string>

using namespace std;

int main(int argc, char** argv){
    if (argc != 3){
        cout << "no ha ingresado el usuario y el pass"<<endl;
        return -1;
    }
    string user1, pass1;
    user1 = argv[1];
    pass1 = argv[2];
    DB_Local BASE("DATA1.db");
    BASE.AbrirDB();
    cout << user1 << endl;
    cout << pass1 <<endl;
    if( BASE.ValidarPass(user1, pass1) ){
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
    al.registro(user1);
    QObject::connect( temp_cont, SIGNAL(timeout()), &al, SLOT(llamado()) );
    temp_cont->setInterval( 100 );
    temp_cont->start();

    return a.exec();
}
