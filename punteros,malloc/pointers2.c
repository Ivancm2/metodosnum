#include <stdio.h>
void cambio(int *x){
    *x=69;
}


int main(){
    int numero, *ptr;
    ptr=&numero;
    printf("Dame un numero");
    scanf("%d",ptr);

    printf("%d",numero);
}