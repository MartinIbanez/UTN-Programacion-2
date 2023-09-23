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

int main(){

    int opcion;
    bool repetir=true;
    Empleado emple[1];



    while (repetir=true) {
        cout << endl << "        -------   EMPRESA TECNOLOGICA   -------" << endl << endl;
        cout <<"                 1. CARGAR EMPLEADOS" << endl;
        cout <<"                 2. MOSTRAR EMPLEADOS" << endl;
        cout <<"                 0. SALIR DEL PROGRAMA" << endl;

        cout << endl <<"  INGRESAR OPCION DESEADA: ";
        cin >> opcion;
        system("cls");
        switch (opcion) {
            case 1:
                system("cls");
                cout<<"  Cantidad de empleados = 5 "<<endl;

                for(int x=0;x<1;x++){
                    emple[x].cargarEmpleado();

                }
                cout<<endl<<endl<<endl;
                cout<<"             FIN DE LA CARGA DE EMPLEADOS"<<endl<<endl<<endl;
                cout << "Presiona Enter para continuar...";
                getch();

                system("cls");

                break;

            case 2:
                system("cls");
                cout<<"  Listado de Empleados = 5 "<<endl;

                for(int x=0;x<1;x++){
                    emple[x].mostrarEmpleado();

                }
                cout<<endl<<endl<<endl;
                cout << "Presiona Enter para continuar...";
                getch();

                system("cls");

                break;

            case 0:

                cout<<endl<<endl<<endl<<endl;
                cout <<"  Presiona Enter para continuar...";
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;;
                return 0; // Salir del programa
                cout <<" Presiona Enter para continuar...";
                break;

            default:
                cout << "Opción no válida. Por favor, ingresa un número válido." << endl;
                break;
        }
    }

    return 0;
}
