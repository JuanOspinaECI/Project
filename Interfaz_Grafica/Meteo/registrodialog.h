#ifndef REGISTRODIALOG_H
#define REGISTRODIALOG_H
#include <QtCore>
#include <QObject>
#include <iostream>
#include <QDialog>

using namespace std;

namespace Ui {
class registroDialog;
}

class registroDialog : public QDialog
{
    std::string _fecha;
    int    _hr, _minu, _year, _month, _day;
    Q_OBJECT

public:
    explicit registroDialog(QWidget *parent = 0);
    ~registroDialog();

public slots:
    void ActualizarFechaFromSO(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        _hr = ltm->tm_hour;
        _minu = ltm->tm_min;

        //std::stringstream fecha;
        //int year, month, day;
        _year = ltm->tm_year + 1900;
        _month = ltm->tm_mon + 1;
        _day = ltm->tm_mday;
        //fecha << ltm->tm_mday << "/" << ltm->tm_mon + 1  << "/" << ltm->tm_year + 1900;
        //_fecha = fecha.str();
    }

private slots:
    void on_cancelar_clicked();

    void on_registro_clicked();

private:
    Ui::registroDialog *ui;
};

#endif // REGISTRODIALOG_H
