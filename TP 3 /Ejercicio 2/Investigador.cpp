#include <iostream>
#include<cstdlib> ///PARA LIMPIAR LA PANTALLA
#include <stdlib.h> ///PARA LA PAUSA.
#include <ctime>     ///LIBRERIA PARA NUMERO ALEATORIO.
#include <string.h> ///LIBRERIA PARA CADENA DE CARACTERES.
#include <cstring>  ///COPIA UNA PALABRA EN OTRA.
#include <conio.h> ///PARA USAR GETCH.
#include <string> ///ELEMENTOS TIPO CHAR
#include<locale.h> ///PARA CARACTERES ESPECIALES.
#include<windows.h> ///PARA EL LOGO DE CARD JITSU Y COLOR.
#include <clocale> ///PARA CARACTERES ESPECIALES.
using namespace std;
#include "Investigador.h"
#include "Fecha.h"

void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=cin.get();

        if (palabra[i]=='\n'){

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);
}

Investigador::Investigador(int _dni, const char* n, const char* a,Fecha _FechaNacimiento, int _unidadAcademica, int _categoria,int _especialidad){
    dni=_dni;
    cargarCadena(nombre,29);
    cargarCadena(apellido,29);
    FechaNacimiento=_FechaNacimiento;
    unidadAcademica=_unidadAcademica;
    categoria=_categoria;
    especialidad=_especialidad;
}

    void Investigador::setNombre(char *_nombre){
        cargarCadena(nombre,29);

    }
    void Investigador::setApellido(char *_apellido){
        cargarCadena(apellido,29);
    }
    void Investigador::setDni(int _dni){
        dni=_dni;

    }
    void Investigador::setFechaNacimiento(Fecha _FechaNacimiento){
        FechaNacimiento=_FechaNacimiento;
    }
    void Investigador::setUnidadAcademica(int _unidadAcademica){
        unidadAcademica=_unidadAcademica;
    }
    void Investigador::setCategoria(int _categoria){
        categoria=_categoria;
    }
    void Investigador::setEspecialidad(int _especialidad){
        especialidad=_especialidad;
    }

    int  Investigador::getDni(){
        return dni;
    }
    const char* Investigador::getNombre(){
        return nombre;
    }
    const char* Investigador::getApellido(){
        return apellido;
    }
    Fecha Investigador::getFechaNacimiento(){
        return FechaNacimiento;
    }
    int Investigador::getUnidadAcademica(){
        return unidadAcademica;
    }
    int Investigador::getCategoria(){
        return categoria;
    }
    int Investigador::getEspecialidad(){
        return especialidad;
    }

    void Investigador::cargarInvestigador(){
            cout<<"DNI: ";
            cin>>dni;
            cout<<"Nombre: ";
            cargarCadena(nombre,29);
            cout<<"Apellido: ";
            cargarCadena(apellido,29);
            cout<<"Fecha Nac: ";
            FechaNacimiento.Cargar();
            cout<<"Unidad Academica(1 a 30): ";
            cin>>unidadAcademica;
            cout<<"Categoria(1 a 5): ";
            cin>>categoria;
            cout<<"Especialidad(1 a 10): ";
            cin>>especialidad;
    }

    void Investigador::mostrarInvestigador(){
            cout<<"DNI: "<<dni<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"Fecha Nac: "<<FechaNacimiento.toString()<<endl;
            cout<<"Unidad Academica(1 a 30): "<<unidadAcademica<<endl;
            cout<<"Categoria(1 a 5): "<<categoria<<endl;
            cout<<"Especialidad(1 a 10): "<<especialidad<<endl;

    }



