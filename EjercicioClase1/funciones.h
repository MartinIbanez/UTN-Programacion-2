#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int menu();
void showItem(const char* text, int posx, int posy, bool select);
void cargarMaterias(int numMateria[],int const tam,char materia[][20]);
void mostrarMaterias(int numMateria[],int const tam,char materia[][20]);
void cargarCadena(char materia[][20],int const tam, int pos);
void cargarIngresos(int diaMarzo[31],float horasMaterias[]);
void buscarAccesos(float horasMaterias[],int tam,char materia[][20]);
void mayorAcceso(float horasMaterias[],int tam);

#endif // FUNCIONES_H_INCLUDED
