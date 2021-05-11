#ifndef AUTENTICACION_H
#define AUTENTICACION_H

#include <QDialog>

namespace Ui {
class autenticacion;
}

class autenticacion : public QDialog
{
    Q_OBJECT

public:
    explicit autenticacion(QWidget *parent = 0);
    int _acc = 0;
    ~autenticacion();

private slots:
    void on_salirr_clicked();
    void on_Ingresar_clicked();

    void on_Registrarse_clicked();

    void on_show_pas_toggled(bool checked);

private:
    Ui::autenticacion *ui;

};

#endif // AUTENTICACION_H
