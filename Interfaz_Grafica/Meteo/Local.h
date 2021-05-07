#ifndef BASE_LOCAL_H
#define BASE_LOCAL_H
#include "sensor.h"
#include <string>
#include <sqlite3.h>


using namespace std;

//struct Dato
//{
    //double temp, lat, lon, alt, preci, vel, dir;
    //int hum;
    //string tipo;
  //  Dato() {temp = lat = lon = alt = vel = dir = preci = 0.0; hum = 0;}
//};

class DB_Local{

public:
    DB_Local(string path);
    bool AbrirDB();
    bool CerrarDB();
    bool GuardarDatoProm(Dato a, string fecha);
    bool GuardarDatoMax(Dato a, string fecha);
    bool GuardarDatoMin(Dato a, string fecha);
    bool ValidarPass(string username, string passwd);
    bool GuardarUser(std::string us, string nom, string ape, string doc, string fecha , string pass, int Edad);

private:
    string  _path;
    sqlite3 *_db;
};

#endif // BASE_LOCAL_H