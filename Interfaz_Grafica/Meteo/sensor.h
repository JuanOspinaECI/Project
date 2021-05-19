#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

/*!
 * \brief The Sensor class Clase principal que hereda cada sensor
 * \authors Nicolas Castro & Juan Camilo Ospina
 */
class Sensor{

protected:
    double *_dato;
    int _tamano;
    int _limite;

public:
    /*!
     * \brief Sensor Constructor de la clase sensor
     * \param tamano Parametro entero que especifica la cantidad de sensores
     * \param limite Parametro limite que especifica el maximo valor que puede tomar un sensor
     */
    Sensor(int tamano = 1, int limite = 100){
        _dato = new double[tamano];
        _tamano = tamano;
        _limite = limite;
    }
    ~Sensor(){ delete []_dato; }
    /*!
     * \brief leerDato Metodo que lee los datos tomados por un sensor especifico del obejeto
     * \param i Parametro que indica el numero del sensor a analizar
     * \return Retorna el valor del sensor en tipo double
     */
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }
    /*!
     * \brief actualizar Metodo que simula la obtencion de nuevos datos por los sensores
     */
    void actualizar(){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( rand() % _limite * 10 ) / 10.;
    }
    /*!
     * \brief mostrarDatos Metodo que genera un string con los valores de cada sensor en el momento
     * \return Retorna un string con los valores en orden separados con ;
     */
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
    /*!
     * \brief GPS Clase heredada de sensor que representa un GPS
     * \details Contiene latitud, longitud y altura
     */
    GPS():Sensor(3, 360){}
    /*!
     * \brief latitud
     * \return Retorna valor de latitud de tipo double
     */
    double latitud() {return leerDato(0);}
    /*!
     * \brief longitud
     * \return Retorna valor de longitud de tipo double
     */
    double longitud() {return leerDato(1);}
    /*!
     * \brief altura
     * \return Retorna valor de altura de tipo double
     */
    double altura() {return leerDato(2);}
    /*!
     * \brief actualizar Metodo que cambia el dato de acuerdo a los rangos de las medidas
     * \details Rangos: Latitud(-180,180). Longitud(-180,180). Altura(0,4500)
     */
    void actualizar(){
        for(int i=0; i < _tamano; i++){
            if(i ==_tamano-1){_dato[i] = ( rand() % 45000)/10 ;}
            else{_dato[i] = ( rand() % 3600 -1800)/10 ;}
        }
    }
};


class Temp_Hum: public Sensor{
public:
    /*!
     * \brief Temp_Hum Clase heredada de sensor que representa un termohigrometro
     * \details Contiene temperatura y humedad
     */
    Temp_Hum():Sensor(2){}
    /*!
     * \brief temperatura
     * \return Retorna valor de temperatura de tipo double
     */
    double temperatura() {return leerDato(0);}
    /*!
     * \brief humedad
     * \return Retorna valor de humedad de tipo double
     */
    double humedad() { return leerDato(1);}
    /*!
     * \brief actualizar Metodo que cambia el dato de acuerdo a los rangos de las medidas
     * \details Rangos: Temperatura(-10,45). Humedad(0,100)
     */
    void actualizar(){
    _dato[0] = ( rand() % 55 -10) ;
    _dato[1] = ( rand() %100) ;
    }
};


class Viento: public Sensor{
public:
    /*!
     * \brief Viento Clase heredada de sensor que representa un anemometro y una veleta
     * \details Contiene velocidad y direccion del viento
     */
    Viento():Sensor(2, 360){}
    /*!
     * \brief velocidad
     * \return Retorna valor de velocidad del viento de tipo double
     */
    double velocidad() {return leerDato(0);}
    /*!
     * \brief direccion Retorna valor de direccion del viento de tipo double
     * \return
     */
    double direccion() {return leerDato(1);}
    /*!
     * \brief actualizar Metodo que cambia el dato de acuerdo a los rangos de las medidas
     * \details Rangos: Velocidad(0,40). Direccion(-180,180)
     */
    void actualizar(){
        _dato[0] = ( rand() % 40) ;
        _dato[1] = ( rand() %360 -180) ;
        }
};


class Precip: public Sensor{
public:
    /*!
     * \brief Precip Clase heredada de sensor que representa un pluviometro
     * \details Contiene precipitacion
     */
    Precip():Sensor(1,50){}
    /*!
     * \brief precipitacion
     * \return Retorna valor de precipitacion de tipo double
     */
    double precipitacion() {return leerDato(0);}
};

/*!
 * \brief The Dato struct Estructura que contiene todos los datos de los sensores
 */
struct Dato
{
    double Lat, Lon, Alt, Temp, Hum, VelV, DirV, Prec;
    /*!
     * \brief Dato Constructor de la estructura Dato
     */
    Dato() {Lat = Lon = Alt = Temp = Hum = VelV = DirV = Prec = 0.;}
};


#endif // SENSOR_H
