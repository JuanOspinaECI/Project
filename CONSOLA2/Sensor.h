#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdlib.h>

class Sensor{

protected:
    double *_dato;
    int _tamano;

public:
    Sensor(int tamano = 1);
    ~Sensor(){ delete []_dato; }
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }
    Sensor maximo(Sensor &a, Sensor &b);
	Sensor minimo(Sensor &a, Sensor &b);	
    virtual void actualizar();
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
    Sensor operator+(Sensor &a);
    Sensor operator/(int &a);
    const Sensor& operator=(const Sensor &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }
    void reset();
//	const Sensor& operator=(const Sensor &a){
//        for(int i =0 ; i < _tamano; i++)
//            this->_dato[i] = a._dato[i];

//        return *this;
//    }
};

class GPS:public Sensor{
public:
    GPS():Sensor(3){}
	void actualizar();
    double latitud() {return leerDato(0);}
    double longitud() {return leerDato(1);}
    double altura() {return leerDato(2);}
	GPS maximo(const GPS &a, const GPS &b);
	GPS minimo(const GPS &a, const GPS &b);	
    const GPS& operator=(const GPS &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }
    GPS operator+(const GPS &a);
    GPS operator/(int &a);
};

class Temp_Hum: public Sensor{
public:
    Temp_Hum():Sensor(2){}
    double temperatura() {return leerDato(0);}
    double humedad() { return leerDato(1);}
    void actualizar();
	Temp_Hum maximo(const Temp_Hum &a, const Temp_Hum &b);
	Temp_Hum minimo(const Temp_Hum &a, const Temp_Hum &b);	
    const Temp_Hum& operator=(const Temp_Hum &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }
    Temp_Hum operator+(const Temp_Hum &a);
    Temp_Hum operator/(int &a);
};

class Viento: public Sensor{
public:
    Viento():Sensor(2){}
    double velocidad() {return leerDato(0);}
    double direccion() {return leerDato(1);}
    void actualizar();
    Viento maximo(Viento &a, Viento &b);
    Viento minimo(Viento &a, Viento &b);
    const Viento& operator=(const Viento &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }
    Viento operator+(Viento &a);
    Viento operator/(int &a);
};

class Pre: public Sensor{
public:
    Pre():Sensor(1){}
    double precipitacion() {return leerDato(0);}
    void actualizar();
    Pre maximo(Pre &a, Pre &b);
    Pre minimo(Pre &a, Pre &b);
    const Pre& operator=(const Pre &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }
    Pre operator+(Pre &a);
    Pre operator/(int &a);
};

#endif // SENSOR_H
