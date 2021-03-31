#include <stdio.h>
#include <stdlib.h>

int main(){
    int cant;
    printf ("Dame una cantidad de numeros");
    scanf("%i",&cant);
    int arreglo[cant];
    for (int i=0;i<cant; i++){
        printf ("Dame el valor de cada posicion");
        scanf ("%i",&arreglo[i]);
    }
    for (int i=0; i<cant; i++){
         printf ("%i", arreglo[i]);
    }
}