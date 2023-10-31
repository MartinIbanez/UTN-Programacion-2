#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "Persona.h"
#include "Fecha.h"

class Persona{
protected:
    char nombre[30], apellido[30], direccion[30];
    char email[30], telefono[30];
    int DNI;
    Fecha fechaNacimiento;
public:
    void Cargar();
    void Mostrar();
    void setDNI(int d);

    int getDNI();

};

#endif // PERSONA_H_INCLUDED
