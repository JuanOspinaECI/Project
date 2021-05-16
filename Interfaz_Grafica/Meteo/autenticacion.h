#ifndef AUTENTICACION_H
#define AUTENTICACION_H

#include <QDialog>

namespace Ui {
class autenticacion;
}
/*!
 * \brief The autenticacion class Clase principal que permite o restringe el acceso de los usuarios y ofrece la posibilidad de crear un usuario, se ejecuta al inicio
 * \authors Nicolas Castro & Juan Camilo Ospina
 */
class autenticacion : public QDialog
{
    Q_OBJECT

public:
    explicit autenticacion(QWidget *parent = 0);
    int _acc = 0;
    ~autenticacion();

private slots:
    /*!
     * \brief on_salirr_clicked Metodo que termina la ejecucion de la clase autenticacion
     */
    void on_salirr_clicked();
    /*!
     * \brief on_Ingresar_clicked Metodo que valida la informacion suministrada por el usuario para aaccesar o no a la aplicacion
     */
    void on_Ingresar_clicked();
    //!
    //! \brief on_Registrarse_clicked Metodo que activa la clase Registrodialog que registra usuarios nuevos
    //!
    void on_Registrarse_clicked();
    /*!
     * \brief on_show_pas_toggled Metodo que permite mostrar u ocultar la contrasena escrita por el usuario
     * \param checked Presionar el boton show password
     */
    void on_show_pas_toggled(bool checked);

private:
    Ui::autenticacion *ui;

};

#endif // AUTENTICACION_H
