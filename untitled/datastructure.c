#ifndef DATASTRUCTURE_C
#define DATASTRUCTURE_C
#include<datastructure.h>

//METODOS GENERALES
int count(List *l)
{
    if(l->sz == 0)
    {
        return 0;
    }
    else
    {
        int x = 0;
        nodo *aux = l->first;
        while(aux)
        {
            aux = aux->sig;
            x++;
        }
        return x;
    }
}
void deleteList(List *l)
{
    if(l->sz>0)
    {
        nodo *aux;
        while(l->sz!=0)
        {
            aux = pop(l);
            aux = NULL;
            free(aux);
        }
        l = NULL;
        free(l);
    }
}
List *newList()
{
    List *l = (List*)malloc(sizeof(List));
    return l;
}
void printList(List *l)
{
    printf("=========ELEMENTOS EN LISTA=============\n");
    if(l->sz!=0)
    {
        nodo *aux = l->first;
        while(aux!=NULL)
        {
            printNode(aux);
            aux = aux->sig;
        }
    }
    else
    {
        printf("No hay elementos...\n");
    }
    printf("========= FIN ELEMENTOS EN LISTA========\n");
}

//METODOS DE UNA PILA
void push(List *l, nodo *nuevo)
{
    if(l->sz==0)
    {
        l->first = nuevo;
        l->last = nuevo;
        l->sz++;
    }
    else
    {
        //INSERTA AL PRINCIPIO DE LA LISTA
        nuevo->sig = l->first;
        l->first->ant = nuevo;
        l->first = nuevo;
        l->sz++;
    }
}
nodo *pop(List *l)
{
    if(l->sz==0)
    {
        return NULL;
    }
    else
    {
        nodo *aux = l->first;
        l->first = l->first->sig;
        if(l->first)
        {
            l->first->ant = NULL;
        }
        l->sz--;
        return aux;
    }
}

//METODOS DE UNA COLA
void queue(List *l, nodo *nuevo)
{
    if(l->sz == 0)
    {
        l->first = nuevo;
        l->last = nuevo;
        l->sz++;
    }
    else
    {
        l->last->sig = nuevo;
        nuevo->ant = l->last;
        l->last = nuevo;
        l->sz++;
    }
}
nodo *deque(List *l)
{
    if(l->sz>0)
    {
        nodo *ret = l->last;
        l->last = l->last->ant;
        if(l->sz>1)
        {
            l->last->sig = NULL;
        }
        l->sz--;
        return ret;
    }
    else
    {
        return NULL;
    }
}



#endif // DATASTRUCTURE_C
