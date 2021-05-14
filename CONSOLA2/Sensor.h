#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdlib.h>
/*!
 * \brief The Sensor class Clase principal que hereda cada sensor
 *  \authors Nicolas Castro & Juan Camilo Ospina
 */
class Sensor{

protected:
    double *_dato;
    int _tamano;

public:
    /*!
     * \brief Sensor Constructor de la clase sensor
     * \param tamano parametro entero que especifica la cantidad de sensores
     */
    Sensor(int tamano = 1);
    ~Sensor(){ delete []_dato; }
    /*!
     * \brief leerDato Funcion que lee los datos tomados por un sensor especifico del obejeto
     * \param i parametro que indica el numero del sensor a analizar
     * \return retorna el valor del sensor en tipo double
     */
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }
    /*!
     * \brief maximo funcion que calcula el maximo valor entre Sensores de a y Sensores de b
     * \param a primero sensor a comparar
     * \param b segundo sensor a comparar
     * \return retorna un obejeto sensor con los valores maximos de cada sensor
     */
    Sensor maximo(Sensor &a, Sensor &b);
    /*!
     * \brief minimo funcion que calcula el minimo valor entre Sensores de a y Sensores de b
     * \param a primero sensor a comparar
     * \param b segundo sensor a comparar
     * \return retorna un obejeto sensor con los valores minimos de cada sensor
     */
    Sensor minimo(Sensor &a, Sensor &b);
    /*!
     * \brief actualizar funcion que simula que los sensores adquieren nuevos valores tomados
     */
    virtual void actualizar();
    /*!
     * \brief mostrarDatos funcion que genera un string con los valores de cada sensor en el momento
     * \return retorna un string con los valores en orden separados con ;
     */
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
    /*!
     * \brief operator + sobrecarga del operador de suma para la clase Sensor
     * \param a sensor el cual se va a sumar con el que se llama a la funcion
     * \return retorna un objeto sensor con la suma de los dos
     */
    Sensor operator+(Sensor &a);
    /*!
     * \brief operator / sobrecarga del operado division para la clase sensor por un entero
     * \param a se envia el entero por el cual se va a dividir el valor de cada sensor
     * \return retorna un obejto de la clase sensor con el resultado de cada operacion
     */
    Sensor operator/(int &a);
    /*!
     * \brief operator = sobrecarga del operador =
     * \param a se envia el Sensor que queremos copiar
     * \return retorna el objeto sensor igual al parametro a
     */
    const Sensor& operator=(const Sensor &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }
    /*!
     * \brief reset funcion que deja todos los sensores en valor 0.0
     */
    void reset();
};

class GPS:public Sensor{
public:
    /*!
     * \brief GPS Clase heredada de sensor
     * \details Contiene 3 sensores: Latitud, Longitud, altura
     */
    GPS():Sensor(3){}
    /*!
     * \brief actualizar actualiza los valores de: latitud (entre -180 y 180), longitud (entre -180 y 180) y altura (entre 0 y 45000)
     */
	void actualizar();
    /*!
     * \brief latitud
     * \return retorna el valor de latitud
     */
    double latitud() {return leerDato(0);}
    /*!
     * \brief longitud
     * \return retorna el valor de longitud
     */
    double longitud() {return leerDato(1);}
    /*!
     * \brief altura
     * \return retorna el valor de altura
     */
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
    /*!
     * \brief Temp_Hum Clase heredada de Sensor
     * \details Contiene 2 sensores: temperatura y humedad
     */
    Temp_Hum():Sensor(2){}
    /*!
     * \brief temperatura
     * \return retorna el valor en double de la temperatura
     */
    double temperatura() {return leerDato(0);}
    /*!
     * \brief humedad
     * \return retorna el valor en double de la humedad
     */
    double humedad() { return leerDato(1);}
    /*!
     * \brief actualizar cambia los valores leidos por los sensores: temperatura (-10 a 45) y humedad(0 a 100)
     */
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
    /*!
     * \brief Viento Clase heredada de Sensor
     * \details Contiene 2 sensores: velocidad y direccion
     */
    Viento():Sensor(2){}
    /*!
     * \brief velocidad
     * \return retorna en tipo double el valor de la velocidad
     */
    double velocidad() {return leerDato(0);}
    /*!
     * \brief direccion
     * \return retorna en tipo double el valor de la direccion
     */
    double direccion() {return leerDato(1);}
    /*!
     * \brief actualizar  cambia los valores leidos por los sensores: velocidad (0 a 40) y direccion (-180 a 180)
     */
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
    /*!
     * \brief Pre Clase heredada de Sensor
     * \details contiene un unico sensor: precipitacion
     */
    Pre():Sensor(1){}
    /*!
     * \brief precipitacion
     * \return devuelve el valor en double de la precipitacion
     */
    double precipitacion() {return leerDato(0);}
    /*!
     * \brief actualizar cambia el valor del sensor de precipitacion entre (0 a 50)
     */
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
