#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "Local.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ActualizarFechaFromSO();
    ui->setupUi(this);
    _timer = new QTimer();
    _timer->setInterval( 100 );
    connect( _timer, SIGNAL( timeout() ), this,  SLOT( cadaSeg() ) );
    _timer->start();
    _seg = _min = _hora = _state= 0;
    ui->txtest->setText( "Apagado" );
}

void MainWindow::cadaSeg(){
    ++_seg;
    if( _seg % 5 == 0 ) cada5Seg();
    if(_seg == 60 ) {
        _seg = 0;
        std::cout << "1 Min: " << std::endl;
        switch( _state)
        {
        case 0:
            ui->txtLat->setText( "" );
            ui->txtLong->setText( "" );
            ui->txtAlt->setText( "" );
            ui->txtTemp->setText( "" );
            ui->txtHum->setText( "" );
            ui->txtVel->setText( "" );
            ui->txtDir->setText( "" );
            ui->txtpreci->setText( "" );
            break;
        case 1:
            ui->txtLat->setText( "" );
            ui->txtLong->setText( "" );
            ui->txtAlt->setText( "" );
            ui->txtTemp->setText( "" );
            ui->txtHum->setText( "" );
            ui->txtVel->setText( "" );
            ui->txtDir->setText( "" );
            ui->txtpreci->setText( "" );//new line
            promedio();
            break;
        case 2:
            ui->txtLat->setText( "" );
            ui->txtLong->setText( "" );
            ui->txtAlt->setText( "" );
            ui->txtTemp->setText( "" );
            ui->txtHum->setText( "" );
            ui->txtVel->setText( "" );
            ui->txtDir->setText( "" );
            ui->txtpreci->setText( "" );//new line
            minimo();
            break;
        case 3:
            ui->txtLat->setText( "" );
            ui->txtLong->setText( "" );
            ui->txtAlt->setText( "" );
            ui->txtTemp->setText( "" );
            ui->txtHum->setText( "" );
            ui->txtVel->setText( "" );
            ui->txtDir->setText( "" );
            ui->txtpreci->setText( "" );//new line
            maximo();
            break;
        }
        ++_min;
        if (_min == 60 ){
            _min = 0;
            ActualizarFechaFromSO();
            ++_hora;
            if(_hora == 24) _hora = 0;
        }
    }
}


void MainWindow::cada5Seg(){
    _timer->start();
    _GPS.actualizar();
    _TH.actualizar();
    _Viento.actualizar();
    _preci.actualizar();

    Dato a;
    a.Lat = _GPS.latitud();
    a.Lon = _GPS.longitud();
    a.Alt = _GPS.altura();
    a.Temp = _TH.temperatura();
    a.Hum = _TH.humedad();
    a.VelV = _Viento.velocidad();
    a.DirV = _Viento.direccion();
    a.Prec = _preci.precipitacion();

    _vDatos.push_back( a );

}


void MainWindow::minimo(){
    string fech;
    std::stringstream date;
    Dato min;

    min.Lat = _vDatos[0].Lat;
    min.Lon = _vDatos[0].Lon;
    min.Alt = _vDatos[0].Alt;
    min.Temp = _vDatos[0].Temp;
    min.Hum = _vDatos[0].Hum;
    min.VelV = _vDatos[0].VelV;
    min.DirV = _vDatos[0].DirV;
    min.Prec = _vDatos[0].Prec;

    for(int i = 0; i<12; i++){
        if( _vDatos[i].Lat < min.Lat){
            min.Lat = _vDatos[i].Lat;
        }
        if( _vDatos[i].Lon < min.Lon){
            min.Lon = _vDatos[i].Lon;
        }
        if( _vDatos[i].Alt < min.Alt){
            min.Alt = _vDatos[i].Alt;
        }
        if( _vDatos[i].Temp < min.Temp){
            min.Temp = _vDatos[i].Temp;
        }
        if( _vDatos[i].Hum < min.Hum){
            min.Hum = _vDatos[i].Hum;
        }
        if( _vDatos[i].VelV < min.VelV){
            min.VelV = _vDatos[i].VelV;
        }
        if( _vDatos[i].DirV < min.DirV){
            min.DirV = _vDatos[i].DirV;
        }
        if( _vDatos[i].Prec < min.Prec){
            min.Prec = _vDatos[i].Prec;
        }
    }
    date << to_string(_day)  << "/" << to_string(_month)  << "/" << to_string(_year) ;
    fech = date.str();
    DB_Local a("register.db");
    a.AbrirDB();
    a.GuardarDatoMin(min,fech);
    a.CerrarDB();
    ui->txtLat->setText( QString::number( min.Lat ) );
    ui->txtLong->setText( QString::number( min.Lon ) );
    ui->txtAlt->setText( QString::number( min.Alt ) );
    ui->txtTemp->setText( QString::number( min.Temp ) );
    ui->txtHum->setText( QString::number( min.Hum ) );
    ui->txtVel->setText( QString::number( min.VelV ) );
    ui->txtDir->setText( QString::number( min.DirV ) );
    ui->txtpreci->setText( QString::number( min.Prec ) );//new line

    _vDatos.clear();

}


