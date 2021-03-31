#include <stdio.h>

int main(){
    int cant, max, min,num;
    printf("Dame una cantidad de numeros");
    scanf("%d",&cant);
    for (int i=0;i<cant;i++){
        printf("Dame el numero %d",i+1);
        scanf("%d",&num);
        if (i==0){
            max=num;
            min=num;
        }else if(num>max){
            max=num;
        }else if (num<min){
            min=num;
        }
    }
    printf("El maximo es %d y el minimo es %d", max,min);
}