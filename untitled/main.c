#include <stdio.h>
#include <manejocadenas.h>

int main()
{
    string prueba = nuevaCadena();
    gets(prueba);
    pasameAMinuscula(prueba);
    string cad2 = quitaEspacios(prueba);
    int x = cadenaSize(prueba);
    printf("%s y su tamanio es: %i\n",cad2,x);
    return 0;
}
