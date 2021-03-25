#include <stdio.h>
#include "misfunciones.h"
#include <stdlib.h>
int main(){
    system("cls");
    int a=5, b=10;
    int c;
    c=multiplicar(a,b);
    printf("%d",c);
    char cadena[50]="Hola ";
    char cadena2[20]="Adios";
    copiarcadena(cadena2,cadena);
    printf("%s",cadena);
    gotoxy(5,10);
    printf("mucho gusto");
    Sleep(5000);
}