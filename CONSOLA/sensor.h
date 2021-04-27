
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
    virtual void actualizar();
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
    virtual Sensor operator+(Sensor &a);
    Sensor operator/(int &a);
    void reset() :
};

class GPS:public Sensor{
public:
    GPS():Sensor(3){}
	void actualizar();
    double latitud() {return leerDato(0);}
    double longitud() {return leerDato(1);}
    double altura() {return leerDato(2);}
    GPS operator+(GPS &a);
    GPS operator/(int &a);
};

class Temp_Hum: public Sensor{
public:
    Temp_Hum():Sensor(2){}
    double temperatura() {return leerDato(0);}
    double humedad() { return leerDato(1);}
    Temp_Hum operator+(Temp_Hum &a);
    Temp_Hum operator/(int &a);
};

class Viento: public Sensor{
public:
    Viento():Sensor(2){}
    double velocidad() {return leerDato(0);}
    double direccion() {return leerDato(1);}
    Viento operator+(Viento &a);
    Viento operator/(int &a);
};
class Pre: public Sensor{
public:
    Pre():Sensor(1){}
    double precipitacion() {return leerDato(0);}
    Pre operator+(Viento &a);
    Pre operator/(int &a);
};

#endif // SENSOR_H