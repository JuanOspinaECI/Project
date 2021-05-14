#ifndef BASE_LOCAL_H
#define BASE_LOCAL_H

#include <string>
#include <sqlite3.h>
/*!
 *
 */

using namespace std;

struct Dato
{
    double temp, lat, lon, alt, preci, vel, dir;
    int hum;
    string tipo;
    Dato() {temp = lat = lon = alt = vel = dir = preci = 0.0; hum = 0;}
};

/*!
 * \brief The DB_Local class
 * \details Clase que contiene todo el codigo para generar, guardar y consultar base local de datos
 * \authors Nicolas Castro & Juan Camilo Ospina
 */

class DB_Local{

public:
    /*!
     * \brief DB_Local Contructor de la clase DB_local
     * \param path parametro de nombre de archivo a abrir o crear
     */
    DB_Local(string path);
    /*!
     * \brief AbrirDB funcion para abrir base local
     * \return retorna verdadero si no hubo ningun error
     */
    bool AbrirDB();
    /*!
     * \brief CerrarDB funcion para cerrar la base de datos local
     * \return retorna verdadero luego de cerrarla
     */
    bool CerrarDB();
    /*!
     * \brief GuardarDatoProm Funcion para guardar datos promedios en la tabla de promedios
     * \param a es el parametro que contiene todos los promedios de los diferentes sensores
     * \param fecha es un string que contiene la fecha cuando fueron recolectados los promedios dd/mm/yyyy
     * \return retorna verdadero si no hubo ningun error al guardar
     */
    bool GuardarDatoProm(Dato a, string fecha);
    /*!
     * \brief GuardarDatoMax Funcion para guardar los datos mas grandes tomados en la tabla de maximos
     * \param a es el parametro que contiene todos los promedios de los diferentes sensores
     * \param fecha es un string que contiene la fecha cuando fueron recolectados los maximos dd/mm/yyyy
     * \return retorna verdadero si no hubo ningun error al guardar
     */
    bool GuardarDatoMax(Dato a, string fecha);
    /*!
     * \brief GuardarDatoMin Funcion para guardar los datos menores en la tabla de minimos
     * \param a es el parametro que contiene todos los minimos de los diferentes sensores
     * \param fecha es un string que contiene la fecha cuando fueron recolectados los minimos dd/mm/yyyy
     * \return retorna verdadero si no hubo ningun error al guardar
     */
    bool GuardarDatoMin(Dato a, string fecha);
    /*!
     * \brief ValidarPass Funcion que valida el password entregado en parametros segun el usuario tambien entregado
     * \param username usuario a buscar en la base de datos
     * \param passwd password del usuario a buscar
     * \return retorna verdadero si el password es correcto y coincede con el usuario
     */
    bool ValidarPass(string username, string passwd);
    /*!
     * \brief GuardarHist Funcion que guarda el historial de la persona que entro a utilizar el dispositivo
     * \param us Usuario que ingreso al dispositivo
     * \param hora hora en que ingreso
     * \param min minuto en que ingreso
     * \param fecha fecha en el momento que ingreso a utlizar el programa
     * \return retorna verdadero si guarda el historial en la tabla de la base local
     */
    bool GuardarHist(string us, int hora, int min, string fecha);

private:
    string  _path;
    sqlite3 *_db;
};

#endif // BASE_LOCAL_H
