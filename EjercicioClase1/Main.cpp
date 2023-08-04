/*Las autoridades de la carrera TUP de la UTN están realizando un análisis de los cursos virtuales de las distintas materias.
Por cada una de las 20 materias de la carrera tiene la siguiente información:
 Número de materia (entre 1 y 20), Nombre, Cantidad de alumnos inscriptos, Cantidad de profesores

 Además por cada ingreso de los estudiantes al aula virtual se registra lo siguiente:
Legajo, Fecha de acceso (día y mes), Número de la materia a la que ingreso, Cantidad de horas (número real)

 El fin de los datos se indica con un número de legajo igual a 0.
 Se quiere responder las siguientes preguntas:
 - Las materias que no tuvieron acceso de alumnos nunca
 - La materia que más cantidad de horas registro de acceso de alumnos
 - Por cada materia y día de marzo, la cantidad de ACCESOS DE alumnos a las aulas virtuales.

 Hacer un programa EN EL MARCO DE UN PROYECTO DE CODEBLOCK con un menú con opciones para cargar los datos,
 mostrar cada punto y salir del programa.*/
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
#include "rlutil.h" ///COLOR Y GOTOXY.
#include "Funciones.h"
using namespace rlutil;
using namespace std;

int main() {
    setlocale (LC_ALL,"Spanish");//PARA CARACTERES ESPECIALES.
    setlocale (LC_ALL,"C");

    char nombre[15];
    int opcion;
    opcion=menu();
    //cls();
    //system("cls");

    while (opcion != 0)
        {

            switch (opcion)
                {
                case 1:
                system("cls");




                rlutil::locate(2,25);
                cout << "PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");
                rlutil::hidecursor();
                anykey();
                break;
                case 2:
                    system("cls");




                rlutil::locate(2,25);
                cout << "PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");
                rlutil::hidecursor();
                anykey();

                    break;
                case 3:
                    system("cls");




                rlutil::locate(2,25);
                cout << "PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");
                rlutil::hidecursor();
                anykey();

                    break;
                case 4:
                    system("cls");




                rlutil::locate(2,25);
                cout << "PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");
                rlutil::hidecursor();
                anykey();

                    break;
                case 5:
                    system("cls");




                rlutil::locate(2,25);
                cout << "PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");
                rlutil::hidecursor();
                anykey();

                    break;
                default:
                    cout << "LA OPCION INGRESADA NO ESTA DISPONIBLE" << endl;
                }
            opcion=menu();
        }
        rlutil::locate(3,25);
        cout << " FIN DEL PROGRAMA" << endl;



    cout<<endl<<endl<<endl;
    getch();
    return 0;
}
