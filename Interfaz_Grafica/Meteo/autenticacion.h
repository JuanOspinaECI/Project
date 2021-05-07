#ifndef AUTENTICACION_H
#define AUTENTICACION_H

#include <QWidget>

namespace Ui {
class autenticacion;
}

class autenticacion : public QWidget
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

private:
    Ui::autenticacion *ui;

};

#endif // AUTENTICACION_H
