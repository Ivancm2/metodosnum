#include <stdio.h>

int main(){
    FILE *archivo;
    char nombre[30], caracter, cadena[20];
    printf("Dame el nombre del archivo para leer\n");
    scanf("%s",nombre);
    archivo=fopen(nombre,"r");
    int i=0;
    caracter=fgetc(archivo);
    printf("%c",caracter);
    while (caracter!=EOF){
        caracter=fgetc(archivo);
        printf("%c",caracter);
    }
    fclose(archivo);

    return 0;
}