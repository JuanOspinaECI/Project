#include "base_local.h"
#include <sstream>
#include <iostream>
#include <string>



DB_Local::DB_Local(std::string path){
    _path = path;
    _db = nullptr;
}

bool DB_Local::AbrirDB(){
    int rc;
    stringstream sqlstr;
    char *zErrMsg = nullptr;

    rc = sqlite3_open( _path.c_str(), &_db);

    if( rc != 0 ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(_db));
       return false;
    } else {
       fprintf(stderr, "Opened database successfully\n");
    }

    // Validar que todas las tablas existan correctamente
    /* Create SQL statement */
    sqlstr << "CREATE TABLE IF NOT EXISTS TBL_Datos_Prom (id_dato INTEGER PRIMARY KEY NOT NULL ," \
       "Fecha TEXT NOT NULL, Temperatura REAL NOT NULL, Humedad INTEGER NOT NULL," \
       " Longitud REAL NOT NULL, Latitud REAL NOT NULL, Altura REAL NOT NULL, Velocidad REAL NOT NULL," \
       "Direccion REAL NOT NULL, Precipitacion REAL NOT NULL );";

    /* Execute SQL statement */
    rc = sqlite3_exec(_db, sqlstr.str().c_str(), 0, 0, &zErrMsg);    if( rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
        return false;
     } else {
        fprintf(stdout, "Table TBL_Datos_Prom validada.\n");
     }

    /* Create SQL statement */
    sqlstr << "CREATE TABLE IF NOT EXISTS TBL_Datos_Max (id_dato INTEGER PRIMARY KEY NOT NULL ," \
       "Fecha TEXT NOT NULL, Temperatura REAL NOT NULL, Humedad INTEGER NOT NULL," \
       " Longitud REAL NOT NULL, Latitud REAL NOT NULL, Altura REAL NOT NULL, Velocidad REAL NOT NULL," \
       "Direccion REAL NOT NULL, Precipitacion REAL NOT NULL );";

    /* Execute SQL statement */
    rc = sqlite3_exec(_db, sqlstr.str().c_str(), 0, 0, &zErrMsg);
    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       fprintf(stdout, "Table TBL_Datos_Max validada.\n");
    }

    /* Create SQL statement */
    sqlstr << "CREATE TABLE IF NOT EXISTS TBL_Datos_Min (id_dato INTEGER PRIMARY KEY NOT NULL ," \
       "Fecha TEXT NOT NULL, Temperatura REAL NOT NULL, Humedad INTEGER NOT NULL," \
       " Longitud REAL NOT NULL, Latitud REAL NOT NULL, Altura REAL NOT NULL, Velocidad REAL NOT NULL," \
       "Direccion REAL NOT NULL, Precipitacion REAL NOT NULL );";

    /* Execute SQL statement */
    rc = sqlite3_exec(_db, sqlstr.str().c_str(), 0, 0, &zErrMsg);
    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       fprintf(stdout, "Table TBL_Datos_Min validada.\n");
    }

    /* Create SQL statement */
    sqlstr << "CREATE TABLE IF NOT EXISTS Historial (Ref INTEGER PRIMARY KEY NOT NULL ," \
       "Fecha TEXT NOT NULL, Usuario TEXT NOT NULL, Hora TEXT NOT NULL);";

    /* Execute SQL statement */
    rc = sqlite3_exec(_db, sqlstr.str().c_str(), 0, 0, &zErrMsg);
    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       fprintf(stdout, "Table Historial validada.\n");
    }

    /* Create SQL statement */
    sqlstr << "CREATE TABLE IF NOT EXISTS TBL_Usuario (id_usuario INTEGER PRIMARY KEY NOT NULL," \
       "Nombre TEXT NOT NULL, Apellido TEXT NOT NULL," \
       "user_name TEXT NOT NULL, passwd TEXT NOT NULL);";

    /* Execute SQL statement */

    rc = sqlite3_exec(_db, sqlstr.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       std::cerr << "SQL error: " << zErrMsg << std::endl;
       sqlite3_free(zErrMsg);
       return false;
    } else {
       fprintf(stdout, "Tabla TBL_Usuario validada.\n");
    }

    return true;
}

bool DB_Local::CerrarDB(){
    sqlite3_close(_db);
    return true;
}

