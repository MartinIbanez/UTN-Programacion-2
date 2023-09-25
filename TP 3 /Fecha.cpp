#include <iostream>
using namespace std;
#include "Fecha.h"
#include <ctime>


Fecha::Fecha(){  // Establece fecha del sistema (Documentación)
   time_t t=time(NULL);
   struct tm *f= localtime(&t);
   _dia= f->tm_mday;
   _mes= f->tm_mon+1;
   _anio=f->tm_year+1900;
   _diaSemana=f->tm_wday;

}

std::string Fecha::getNombreDia(){

    std::string nombres[7]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
    if (_diaSemana>=0 && _diaSemana<=6){
        return nombres[_diaSemana];
    }
    return " ";

}
bool Fecha::esBisiesto(){
    if ((_anio % 4 == 0 && _anio % 100!=0)||(_anio%400 == 0)){
        return true;
    }
    return false;
}

Fecha::Fecha(int dia,int mes,int anio){
   _dia = dia;
   _mes = mes;
   _anio = anio;


    if(_dia<=0&& _dia>31 || _mes<=0&& _mes>12 || _anio<=0 ){
            establecerFechaPorDefecto();
    }

    else{
        int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            if (esBisiesto()){
             dias[1]++;
             }

            if (_dia>dias[_mes]){
                establecerFechaPorDefecto();
                }

    }

    /*setDia(dia);
    setMes(mes);
    setAnio(anio);
    _diaSemana=-1;*/
}

void Fecha::establecerFechaPorDefecto(){
    _dia=1;
    _mes=1;
    _anio=2023;

}





void Fecha::mostrarFecha(){
    cout << "Fecha: " << _dia <<"/"<< _mes<< "/"<<_anio<< endl;

}

void Fecha::setDia(int dia){
    _dia=dia;
}
void Fecha::setMes(int mes){
    _mes=mes;
}
void Fecha::setAnio(int anio){
    _anio=anio;
}
int Fecha::getDia(){
    return _dia;
}
int Fecha::getMes(){
    return _mes;
}
int Fecha::getAnio(){
    return _anio;
}

    string Fecha::toString(){
    string valorADevolver;
    valorADevolver= std::to_string(_dia)+"/"+ std::to_string(_mes) + "/"+ std::to_string(_anio);

    return valorADevolver;
}

void Fecha::agregarDia(){
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if (esBisiesto()){
            dias[1]++;

        }

        _dia++;

        if(_dia>dias[_mes-1]){
           _dia=1;
           _mes++;
           if (_mes>12){
            _mes=1;
            _anio++;
           }

        }
}


void Fecha::agregarDias(int cantidadDias){
    if(cantidadDias > 0){ //ciclo que llama a la función agregar días
        for(int i=0; i<cantidadDias; i++){
            agregarDia();
        }
    }
}

void Fecha::restarDia(){
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if (esBisiesto()){
            dias[1]++;
        }
        _dia--;

        if(_dia<1){
           _mes--;

        if (_mes<1){
            _mes=12;
            _anio--;
           }
           _dia=dias[_mes-1];

        }
}
void Fecha::Cargar(){
            cout<<"DIA: ";
            cin>>_dia;
            cout<<"           MES: ";
            cin>>_mes;
            cout<<"           ANIO: ";
            cin>>_anio;
        }
