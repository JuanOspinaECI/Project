#ifndef REGISTRODIALOG_H
#define REGISTRODIALOG_H
#include <QtCore>
#include <QObject>
#include <iostream>
#include <QDialog>

using namespace std;

namespace Ui {
class registroDialog;
}
/*!
 * \brief The registroDialog class Clase que permite registrar usuarios en la base de datos
 */
class registroDialog : public QDialog
{
    std::string _fecha;
    int    _hr, _minu, _year, _month, _day;
    Q_OBJECT

public:
    explicit registroDialog(QWidget *parent = 0);
    ~registroDialog();

public slots:
    /*!
     * \brief ActualizarFechaFromSO Metodo que actualiza la fecha actual
     * \details Obtiene hora, minuto, ano, mes y dia
     */
    void ActualizarFechaFromSO(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        _hr = ltm->tm_hour;
        _minu = ltm->tm_min;
        _year = ltm->tm_year + 1900;
        _month = ltm->tm_mon + 1;
        _day = ltm->tm_mday;
    }

private slots:
    /*!
     * \brief on_cancelar_clicked Metodo que permite regresar a la clase autenticacion al presionar el boton cancelar
     */
    void on_cancelar_clicked();
    /*!
     * \brief on_registro_clicked Metodo que calcula la edad del usuario y la guarda junto con la informacion suministrada por el usuario
     */
    void on_registro_clicked();
    /*!
     * \brief on_show_pass_toggled Metodo que permite mostrar u ocultar la contrasena escrita por el usuario
     * \param checked Presionar el boton show password
     */
    void on_show_pass_toggled(bool checked);

private:
    Ui::registroDialog *ui;
};

#endif // REGISTRODIALOG_H
