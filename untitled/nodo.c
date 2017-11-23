#ifndef NODO_C
#define NODO_C
#include<nodo.h>
#include<stdio.h>

nodo *newNodo()
{
    //ESTRUCTURA OBLIGATORIA
    nodo *n = (nodo*)malloc(sizeof(nodo));
    n->ant = NULL;
    n->sig = NULL;
    //PERSONALIZABLE
    n->valor = 0;
}

//PERMITE IMPRIMIR EL NODO SE SOBRE ESCRIBE CON LA PROPIEDAD QUE SE DESEA IMPRIMIR
void printNode(nodo *n)
{
    printf("val: %i\n",n->valor);
}

#endif // NODO_C
