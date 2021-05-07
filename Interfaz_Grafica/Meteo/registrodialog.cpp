#include "registrodialog.h"
#include "ui_registrodialog.h"
#include "Local.h"
#include <iostream>
#include <string>

using namespace std;

registroDialog::registroDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registroDialog)
{
    ui->setupUi(this);
}

registroDialog::~registroDialog()
{
    delete ui;
}

void registroDialog::on_cancelar_clicked()
{
    close();
}

void registroDialog::on_registro_clicked()
{
    string user, pass, id, name, las, fech;
    std::stringstream date;
    ActualizarFechaFromSO();
    int dd, mm, yy, edad;
    bool b;
    user = ui->user->text().toStdString();
    pass = ui->pass->text().toStdString();
    id = ui->id->text().toStdString();
    name = ui->name->text().toStdString();
    las = ui->las->text().toStdString();
    dd = ui->dd->text().toInt();
    mm = ui->mm->text().toInt();
    yy = ui->yyyy->text().toInt();
    edad = _year - yy;
    if(_month - mm < 0){
        edad = edad - 1;
    }
    else if(_month - mm == 0){
        if(_day - dd >= 0){
            edad = edad - 1;
        }
    }
    date << to_string(dd)  << "/" << to_string(mm)  << "/" << to_string(yy) ;
    fech = date.str();
    DB_Local a("register.db");
    a.AbrirDB();
    b = a.GuardarUser(user, name, las, id, fech, pass, edad);
    if(b == true){
        close();
    }

}
