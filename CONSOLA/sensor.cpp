#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdlib.h>
#include "sensor.h"

void Sensor::actualizar(){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( rand() % 1000) / 10.;
    }
Sensor Sensor::operator+(Sensor &a){
        Sensor Sensor_TEMP;
        for(int i=0; i < _tamano; i++)
            Sensor_TEMP._dato[i] = _dato[i] + a._dato[i];
        return Sensor_TEMP;
    }
Sensor Sensor::operator/(int &a){
        Sensor Sensor_TEMP;
        for(int i=0; i < _tamano; i++)
            Sensor_TEMP._dato[i] = _dato[i]/a;
        return Sensor_TEMP;
    }
 void Sensor::reset() {
        for(int i=0; i < _tamano; i++)
            _dato[i] =0.0;
    }
virtual Sensor::Sensor(int tamano = 1){
        _dato = new double[tamano];
        _tamano = tamano;
    }
	
GPS GPS::operator+(GPS &a){
        GPS GPS_TEMP;
        GPS_TEMP = GPS_TEMP  + a;
        return GPS_TEMP;
    }
GPS GPS::operator/(int &a){
        GPS GPS_TEMP;
        GPS_TEMP = GPS_TEMP/a;
        return GPS_TEMP;
    }
void GPS::actualizar(){
        for(int i=0; i < _tamano; i++){
			if(i ==_tamano-1){_dato[i] = ( rand() % 4500) ;}
			else{_dato[i] = ( rand() % 360 -180) ;}
		}
    }	
	
Temp_Hum Temp_Hum::operator+(Temp_Hum &a){
        Temp_Hum TH_TEMP;
        TH_TEMP = TH_TEMP + a;
        return TH_TEMP;
    }
Temp_Hum Temp_Hum::operator/(int &a){
        Temp_Hum TH_TEMP;
        TH_TEMP = TH_TEMP/a;
        return TH_TEMP;
    }
void Temp_Hum::actualizar(){
	_dato[0] = ( rand() % 55 -10) ;
	_dato[1] = ( rand() %100) ;
    }	
	
Viento Viento::operator+(Viento &a){
        Viento Viento_TEMP;
        Viento_TEMP = Viento_TEMP + a;
        return Viento_TEMP;
    }
Viento Viento::operator/(int &a){
        Viento Viento_TEMP;
        Viento_TEMP = Viento_TEMP/a;
        return Viento_TEMP;
    }
void Viento::actualizar(){
	_dato[0] = ( rand() % 40) ;
	_dato[1] = ( rand() %360 -180) ;
    }		
Pre Pre::operator+(Viento &a){
        Pre Pre_TEMP;
        Pre_TEMP = Pre_TEMP + a;
        return Pre_TEMP;
    }
Pre Pre::operator/(int &a){
        Pre Pre_TEMP;
        Pre_TEMP = Pre_TEMP/a;
        return Pre_TEMP;
    }
void Pre::actualizar(){
	_dato[0] = ( rand() % 50) ;
    }	