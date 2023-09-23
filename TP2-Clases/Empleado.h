#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Fecha.h"


class Empleado{
private:
    int _dni;
    char _nombre[30], _apellido[30];
    char _domicilio[30],_email[40];
    Fecha _FechaNacimiento;
    int _Cargo;

public:

   Empleado(int dni, const char* nombre, const char* apellido,const char* domicilio, const char* email,Fecha fechaNacimiento, int cargo);
   Empleado(){};

    void setDni(int d);
    void setNombre(char *n);
    void setApellido(char *a);
    void setDomicilio(char *d);
    void setEmail(char *e);
    void setFechaNacimiento(Fecha f);
    void setCargo(int c);


    int getDni();
    const char *getNombre();
    const char *getApellido();
    const char *getDomicilio();
    const char *getEmail();
    Fecha getFechaNacimiento();
    int getCargo();

    void cargarEmpleado(){
    cout<<"DNI: ";
    cin>>_dni;
    cout<<"NOMBRE: ";
    cin>>_nombre;
    cout<<"APELLIDO: ";
    cin>>_apellido;
     cout<<"DOMICILIO: ";
    cin>>_domicilio;
    cout<<"EMAIL: ";
    cin>>_email;
    cout<<"FECHA DE NACIMIENTO: ";
    
    cout<<"Cargo: ";
    cin>>_Cargo;


    }
    void mostrarEmpleado();



};

#endif // EMPLEADO_H
