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


void autenticacion::on_Ingresar_clicked()
{
    string user;
    string passw;
    user = ui->usuario->text().toStdString();
    passw = ui->contras->text().toStdString();
    if(user!=""){
        DB_Local a("register.db");
        a.AbrirDB();
        if( a.ValidarPass(user, passw) ){
            cout << "Ese password es correcto." << endl;
            a.CerrarDB();
            close();

        }else{
            cout << "Ese password es erróneo." << endl;
            a.CerrarDB();
        }
    }
}



void autenticacion::on_Registrarse_clicked()
{
    registroDialog reg;
    //connect(&reg, &registroDialog::, this, &autenticacion::);
    reg.show();
    reg.exec();
}

void autenticacion::on_show_pas_toggled(bool checked)
{
    if(checked){
        ui->contras->setEchoMode(QLineEdit::Normal);
    }

    else{
        ui->contras->setEchoMode(QLineEdit::Password);
    }
}
