#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#include "Persona.h"


class Alumno: public Persona{
private:
    int legajoAlumno;
    int codigoCarrera;
    char tituloSecundario[30];
    ///si se hereda de manera privada tanto las
    ///propiedades como los métodos se copian en la parte privada de la derivada


public:
    void setLegajoAlumno(int l);
    void setCodigoCarrera(int cc);
    void setTituloSecundario(const char *titulo);

    int getLegajoAlumno();
    int getCodigoCarrera();
    const char *getTituloSecundario();
    void Cargar();
    void Mostrar();
    void cambiarDNI(int d);
};

#endif // ALUMNO_H_INCLUDED