bool DB_Local::GuardarDatoProm(Dato a){
   char *zErrMsg = nullptr;
   stringstream sql;
   sql << "INSERT INTO TBL_Datos_Prom (id_dato, Fecha, Temperatura, Humedad, Longitud, Latitud, Altura, Velocidad, Direccion, Precipitacion) VALUES (";
   sql << rand() << ", 27/04/2021, " << a.temp << ", " << a.hum << ", " <<  a.lon << ", " << a.lat << ", " << a.alt;
   sql << ", " << a.vel << ", " << a.dir << ", " << a.preci << ");";

   int rc = sqlite3_exec(_db, sql.str().c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      std::cerr << "SQL error: " << zErrMsg << std::endl;
      sqlite3_free(zErrMsg);
      return false;
   } else {
      fprintf(stdout, "Datos ingresados correctamente.\n");
   }
   return true;
}

bool DB_Local::GuardarDatoMax(Dato a){
   char *zErrMsg = nullptr;
   stringstream sql;
   sql << "INSERT INTO TBL_Datos_Max (id_dato, Fecha, Temperatura, Humedad, Longitud, Latitud, Altura, Velocidad, Direccion, Precipitacion) VALUES (";
   sql << rand() << ", 27/04/2021, " << a.temp << ", " << a.hum << ", " <<  a.lon << ", " << a.lat << ", " << a.alt;
   sql << ", " << a.vel << ", " << a.dir << ", " << a.preci << ");";

   int rc = sqlite3_exec(_db, sql.str().c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      std::cerr << "SQL error: " << zErrMsg << std::endl;
      sqlite3_free(zErrMsg);
      return false;
   } else {
      fprintf(stdout, "Datos ingresados correctamente.\n");
   }
   return true;
}
bool DB_Local::GuardarDatoMin(Dato a){
   char *zErrMsg = nullptr;
   stringstream sql;
   sql << "INSERT INTO TBL_Datos_Min (id_dato, Fecha, Temperatura, Humedad, Longitud, Latitud, Altura, Velocidad, Direccion, Precipitacion) VALUES (";
   sql << rand() << ", '27/04/2021', " << a.temp << ", " << a.hum << ", " <<  a.lon << ", " << a.lat << ", " << a.alt;
   sql << ", " << a.vel << ", " << a.dir << ", " << a.preci << ");";

   int rc = sqlite3_exec(_db, sql.str().c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      std::cerr << "SQL error: " << zErrMsg << std::endl;
      sqlite3_free(zErrMsg);
      return false;
   } else {
      fprintf(stdout, "Datos ingresados correctamente.\n");
   }
   return true;
}
bool DB_Local::GuardarHist(std::string us, int hora, int min, string fecha){
   char *zErrMsg = nullptr;
   stringstream sql;
   string hr, mn;
   hr = to_string(hora);
   mn = to_string(min);
   sql << "INSERT INTO historial (Ref, Fecha, Usuario, Hora) VALUES (";
   sql << rand()-1 << ", '"<< fecha <<"', '" << us << "', '" << hr << ":" << mn << "');";// << ");";

   int rc = sqlite3_exec(_db, sql.str().c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      std::cerr << "SQL error: " << zErrMsg << std::endl;
      sqlite3_free(zErrMsg);
      return false;
   } else {
      fprintf(stdout, "Datos ingresados correctamente.\n");
   }
   return true;
}
static int valpass(void* data, int argc, char**argv, char** colName){
    string *pp = (string*)data;
    pp->assign( argv[0] );
}

bool DB_Local::ValidarPass(std::string username, std::string passwd){
    stringstream sqlstream;
    sqlstream << "SELECT passwd FROM TBL_Usuario WHERE user_name = '";
    sqlstream << username << "';";

    string passdb;
    char* zErrMsg = nullptr;
    int rc;
    bool res = false;

    /* Execute SQL statement */
    rc = sqlite3_exec(_db, sqlstream.str().c_str(), valpass, (void*)&passdb, &zErrMsg);

    cout << "Dato leído de la DB: " << passdb << " y el pasado por el usuario es: " << passwd << endl;

    if ( passwd.compare( passdb ) == 0 ){
        cout << "Passwd correcto" << endl;
        res = true;
    }else{
        cout << "Passwd erróneo" << endl;
    }

    return res;
}
