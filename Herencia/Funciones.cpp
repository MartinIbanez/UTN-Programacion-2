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
using namespace std;


void cargarCadena(char *palabra, int tam){
    int i = 0;
    fflush(stdin);
    for (i = 0 ; i < tam ; i++ ){
        palabra[i] = cin.get();
        if(palabra[i] == '\n') break;
    }
    palabra[i] = '\0';
    fflush(stdin);
}
