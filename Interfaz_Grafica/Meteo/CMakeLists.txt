cmake_minimum_required( VERSION 3.1 )
project( Meteo )

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)

INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS} )

set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTOUIC ON )
set( CMAKE_AUTORCC ON )

add_executable( ${PROJECT_NAME} main.cpp mainwindow.cpp mainwindow.h mainwindow.ui registrodialog.cpp registrodialog.h registrodialog.ui
    sensor.h sensor.cpp autenticacion.cpp autenticacion.h autenticacion.ui Local.h Local.cpp )
target_link_libraries ( ${PROJECT_NAME} Qt5::Core Qt5::Widgets sqlite3 )
