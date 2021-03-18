#include <stdio.h>
#include <stdlib.h>


int main(){
    char opcion[10];
    char nombre[100], nuevo[100];
    printf("Dame una opcion\n");
    gets(opcion);
    if (atoi(opcion)==1){
        printf("Dame el nombre de un archivo para eliminarlo\n");
        gets(nombre);
        if (remove(nombre)==0){
            printf("Archivo eliminado correctamente");
        }else{
            printf("No se pudo eliminar el archivo, puede que no exista");
        }
    }else if (atoi(opcion)==2){
        printf("Dame el nombre de un archivo para cambiarle el nombre\n");
        gets(nombre);
        printf("Dame el nuevo nombre del archivo\n");
        gets(nuevo);
        if (rename(nombre,nuevo)==0){
            printf("Se cambio el nombre");
        }else{
            printf("No se pudo cambiar el nombre");
        }

    }

    
}