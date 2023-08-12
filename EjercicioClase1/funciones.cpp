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
    cout<< "-------------------------------------------"<<endl<<endl;
    rlutil::locate(38,12);
    showItem("1- CARGAR MATERIAS DE LA CARRERA", 38, 12, y==0);
    showItem("2- MOSTRAR MATERIAS DE LA CARRERA", 38, 13, y==1);
    showItem("3- CARGAR INGRESOS DE ESTUDIANTES AL AULA", 38, 14, y==2);
    showItem("4- MATERIAS SIN ACCESO DE ALUMNOS", 38, 15, y==3);
    showItem("5- MATERIA CON MAYOR CANTIDAD DE HORAS", 38, 16, y==4);
    showItem("6- TOTAL DE ACCESOS DE ALUMNOS EN MARZO", 38, 17, y==5);
    showItem("-------------------------------------------", 38, 18, false);
    showItem("0-SALIR", 38, 19, y==6);
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
        if(y==6){
            y=5;
        }

        break;
    case 15: //Bajar
        locate(36,11 +y);
        cout<<" "<<endl;
        y++;
        if(y>5){
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

void cargarCadena(char materia[][20],int const tam,int pos){

    for(int x=0;x<tam;x++){

      cin.getline(materia[pos],20,'\n');
    }

}


void cargarMaterias(int numMateria[],int const tam,char materia[][20]){
        int aux,pos=0;

        for(int x=0;x<tam;x++){
            cout<<x+1<<". Ingrese Numero de Materia: ";
            cin>>aux;
            numMateria[x]=aux;
            cout<<"   Ingresar nombre de la Materia: ";
            cargarCadena(materia,tam,pos);
            pos++;
            cout<<endl;

        }

}


void mostrarMaterias(int numMateria[],int const tam,char materia[][20]){
    rlutil::locate(25,2);
    cout<<" REGISTRO DE MATERIAS DE LA CARRERA "<<endl;

    for(int x=0;x<tam;x++){

        cout<<x+1<<". Materia Nro. "<<numMateria[x]<<" = "<<materia[x]<<endl;
    }

    }

void cargarIngresos(int diaMarzo[31],float horasMaterias[]){

    int legajo, dia, mes, materia;
    float cantHoras;
    rlutil::locate(25,2);
    cout<<" INGRESOS DE ESTUDIANTES AL AULA VIRTUAL "<<endl<<endl;
    cout<<" Nro. LEGAJO: ";
    cin>>legajo;
    while(legajo!=0){
        cout<<" DIA: ";
        cin>>dia;
        cout<<" MES: ";
        cin>>mes;
        cout<<" Nro. MATERIA: ";
        cin>>materia;
        cout<<" HORAS: ";
        cin>>cantHoras;
        cout<<"---------------------"<<endl;
        horasMaterias[materia-1]+=cantHoras;/// para el a y b




        //} accesos[materia-1][dia-1]++;

        cout<<" Nro. LEGAJO: ";
        cin>>legajo;
    }

}
void buscarAccesos(float horasMaterias[],int tam,char materia[][20]){
    rlutil::locate(25,2);
    cout<<" MATERIAS SIN ACCESO DE ALUMNOS "<<endl<<endl;

    for(int x=0;x<tam;x++){
        if(horasMaterias[x]==0){

        cout<<" La materia Nro. "<<x+1<<"-"<<materia[x]<<" NO REGISTRO ACCESOS DE ALUMNOS"<<endl;
    }
}

}
void mayorAcceso(float horasMaterias[],int tam){
    float maximo=0;
    int pos;
    rlutil::locate(25,2);
    cout<<" MATERIA CON MAYOR CANTIDAD DE HORAS REGISTRADAS DE ACCESOS "<<endl<<endl;
    for(int x=0;x<tam;x++){

        if(maximo==0){
            maximo=horasMaterias[x];
            pos=x;
        }
        if(horasMaterias[x]>maximo){
            maximo=horasMaterias[x];
            pos=x;
        }
    }

    cout<<" LA MATERIA Nro. "<<pos+1<<" REGISTRO LA MAYOR CANTIDAD DE HORAS"<<endl;

}
