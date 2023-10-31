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
#include "Persona.h"
#include "Alumno.h"
#include "Funciones.h"
using namespace std;



void Alumno::setLegajoAlumno(int l){legajoAlumno=l; }
void Alumno::setCodigoCarrera(int cc){codigoCarrera=cc;}
void Alumno::setTituloSecundario(const char *titulo){strcpy(tituloSecundario, titulo);}

int Alumno::getLegajoAlumno(){return legajoAlumno; }
int Alumno::getCodigoCarrera(){return codigoCarrera;}
const char* Alumno::getTituloSecundario(){return tituloSecundario;}

    void Alumno::Cargar(){
        Persona::Cargar();
        cout<<"LEGAJO: ";
        cin>>legajoAlumno;
        cout<<"CARRERA: ";
        cin>>codigoCarrera;
        cout<<"TITULO: ";
        cargarCadena(tituloSecundario,29);
    }
    void Alumno::Mostrar(){
        Persona::Mostrar();
        cout<<"LEGAJO: ";
        cout<<legajoAlumno<<endl;
        cout<<"CARRERA: ";
        cout<<codigoCarrera<<endl;
        cout<<"TITULO: ";
        cout<<tituloSecundario<<endl;
    }
    void Alumno::cambiarDNI(int d){
        DNI=d;
        ///setDNI(d);
    }

