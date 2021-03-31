#include <stdio.h>

int main(){

    int num, reverse=0, divisor, residuo;
    printf("Dame un numero para ver si es palindromo o no\n");
    scanf("%d",&num);
    divisor=num;
    while(divisor!=0){
        residuo=divisor%10;
        reverse=reverse*10+residuo;
        divisor=divisor/10;
    }
    if (reverse==num){
        printf("ES PALINDROMO");
    }else{
        printf("No es palindromo");
    }
    

    return 0;
}