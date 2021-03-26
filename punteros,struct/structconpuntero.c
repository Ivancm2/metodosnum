#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Alumno{
    int boleta;
    int *edad;
    char *nombre;
}Alumno;

int main(){
    //Imprimir un arreglo de caracteres
    char Cadena[30]="Cadena";
    printf("%s",Cadena); //&cadena[0]
    //Creamos un alumno juanito
    Alumno juanito;
    juanito.edad=(int*)malloc(sizeof(int));
    *juanito.edad=25;
    printf("%d",*juanito.edad);

    
    juanito.nombre=(char*)malloc(sizeof(char)*30);
    if (juanito.nombre==NULL){
        printf("No se le pudo asignar memoria");
    }
    strcpy(juanito.nombre,"JuanCarlos");
    printf("%s",juanito.nombre);
    free(juanito.edad);
    free(juanito.nombre);
}
