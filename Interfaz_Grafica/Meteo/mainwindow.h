#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <vector>
#include "sensor.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
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

private:
    void cada5Seg();
    void cadaMinuto();
    void promedio();
    void maximo();
    void minimo();

private slots:
    void cadaSeg();
    void on_next_clicked();
    void on_prev_clicked();
    void on_exit_clicked();

private:
    Ui::MainWindow          *ui;
    QTimer                  *_timer;
    std::vector<Dato>        _vDatos;  // Datos recolectados para calcular el promedio
    GPS                     _GPS;   // Estos serán los dispositivos simulados
    Temp_Hum                _TH;
    Viento                  _Viento;
    Precip                  _preci;
    int                     _seg, _min, _hora, _state, _year, _month, _day, _hr, _minu;
};

#endif // MAINWINDOW_H
