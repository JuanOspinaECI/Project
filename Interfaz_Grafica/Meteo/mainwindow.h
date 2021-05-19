#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <vector>
#include "sensor.h"

namespace Ui {
class MainWindow;
}
/*!
 * \brief The MainWindow class Clase principal en donde se muestran los ultimos datos almacenados en la DB
 * \authors Nicolas Castro & Juan Camilo Ospina
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    /*!
     * \brief ActualizarFechaFromSO Metodo que actualiza la fecha actual
     * \details Obtiene hora, minuto, ano, mes y dia
     */
    void ActualizarFechaFromSO(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        _hr = ltm->tm_hour;
        _minu = ltm->tm_min;
        _year = ltm->tm_year + 1900;
        _month = ltm->tm_mon + 1;
        _day = ltm->tm_mday;
    }

private:
    /*!
     * \brief cada5Seg Metodo que guarda los datos y actualiza los sensores cada 5 segundos
     */
    void cada5Seg();
    /*!
     * \brief promedio Metodo que calcula el promedio de los datos tomados de los sensores durante 1 minuto, guarda los datos en la base local y los muestra en pantalla
     */
    void promedio();
    /*!
     * \brief maximo Metodo que calcula el valor maximo de los datos tomados de los sensores durante 1 minuto, guarda los datos en la base local y los muestra en pantalla
     */
    void maximo();
    /*!
     * \brief minimo Metodo que calcula el valor minimo de los datos tomados de los sensores durante 1 minuto, guarda los datos en la base local y los muestra en pantalla
     */
    void minimo();

private slots:
    /*!
     * \brief cadaSeg Metodo que cuenta el tiempo trascurrido y controla la maquina de estados
     */
    void cadaSeg();
    /*!
     * \brief on_next_clicked Metodo que perimte cambiar de un estado al siguiente al presionar el boton next
     * \details Apagado->Promedio->Minimo->Maximo->Promedio
     */
    void on_next_clicked();
    /*!
     * \brief on_prev_clicked Metodo que perimte cambiar de un estado al anterior al presionar el boton previous
     * \details Maximo->Minimo->Promedio->Apagado->Apagado
     */
    void on_prev_clicked();
    /*!
     * \brief on_exit_clicked Metodo que permite terminar la ejecucion de la aplicacion al presionar el boton exit
     */
    void on_exit_clicked();

private:
    Ui::MainWindow          *ui;
    /*!
     * \brief _timer Temporizador que controla las funciones de la estacion meteorologica
     */
    QTimer                  *_timer;
    /// \variable _vDatos-> Datos recolectados para calcular el promedio
    std::vector<Dato>        _vDatos;
    /// \variable _GPS-> Objeto de la clase GPS
    GPS                     _GPS;
    /// \variable _TH-> Objeto de la clase Temp_Hum
    Temp_Hum                _TH;
    /// \variable _Viento-> Objeto de la clase Viento
    Viento                  _Viento;
    /// \variable _preci-> Objeto de la clase Precip
    Precip                  _preci;
    int                     _seg, _min, _hora, _state, _year, _month, _day, _hr, _minu;
};

#endif // MAINWINDOW_H