void MainWindow::maximo(){
    Dato max;
    string fech;
    std::stringstream date;

    max.Lat = _vDatos[0].Lat;
    max.Lon = _vDatos[0].Lon;
    max.Alt = _vDatos[0].Alt;
    max.Temp = _vDatos[0].Temp;
    max.Hum = _vDatos[0].Hum;
    max.VelV = _vDatos[0].VelV;
    max.DirV = _vDatos[0].DirV;
    max.Prec = _vDatos[0].Prec;

    for(int i = 0; i<12; i++){
        if( _vDatos[i].Lat > max.Lat){
            max.Lat = _vDatos[i].Lat;
        }
        if( _vDatos[i].Lon > max.Lon){
            max.Lon = _vDatos[i].Lon;
        }
        if( _vDatos[i].Alt > max.Alt){
            max.Alt = _vDatos[i].Alt;
        }
        if( _vDatos[i].Temp > max.Temp){
            max.Temp = _vDatos[i].Temp;
        }
        if( _vDatos[i].Hum > max.Hum){
            max.Hum = _vDatos[i].Hum;
        }
        if( _vDatos[i].VelV > max.VelV){
            max.VelV = _vDatos[i].VelV;
        }
        if( _vDatos[i].DirV > max.DirV){
            max.DirV = _vDatos[i].DirV;
        }
        if( _vDatos[i].Prec > max.Prec){
            max.Prec = _vDatos[i].Prec;
        }
    }
    date << to_string(_day)  << "/" << to_string(_month)  << "/" << to_string(_year) ;
    fech = date.str();
    DB_Local a("register.db");
    a.AbrirDB();
    a.GuardarDatoMax(max,fech);
    a.CerrarDB();
    ui->txtLat->setText( QString::number( max.Lat ) );
    ui->txtLong->setText( QString::number( max.Lon ) );
    ui->txtAlt->setText( QString::number( max.Alt ) );
    ui->txtTemp->setText( QString::number( max.Temp ) );
    ui->txtHum->setText( QString::number( max.Hum ) );
    ui->txtVel->setText( QString::number( max.VelV ) );
    ui->txtDir->setText( QString::number( max.DirV ) );
    ui->txtpreci->setText( QString::number( max.Prec ) );//new line

    _vDatos.clear();
}

void MainWindow::promedio(){
    Dato prom;
    string fech;
    std::stringstream date;

    for (int i = 0; i < 12 ; i++){
        prom.Lat += _vDatos[i].Lat;
        prom.Lon += _vDatos[i].Lon;
        prom.Alt += _vDatos[i].Alt;
        prom.Temp += _vDatos[i].Temp;
        prom.Hum += _vDatos[i].Hum;
        prom.VelV += _vDatos[i].VelV;
        prom.DirV += _vDatos[i].DirV;
        prom.Prec += _vDatos[i].Prec;
    }

    prom.Lat /= 12.;
    prom.Lon /= 12.;
    prom.Alt /= 12.;
    prom.Temp /= 12.;
    prom.Hum /= 12.;
    prom.VelV /= 12.;
    prom.DirV /= 12.;
    prom.Prec /= 12.;

    date << to_string(_day)  << "/" << to_string(_month)  << "/" << to_string(_year) ;
    fech = date.str();
    DB_Local a("register.db");
    a.AbrirDB();
    a.GuardarDatoProm(prom,fech);
    a.CerrarDB();

    ui->txtLat->setText( QString::number( prom.Lat ) );
    ui->txtLong->setText( QString::number( prom.Lon ) );
    ui->txtAlt->setText( QString::number( prom.Alt ) );
    ui->txtTemp->setText( QString::number( prom.Temp ) );
    ui->txtHum->setText( QString::number( prom.Hum ) );
    ui->txtVel->setText( QString::number( prom.VelV ) );
    ui->txtDir->setText( QString::number( prom.DirV ) );
    ui->txtpreci->setText( QString::number( prom.Prec ) );//new line

    _vDatos.clear();
}

MainWindow::~MainWindow(){
    delete ui;
    delete _timer;
}

void MainWindow::on_next_clicked()
{
    _state++;
    if(_state == 4){
        _state = 1;
        _seg = 0;
    }
    if(_state == 1){
        ui->txtest->setText( "Promedios" );
        _seg = 0;
    }
    else if(_state == 2){
        ui->txtest->setText( "Valores minimos" );
        _seg = 0;
    }
    else{
        ui->txtest->setText( "Valores maximos" );
        _seg = 0;
    }
}

void MainWindow::on_prev_clicked()
{

    _state= _state - 1;
    if(_state < 0){
        _state = 0;
    }

    if(_state == 1){
        ui->txtest->setText( "Promedios" );
        _seg = 0;
    }
    else if(_state == 2){
        ui->txtest->setText( "Valores minimos" );
        _seg = 0;
    }
    else if(_state == 3){
        ui->txtest->setText( "Valores maximos" );
        _seg = 0;
    }
    else if(_state == 0){
        ui->txtest->setText( "Apagado" );
    }
}

void MainWindow::on_exit_clicked()
{
    close();
}
