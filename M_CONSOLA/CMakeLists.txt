cmake_minimum_required(VERSION 2.8.12)

project(M_CONSOLA)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

add_executable( ${PROJECT_NAME} main.cpp alarma.h
Sensor.h Sensor.cpp base_local.h base_local.cpp )
target_link_libraries ( ${PROJECT_NAME} Qt5::Core sqlite3 )

