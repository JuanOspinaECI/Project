
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdlib.h>

class Sensor{

private:
    double *_dato;
    int _tamano;

public:
    Sensor(int tamano = 1){
        _dato = new double[tamano];
        _tamano = tamano;
    }
    ~Sensor(){ delete []_dato; }
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }
    void actualizar(){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( rand() % 1000) / 10.;
    }
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
    virtual Sensor operator+(Sensor &a){
        Sensor Sensor_TEMP;
        for(int i=0; i < _tamano; i++)
            Sensor_TEMP._dato[i] = _dato[i] + a._dato[i];
        return Sensor_TEMP;
    }
    Sensor operator/(int &a){
        Sensor Sensor_TEMP;
        for(int i=0; i < _tamano; i++)
            Sensor_TEMP._dato[i] = _dato[i]/a;
        return Sensor_TEMP;
    }
    void reset() {
        for(int i=0; i < _tamano; i++)
            _dato[i] =0.0;
    }
};

class GPS:public Sensor{
public:
    GPS():Sensor(3){}
    double latitud() {return leerDato(0);}
    double longitud() {return leerDato(1);}
    double altura() {return leerDato(2);}
    GPS operator+(GPS &a){
        GPS GPS_TEMP;
        GPS_TEMP = GPS_TEMP  + a;
        return GPS_TEMP;
    }
    GPS operator/(int &a){
        GPS GPS_TEMP;
        GPS_TEMP = GPS_TEMP/a;
        return GPS_TEMP;
    }
};

class Temp_Hum: public Sensor{
public:
    Temp_Hum():Sensor(2){}
    double temperatura() {return leerDato(0);}
    double humedad() { return leerDato(1);}
    Temp_Hum operator+(Temp_Hum &a){
        Temp_Hum TH_TEMP;
        TH_TEMP = TH_TEMP + a;
        return TH_TEMP;
    }
    Temp_Hum operator/(int &a){
        Temp_Hum TH_TEMP;
        TH_TEMP = TH_TEMP/a;
        return TH_TEMP;
    }
};

class Viento: public Sensor{
public:
    Viento():Sensor(2){}
    double velocidad() {return leerDato(0);}
    double direccion() {return leerDato(1);}
    Viento operator+(Viento &a){
        Viento Viento_TEMP;
        Viento_TEMP = Viento_TEMP + a;
        return Viento_TEMP;
    }
    Viento operator/(int &a){
        Viento Viento_TEMP;
        Viento_TEMP = Viento_TEMP/a;
        return Viento_TEMP;
    }
};

#endif // SENSOR_H