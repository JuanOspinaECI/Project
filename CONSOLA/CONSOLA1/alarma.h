#ifndef ALARMA_H
#define ALARMA_H

#include <QtCore>
#include <QObject>
#include <iostream>
#include "Sensor.h"

using namespace std;

class Alarma : public QObject{
    int                     _seg, _min, _hora;
    GPS         		_gps, _prom_gps, _max_gps, _min_gps;
    Temp_Hum    	_tem, _prom_tem, _max_tem, _min_tem;
    Viento      			_viento, _prom_viento, _max_viento, _min_viento;
    Pre      				_preci, _prom_preci, _max_preci, _min_preci;
  Q_OBJECT

public slots:

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
                    if(_hora == 24) _hora = 0;
                }
            }
        }
    void cada5Seg(){
        _gps.actualizar();
        _max_gps = _max_gps.maximo(_gps, _max_gps);
        _min_gps = _min_gps.maximo(_gps, _min_gps);
        _prom_gps =_prom_gps + _gps;

         cout <<"promedio "<< _prom_gps.latitud()<<endl;
         cout << _gps.latitud()<<endl;

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


        cout << "Latitud promedio: " << _prom_gps.latitud() << endl;
        cout << "Latitud maxima: " << _max_gps.latitud() << endl;
        cout << "Latitud minima: " << _min_gps.latitud() << endl;

//        cout << "Longitud promedio: " << _prom_gps.longitud() << endl;
//        cout << "Longitud maxima: " << _max_gps.longitud() << endl;
//        cout << "Longitud minima: " << _min_gps.longitud() << endl;

//        cout << "altura promedio: " << _prom_gps.altura() << endl;
//        cout << "altura maxima: " << _max_gps.altura() << endl;
//        cout << "altura minima: " << _min_gps.altura() << endl;

//        cout << "temperatura promedio: " << _prom_tem.temperatura() << endl;
//        cout << "temperatura maxima: " << _max_tem.temperatura() << endl;
//        cout << "temperatura minima: " << _min_tem.temperatura() << endl;

//        cout << "humedad promedio: " << _prom_tem.humedad() << endl;
//        cout << "humedad maxima: " << _max_tem.humedad() << endl;
//        cout << "humedad minima: " << _min_tem.humedad() << endl;

//        cout << "velocidad promedio: " << _prom_viento.velocidad() << endl;
//        cout << "velocidad maxima: " << _max_viento.velocidad() << endl;
//        cout << "velocidad minima: " << _min_viento.velocidad() << endl;

//        cout << "direccion promedio: " << _prom_viento.direccion() << endl;
//        cout << "direccion maxima: " << _max_viento.direccion() << endl;
//        cout << "direccion minima: " << _max_viento.direccion() << endl;

//        cout << "Precipitacion promedio: " << _prom_preci.precipitacion() << endl;
//        cout << "Precipitacion maxima: " << _max_preci.precipitacion() << endl;
//        cout << "Precipitacion minima: " << _max_preci.precipitacion() << endl;

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
