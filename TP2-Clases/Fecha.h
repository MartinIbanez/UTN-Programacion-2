#include <string>
#include <ctime>
#include <iostream>
#include "Empleado.h"

#ifndef FECHA_H
#define FECHA_H

class Fecha{
private:
    int _dia, _mes, _anio;
    int _diaSemana;

public:

    Fecha();
    Fecha(int dia,int mes,int anio);

    std::string getNombreDia();
    bool esBisiesto();


    void establecerFechaPorDefecto();
    void mostrarFecha();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    int getDia();
    int getMes();
    int getAnio();

    std::string toString();

    void agregarDia();

    void agregarDias(int cantidadDias);

    void restarDia();

};


#endif // FECHA_H
