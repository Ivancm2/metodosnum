#include <stdio.h>

/*
3 TIPOS DE LOOPS (BUCLES)
DO WHILE
WHILE
FOR
*/
int main(){
    //Programa que imprima todos los factores de un numero
    int numero, factor;
    printf("Dame un numero");
    scanf("%d",&numero);
    for (factor=1;factor<=numero;factor++){
        if (numero%factor==0){
            printf("%d ", factor);
        }
    }
    return 0;
}