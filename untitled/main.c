#include <stdio.h>
#include <manejocadenas.h>
#include <datastructure.h>

int main()
{
    List *l = newList();
    nodo *n = newNodo();
    n->valor = 1;

    nodo *n2 = newNodo();
    n2->valor = 2;

    nodo *n3 = newNodo();
    n3->valor = 3;

    nodo *n4 = newNodo();
    n4->valor = 4;

    nodo *n5 = newNodo();
    n5->valor = 5;
    /*push(l,n);
    push(l,n2);
    push(l,n3);
    push(l,n4);
    push(l,n5);
    printList(l);
    pop(l);
    printList(l);
    pop(l);
    printList(l);
    pop(l);
    printList(l);
    pop(l);
    printList(l);
    pop(l);
    printList(l);*/

    /*queue(l,n);
    queue(l,n2);
    queue(l,n3);
    queue(l,n4);
    queue(l,n5);
    printList(l);
    deque(l);
    printList(l);
    deque(l);
    printList(l);
    deque(l);
    printList(l);
    deque(l);
    printList(l);
    deque(l);
    printList(l);*/
    return 0;
}
