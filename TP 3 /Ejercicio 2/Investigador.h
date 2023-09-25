#ifndef INVESTIGADOR_H_INCLUDED
#define INVESTIGADOR_H_INCLUDED

#include "Fecha.h"

class Investigador{
private:
    int dni;
    char nombre[30], apellido[30];
    Fecha FechaNacimiento;
    int unidadAcademica, categoria,especialidad;

    //DNI, nombre, apellido, fecha de nacimiento, unidad académica a la que pertenece (entero entre 1 y 30), categoría (1 a 5) y especialidad(1 a 10).

public:
    Investigador(int dni, const char* nombre, const char* apellido,Fecha _FechaNacimiento, int _unidadAcademica, int _categoria,int _especialidad);
    Investigador(){};

    void setNombre(char* _nombre);
    void setApellido(char* _apellido);
    void setDni(int _dni);
    void setFechaNacimiento(Fecha _FechaNacimiento);
    void setUnidadAcademica(int _unidadAcademica);
    void setCategoria(int _categoria);
    void setEspecialidad(int _especialidad);

    int getDni();
    const char* getNombre();
    const char* getApellido();
    Fecha getFechaNacimiento();
    int getUnidadAcademica();
    int getCategoria();
    int getEspecialidad();

    void cargarInvestigador();
    void mostrarInvestigador();


};

#endif // INVESTIGADOR_H_INCLUDED
