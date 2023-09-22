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
#include "Fecha.h"
#include "Empleado.h"


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

    void Empleado::setDni(int d){
    _dni=d;
    }

    void Empleado::setNombre( char *n){
    strcpy(_nombre,n);
    }

    void Empleado::setApellido(char *a){
    strcpy(_apellido,a);
    }

    void Empleado::setDomicilio(char *d){
    strcpy(_domicilio,d);
    }

    void Empleado::setEmail(char *e){
    strcpy(_email,e);
    }
    void Empleado::setFechaNacimiento(Fecha f){
    _FechaNacimiento=f;
    }
    void Empleado::setCargo(int c){
    _Cargo=c;
    }

    int Empleado::getDni(){
    return _dni;
    }

    const char* Empleado::getNombre(){
    return _nombre;
    }

    const char* Empleado::getApellido(){
    return _apellido;
    }
    const char* Empleado::getDomicilio(){
    return _domicilio;
    }
    const char* Empleado::getEmail(){
    return _email;
    }
    Fecha Empleado::getFechaNacimiento(){
    return _FechaNacimiento;
    }
    int  Empleado::getCargo(){
    return _Cargo;
    }
    
    Empleado::Empleado(int dni = 0, const char* nombre = "", const char* apellido = "",const char* domicilio = "", const char* email = "",Fecha fechaNacimiento = Fecha(), int cargo = 0){

    _dni = dni;
    strcpy(_nombre, nombre);
    strcpy(_apellido, apellido);
    strcpy(_domicilio, domicilio);
    strcpy(_email, email);
    _FechaNacimiento = fechaNacimiento;
    _Cargo = cargo;

    }
