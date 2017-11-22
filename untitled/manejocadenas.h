#ifndef MANEJOCADENAS_H
#define MANEJOCADENAS_H
#include<string.h>
#define TRUE 1
#define FALSE 0
//SIZE CAN BE DEFINED BY DE USER HERE
#define LINE_SIZE 200


typedef char * string;

//DEFINICION DE PROTOTIPOS
void liberaCadena(string cadena);
string quitaEspacios(string cadena);
string nuevaCadena();
void pasameAMinuscula(string cadena);
int cadenaSize(string cadena);


#endif // MANEJOCADENAS_H
