#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdlib.h>
#include "Sensor.h"

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
	Sensor Sensor::maximo(Sensor &a, Sensor &b){
		Sensor Sensor_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] >= b._dato[i]){Sensor_TEMP._dato[i] = a._dato[i];}
			else{Sensor_TEMP._dato[i] = b._dato[i];}
        return Sensor_TEMP;	
	}
    Sensor Sensor::minimo(Sensor &a, Sensor &b){
		Sensor Sensor_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] <= b._dato[i]){Sensor_TEMP._dato[i] = a._dato[i];}
			else{Sensor_TEMP._dato[i] = b._dato[i];}
        return Sensor_TEMP;	
	}	
	void Sensor::reset() {
        for(int i=0; i < _tamano; i++)
            _dato[i] =0.0;
    }
    Sensor::Sensor(int tamano){
        _dato = new double[tamano];
        _tamano = tamano;
    }
	
	
	
    GPS GPS::operator+(const GPS &a){
        GPS GPS_TEMP;
        for(int i=0; i < _tamano; i++)
            GPS_TEMP._dato[i] = _dato[i] + a._dato[i];
        return GPS_TEMP;
    }
/* GPS const GPS&::operator=(const GPS &a){
        for(int i =0 ; i < _tamano; i++)
            this->_dato[i] = a._dato[i];

        return *this;
    }	 */
    GPS GPS::operator/(int &a){
        GPS GPS_TEMP;
        for(int i=0; i < _tamano; i++)
            GPS_TEMP._dato[i] = _dato[i] / a;
        return GPS_TEMP;
    }
	GPS GPS::maximo(const GPS &a, const GPS &b){
		GPS GPS_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] >= b._dato[i]){GPS_TEMP._dato[i] = a._dato[i];}
			else{GPS_TEMP._dato[i] = b._dato[i];}
        return GPS_TEMP;	
	}
	GPS GPS::minimo(const GPS &a, const GPS &b){
		GPS GPS_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] <= b._dato[i]){GPS_TEMP._dato[i] = a._dato[i];}
			else{GPS_TEMP._dato[i] = b._dato[i];}
        return GPS_TEMP;	
	}	
	void GPS::actualizar(){
        for(int i=0; i < _tamano; i++){
            if(i ==_tamano-1){_dato[i] = ( rand() % 45000)/10 ;}
            else{_dato[i] = ( rand() % 3600 -1800)/10 ;}
		}
    }	


	
    Temp_Hum Temp_Hum::operator+(const Temp_Hum &a){
        Temp_Hum Temp_Hum_TEMP;
        for(int i=0; i < _tamano; i++)
            Temp_Hum_TEMP._dato[i] = _dato[i] + a._dato[i];
        return Temp_Hum_TEMP;
    }
    Temp_Hum Temp_Hum::operator/(int &a){
        Temp_Hum Temp_Hum_TEMP;
        for(int i=0; i < _tamano; i++)
            Temp_Hum_TEMP._dato[i] = _dato[i] / a;
        return Temp_Hum_TEMP;
    }
	Temp_Hum Temp_Hum::maximo(const Temp_Hum &a, const Temp_Hum &b){
		Temp_Hum Temp_Hum_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] >= b._dato[i]){Temp_Hum_TEMP._dato[i] = a._dato[i];}
			else{Temp_Hum_TEMP._dato[i] = b._dato[i];}
        return Temp_Hum_TEMP;	
	}
	Temp_Hum Temp_Hum::minimo(const Temp_Hum &a, const Temp_Hum &b){
		Temp_Hum Temp_Hum_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] <= b._dato[i]){Temp_Hum_TEMP._dato[i] = a._dato[i];}
			else{Temp_Hum_TEMP._dato[i] = b._dato[i];}
        return Temp_Hum_TEMP;	
	}	
    void Temp_Hum::actualizar(){
	_dato[0] = ( rand() % 55 -10) ;
	_dato[1] = ( rand() %100) ;
    }	


	
    Viento Viento::operator+(Viento &a){
        Viento Viento_TEMP;
        for(int i=0; i < _tamano; i++)
            Viento_TEMP._dato[i] = _dato[i] + a._dato[i];
        return Viento_TEMP;
    }
    Viento Viento::operator/(int &a){
        Viento Viento_TEMP;
        for(int i=0; i < _tamano; i++)
            Viento_TEMP._dato[i] = _dato[i] / a;
        return Viento_TEMP;
    }
    Viento Viento::maximo(Viento &a, Viento &b){
		Viento Viento_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] >= b._dato[i]){Viento_TEMP._dato[i] = a._dato[i];}
            else{Viento_TEMP._dato[i] = b._dato[i];}
        return Viento_TEMP;
	}
    Viento Viento::minimo(Viento &a, Viento &b){
		Viento Viento_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] <= b._dato[i]){Viento_TEMP._dato[i] = a._dato[i];}
			else{Viento_TEMP._dato[i] = b._dato[i];}
        return Viento_TEMP;	
	}
void Viento::actualizar(){
	_dato[0] = ( rand() % 40) ;
	_dato[1] = ( rand() %360 -180) ;
    }		

    Pre Pre::operator+(Pre &a){
        Pre Pre_TEMP;
        for(int i=0; i < _tamano; i++)
            Pre_TEMP._dato[i] = _dato[i] + a._dato[i];
        return Pre_TEMP;
    }
    Pre Pre::operator/(int &a){
        Pre Pre_TEMP;
        for(int i=0; i < _tamano; i++)
            Pre_TEMP._dato[i] = _dato[i] / a;
        return Pre_TEMP;
    }
    Pre Pre::maximo(Pre &a, Pre &b){
		Pre Pre_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] >= b._dato[i]){Pre_TEMP._dato[i] = a._dato[i];}
			else{Pre_TEMP._dato[i] = b._dato[i];}
        return Pre_TEMP;
	}
    Pre Pre::minimo(Pre &a, Pre &b){
		Pre Pre_TEMP;
        for(int i=0; i < _tamano; i++)
            if(a._dato[i] <= b._dato[i]){Pre_TEMP._dato[i] = a._dato[i];}
			else{Pre_TEMP._dato[i] = b._dato[i];}
        return Pre_TEMP;	
	}	
	void Pre::actualizar(){
	_dato[0] = ( rand() % 50) ;
    }	
