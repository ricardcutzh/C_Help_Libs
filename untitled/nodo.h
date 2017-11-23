#ifndef NODO_H
#define NODO_H

//ESTE NODO ES EL QUE SE DEBE DE PERSONALIZAR PARA PODER UTILIZAR LA ESTRUCUTURA

//DEBDE DECLARARSE EL STRUCT NODO
typedef struct nodo{
    //ATRIBUTOS PERSONALIZADOS
    int valor;
    //ATRIBUTOS OBLIGATORIOS:
    struct nodo *sig;
    struct nodo *ant;
}nodo;

//DECLARAR EL METODO PARA CREAR UN NUEVO NODO
nodo *newNodo();

//METODO QUE SE DEBE SOBREESCRIBIR E INCLUIR
void printNode(nodo *n);


#endif // NODO_H