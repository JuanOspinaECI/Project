#include "autenticacion.h"
#include "Local.h"
#include "ui_autenticacion.h"
#include <iostream>
#include "mainwindow.h"
#include "registrodialog.h"
#include "QApplication"

using namespace std;
autenticacion::autenticacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autenticacion)
{
    ui->setupUi(this);
}

autenticacion::~autenticacion()
{
    delete ui;
}

void autenticacion::on_salirr_clicked()
{
    close();
}



void autenticacion::on_Ingresar_clicked()
{
    string user;
    string passw;
    user = ui->usuario->text().toStdString();
    passw = ui->contras->text().toStdString();
    DB_Local a("register.db");
    a.AbrirDB();
    //a.GuardarDato( ff );
    if( a.ValidarPass(user, passw) ){
        cout << "Ese password es correcto." << endl;
        _acc = 1;
        a.CerrarDB();
        close();

    }else{
        cout << "Ese password es erróneo." << endl;
        a.CerrarDB();
    }


}



void autenticacion::on_Registrarse_clicked()
{
    registroDialog reg;
    //connect(&reg, &registroDialog::, this, &autenticacion::);
    reg.show();
    reg.exec();
}
