#ifndef ALARMA_H
#define ALARMA_H

#include <QtCore>
#include <QObject>
#include <iostream>
#include "Sensor.h"
#include "base_local.h"

using namespace std;

class Alarma : public QObject{
    int                     _seg = 0, _min = 0, _hora = 0, _hr, _minu, _itera;
    GPS                     _gps, _prom_gps, _max_gps, _min_gps;
    Temp_Hum                _tem, _prom_tem, _max_tem, _min_tem;
    Viento      			_viento, _prom_viento, _max_viento, _min_viento;
    Pre      				_preci, _prom_preci, _max_preci, _min_preci;
    std::string _fecha;
  Q_OBJECT

public slots:
    void registro(string user0){
       ActualizarFechaFromSO();
       DB_Local BASE("DATA1.db");
       BASE.AbrirDB();
       BASE.GuardarHist(user0, _hr, _minu, _fecha);
       BASE.CerrarDB();
    }

    void llamado(){
//        std::cout << "Timer finalizado." << std::endl;
        ++_seg;
            if( _seg % 5 == 0 ) cada5Seg();
            if(_seg == 60 ) {
                _seg = 0;
                cadaMinuto();
                ++_min;
                if (_min == 60 ){
                    _min = 0;
                    ++_hora;
                    if(_hora == 24) _hora = 0; ActualizarFechaFromSO();
                }
            }
        }
    void ActualizarFechaFromSO(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        _hr = ltm->tm_hour;
        _minu = ltm->tm_min;

        std::stringstream fecha;
        fecha << ltm->tm_mday << "/" << ltm->tm_mon + 1  << "/" << ltm->tm_year + 1900;
        _fecha = fecha.str();
    }
    void cada5Seg(){
        _gps.actualizar();
        _max_gps = _max_gps.maximo(_gps, _max_gps);
        _min_gps = _min_gps.maximo(_gps, _min_gps);
        _prom_gps =_prom_gps + _gps;

         cout <<_seg <<endl;

        _tem.actualizar();
        _max_tem = _max_tem.maximo(_tem, _max_tem);
        _min_tem = _min_tem.maximo(_tem, _min_tem);
        _prom_tem = _prom_tem + _tem;

        _viento.actualizar();
        _max_viento = _max_viento.maximo(_viento, _max_viento);
        _min_viento = _min_viento.minimo(_viento, _min_viento);
        _prom_viento = _prom_viento + _viento;

        _preci.actualizar();
        _max_preci = _max_preci.maximo(_preci, _max_preci);
        _min_preci = _min_preci.maximo(_preci, _min_preci);
        _prom_preci = _prom_preci + _preci;


        std::cout << "5 Seg: " << std::endl;
    }

    void cadaMinuto(){

        int di = 12;
        _prom_gps = _prom_gps /di;

        _prom_tem = _prom_tem /di;

        _prom_viento = _prom_viento /di;

        _prom_preci = _prom_preci/di;



        DB_Local BASE("DATA1.db");
        Dato _datos;
        BASE.AbrirDB();
        _datos.lat = _prom_gps.latitud();
        _datos.alt = _prom_gps.altura();
        _datos.lon = _prom_gps.longitud();
        _datos.temp = _prom_tem.temperatura();
        _datos.hum = _prom_tem.humedad();
        _datos.vel = _prom_viento.velocidad();
        _datos.dir = _prom_viento.direccion();
        _datos.preci = _prom_preci.precipitacion();

        BASE.GuardarDatoProm( _datos, _fecha );
        cout<< "hola"<< endl;
        _datos.lat = _max_gps.latitud();
        _datos.alt = _max_gps.altura();
        _datos.lon = _max_gps.longitud();
        _datos.temp = _max_tem.temperatura();
        _datos.hum = _max_tem.humedad();
        _datos.vel = _max_viento.velocidad();
        _datos.dir = _max_viento.direccion();
        _datos.preci = _max_preci.precipitacion();

        BASE.GuardarDatoMax( _datos, _fecha );

        _datos.lat = _min_gps.latitud();
        _datos.alt = _min_gps.altura();
        _datos.lon = _min_gps.longitud();
        _datos.temp = _min_tem.temperatura();
        _datos.hum = _min_tem.humedad();
        _datos.vel = _min_viento.velocidad();
        _datos.dir = _min_viento.direccion();
        _datos.preci = _min_preci.precipitacion();

        BASE.GuardarDatoMin( _datos, _fecha );
        BASE.CerrarDB();
    /*     ui->txtLat->setText( QString::number( _prom_gps.latitud() ) );
        ui->txtLong->setText( QString::number( _prom_gps.longitud() ) );
        ui->txtAlt->setText( QString::number( _prom_gps.altura() ) );
        ui->txtTemp->setText( QString::number( _prom_tem.temperatura() ) );
        ui->txtHum->setText( QString::number( _prom_tem.humedad() ) );
        ui->txtVel->setText( QString::number( _prom_viento.velocidad() ) );
        ui->txtDir->setText( QString::number( _prom_viento.direccion()) ); */



        // Acumuladores a 0
        _prom_gps.reset();
        _prom_tem.reset();
        _prom_viento.reset();
        _prom_preci.reset();

        _max_gps.reset();
        _max_preci.reset();
        _max_tem.reset();
        _max_viento.reset();

        _min_gps.reset();
        _min_preci.reset();
        _min_tem.reset();
        _min_viento.reset();
    }
};

#endif // ALARMA_H
