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

int menu(){
    int op, y =0;
    bool aux=true;
    hidecursor();
        setBackgroundColor(BLACK);
       setColor(WHITE);
       hidecursor();
       do{
    cout<<endl<<endl;
    rlutil::locate(38,10);
    cout<< "      SELECCIONE LA OPCION DESEADA"<<endl;
    rlutil::locate(38,11);
    cout<< "----------------------------------------"<<endl<<endl;
    rlutil::locate(38,12);
    showItem("1- CARGAR MATERIAS DE LA CARRERA", 38, 12, y==0);
    showItem("2- CARGAR INGRESOS DE ESTUDIANTES AL AULA", 38, 13, y==1);
    showItem("3- MATERIAS SIN ACCESO DE ALUMNOS", 38, 14, y==2);
    showItem("4- MATERIA CON MAYOR CANTIDAD DE HORAS", 38, 15, y==3);
    showItem("5- TOTAL DE ACCESOS DE ALUMNOS EN MARZO", 38, 16, y==4);
    showItem("----------------------------------------", 38, 17, false);
    showItem("0-SALIR", 38, 18, y==6);
    locate(36,12 + y);
    int key= getkey();
    switch(key){
    case 14: //Subir
        locate(36,12 +y);
        cout<<" "<<endl;
        y --;
        if(y<0){
            y=0;
        }
        if(y==5){
            y=4;
        }

        break;
    case 15: //Bajar
        locate(36,11 +y);
        cout<<" "<<endl;
        y++;
        if(y>4){
            y=6;
        }
        break;
    case 1: //Enter

        if(y==0){
            op=1;
            aux=false;
        }
        if(y==1){
            op=2;
            aux=false;
        }
        if(y==2){
            op=3;
            aux=false;
        }
        if(y==3){
            op=4;
            aux=false;
        }
        if(y==4){
            op=5;
            aux=false;
        }
          if(y==6){
            op=0;
            aux=false;
        }

        break;
    default:
        break;
       }

       }while(aux==true);

return op;
}
void showItem(const char* text, int posx, int posy, bool select)
{
    if(select){
        setBackgroundColor(BLUE);
    }
    else {
        setBackgroundColor(BLACK);
    }
    rlutil::locate(posx,posy);
    cout<< text<<endl;
    setBackgroundColor(BLACK);
}
