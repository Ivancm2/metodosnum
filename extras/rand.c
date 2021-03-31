#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int num, aleatorio;
    printf("Advina el numero entre 1 y 10");
    scanf("%d",&num);
    srand(time(NULL));
    aleatorio=((rand()*rand())%10)+1;
    printf("\n%d",aleatorio);
    if (num==aleatorio){
        printf("Bien hecho");
    }else{
        printf("Te equivocaste");
    }
}