#ifndef BASE_LOCAL_H
#define BASE_LOCAL_H
#include "sensor.h"
#include <string>
#include <sqlite3.h>


using namespace std;

/*!
 * \brief The DB_Local class Clase que contiene todo el codigo para generar, guardar y consultar base local de datos
 * \authors Nicolas Castro & Juan Ospina
 */
class DB_Local{

public:
    /*!
     * \brief DB_Local Contructor de la clase DB_local
     * \param path Parametro de nombre de archivo a abrir o crear
     */
    DB_Local(string path);
    /*!
     * \brief AbrirDB Metodo para abrir base local
     * \return retorna verdadero si se abrio  correctamente la DB y falso si ocurrio algun error
     */
    bool AbrirDB();
    /*!
     * \brief CerrarDB Metodo para cerrar la base de datos local
     * \return Retorna verdadero luego de cerrarla
     */
    bool CerrarDB();
    /*!
     * \brief GuardarDatoProm Metodo para guardar el promedio de los datos tomados por los sensores
     * \param a Parametro que contiene todos los promedios de los diferentes sensores
     * \param fecha Parametro tipo string que contiene la fecha cuando fueron recolectados los promedios dd/mm/yyyy
     * \return Retorna verdadero si se guardo la informacion correctamente
     */
    bool GuardarDatoProm(Dato a, string fecha);
    /*!
     * \brief GuardarDatoMax Metodo para guardar los datos mas grandes tomados por los sensores
     * \param a Parametro que contiene todos los maximos de los diferentes sensores
     * \param fecha Parametro tipo string que contiene la fecha cuando fueron recolectados los maximos dd/mm/yyyy
     * \return Retorna verdadero si se guardo la informacion correctamente
     */
    bool GuardarDatoMax(Dato a, string fecha);
    /*!
     * \brief GuardarDatoMin Metodo para guardar los datos mas pequenos tomados por los sensores
     * \param a Parametro que contiene todos los promedios de los diferentes sensores
     * \param fecha Parametro tipo string que contiene la fecha cuando fueron recolectados los promedios dd/mm/yyyy
     * \return Retorna verdadero si se guardo la informacion correctamente
     */
    bool GuardarDatoMin(Dato a, string fecha);
    /*!
     * \brief ValidarPass Metodo que valida el password entregado en parametros segun el usuario tambien entregado
     * \param username Usuario a buscar en la base de datos
     * \param passwd Contrasena del usuario a buscar
     * \return Retorna verdadero si el password es correcto y coincede con el usuario
     */
    bool ValidarPass(string username, string passwd);
    /*!
     * \brief GuardarUser Metodo que permite acceder a otra ventana que registra un usuario nuevo
     * \param us Usuario
     * \param nom Nombre del usuario
     * \param ape Apellido del usuario
     * \param doc ID del Usuario
     * \param fecha Fecha de nacimiento del usuario
     * \param pass Contrasena
     * \param Edad Edad del usuario
     * \return Retorna verdadero si se guardo la informacion correctamente
     */
    bool GuardarUser(std::string us, string nom, string ape, string doc, string fecha , string pass, int Edad);

private:
    string  _path;
    sqlite3 *_db;
};

#endif // BASE_LOCAL_H
