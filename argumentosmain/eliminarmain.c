#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc!=2){
        printf("Tienes que poner un argumento nomas extra");
        exit(0);
    }
    if (remove(argv[1])==0){
        printf("Archivo eliminado correctamente");
    }else{
        printf("No se pudo eliminar el archivo");
    }
    
    
}