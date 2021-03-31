#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

int esPalindromo(int num);
void imprimir_menu();
float distancia();
float funcion1(float x);
void Fibonacci(int n);


int main(){


    
}
void Fibonacci(int n){
    int primero=0,segundo=1, suma;
    for (int i=1;i<=n;i++){
        suma=primero+segundo;
        printf("%d ",primero);
        primero=segundo;
        segundo=suma;
    }
   
}
int esPalindromo(int num){
    int reverse=0, divisor, residuo;
    divisor=num;
    while(divisor!=0){
        residuo=divisor%10;
        reverse=reverse*10+residuo;
        divisor=divisor/10;
    }
    if (reverse==num){
        return 1;
    }else{
        return 0;
    }

}
void imprimir_menu(){
    printf("Dame los valores a elegir\n");
    printf("1. Para el algoritmo de palindromo\n");
    printf("2. Para el algoritmo de Armstrong\n");
}
float distancia(){
    int num1,num2, resultado;
    printf("Dame dos numeros ");
    scanf("%d %d", &num1, &num2);
    resultado=pow(num1,2)+pow(num2,2);
    return sqrt(resultado);
}
float funcion1(float x){
    return pow(x,2)-2*x+1;
}