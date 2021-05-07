#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class Sensor{

protected:
    double *_dato;
    int _tamano;
    int _limite;

public:
    Sensor(int tamano = 1, int limite = 100){
        _dato = new double[tamano];
        _tamano = tamano;
        _limite = limite;
    }
    ~Sensor(){ delete []_dato; }
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }
    void actualizar(){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( rand() % _limite * 10 ) / 10.;
    }
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
};

class GPS:public Sensor{
public:
    GPS():Sensor(3, 360){}
    double latitud() {return leerDato(0);}
    double longitud() {return leerDato(1);}
    double altura() {return leerDato(2);}
    void actualizar(){
        for(int i=0; i < _tamano; i++){
            if(i ==_tamano-1){_dato[i] = ( rand() % 45000)/10 ;}
            else{_dato[i] = ( rand() % 3600 -1800)/10 ;}
        }
    }
};


class Temp_Hum: public Sensor{
public:
    Temp_Hum():Sensor(2){}
    double temperatura() {return leerDato(0);}
    double humedad() { return leerDato(1);}
    void actualizar(){
    _dato[0] = ( rand() % 55 -10) ;
    _dato[1] = ( rand() %100) ;
    }
};


class Viento: public Sensor{
public:
    Viento():Sensor(2, 360){}
    double velocidad() {return leerDato(0);}
    double direccion() {return leerDato(1);}
    void actualizar(){
        _dato[0] = ( rand() % 40) ;
        _dato[1] = ( rand() %360 -180) ;
        }
};


class Precip: public Sensor{
public:
    Precip():Sensor(1,50){}
    double precipitacion() {return leerDato(0);}//new line
};

struct Dato
{
    double Lat, Lon, Alt, Temp, Hum, VelV, DirV, Prec;
    Dato() {Lat = Lon = Alt = Temp = Hum = VelV = DirV = Prec = 0.;}
};


#endif // SENSOR_H
