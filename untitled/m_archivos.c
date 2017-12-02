#ifndef M_ARCHIVOS_C
#define M_ARCHIVOS_C
#include<m_archivos.h>

typedef struct expediente
{
    char nombre[20];
    char appellido[40];
    int tel;
    float nota;
}expediente;

void ejemplo1()//ABIRR Y CERRAR
{
    /*
     *MODOS DE ABRIBR ARCHIVOS
     * r = SOLO PARA LEER
     * w = ESCRIBIR PERO NO LEERLO
     * a = COMO W SOLO QUE ESCRIBE AL FINAL
     * r+ = LECTURA Y ESCRITURA Y EL ARCHIVO DEBE EXISTIR
     * w+ = LEER Y ESCRIBIR, SI EXISTIESE SE SOBRE ESCRIBE
    */
    char cadena[80];
    FILE *fp = fopen("fichero.txt","w");//ARBIR
    //fgets(cadena,80,fp);//LEER EL CONTENIDO
    //fprintf(fp, "HOLA PARA ESCRIBIR");//ESCRIBIR ARCHIVOS COMO CUANDO SE IMPRIME EN PANTALLA
    fclose(fp);//CERRAR EL ARCHIVO
    //printf("%s\n", cadena);

}

void ejemplo2()//ESCRIBIR Y LEER
{
    FILE *fp = fopen("fichero.txt","r");
    /* FUNCIONES A VER
     * fgetc LEER CARACTER
     * fgets
     * fputc ESCRIBIR CARACTER
     * fputs
    */
    fclose(fp);
}

void ejemplo3()
{
    /*expediente a = {"Ricardo","Cutz",40286446,8.5};
    expediente b = {"Jorge","Say",50287446,9};
    expediente c = {"Uziel","Esquite",25467896,7};
    expediente alumnos[3] = {a,b,c};
    FILE *archivo = fopen("expedientes.bin","w");
    //FWRITE RECIBE 3 PARAMETRO : estructura donde se guarda(PUNTERO), tamanio de escritura, catidad de estructuras, puntero de archivo
    fwrite(alumnos,sizeof(expediente),3,archivo);
    fclose(archivo);*/
    expediente alumnos2[3];
    FILE *archivo2 = fopen("expedientes.bin", "r");
    //FREAD RECIBE 3 PARAMETRO : estructura donde se guarda(PUNTERO), tamanio de escritura, catidad de estructuras, puntero de archivo
    fread(alumnos2,sizeof(expediente),3,archivo2);
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", alumnos2[i].nombre);
    }
    fclose(archivo2);
    //FSEEK BUSCA UN PUNTERO EN UN ARCHIVO
    /*LA FUNCION TIENE LOS SIGUIENTES PARAMETROS
     * PUNTERO QUE QUEREMOS MOVER
     * OFFSET CUANTO LO DESPLAZAMOS ENTERO NUMERO DE BYTES
     * WHENCE DESDE DONDE SE VA A MOVER EL PUNTERO: SET_SET(DESDE EL INICIO), SET_CUR(DESDE POSICION ACTUAL), SET_END(AL FINAL DEL ARCHIVO)
    */
    /*REWIND
     * VOLVER AL INICIO DEL ARCHIVO
    */
    /*FTELL
     *SABER EN DONDE SE ENCUENTRA EL PUNTERO
     *RECIBE COMO PARAMETRO EL PUNTERO DEL ARCHIVO
    */
}

#endif // M_ARCHIVOS_C
