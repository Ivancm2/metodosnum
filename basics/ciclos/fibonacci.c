#include <stdio.h>
int main(){
    long long int primer_numero=0, segundo_numero=1, cant=0, suma=0; //Declaramos nuestras variables iniciales
    printf("dame una n"); //Pedimos un numero
    while (cant<=0){ //Mientras el numero sea invalido, vamos a pedir un numero valido
        scanf("%d",&cant);
        if (cant<=0){
            printf("Tienes que darme un numero entero positivo\n");
        }
    }
    //Si cant==1, nos pidieron el primer numero (0)
    if (cant==1){
        printf("0");
    }
    //Si cant==1, nos pidieron el primer y segundo numero (0 y 1)
    if (cant==2){
        printf("1");
    }
    //Si cant>1, haremos un ciclo iterando sobre la cantidad de numeros
    for (int i=2;i<cant;i++){
        suma=primer_numero+segundo_numero; //La suma sera el primero mas el segundo
        printf("%d ",suma);
        primer_numero=segundo_numero; //Nuestro primer numero sera ahora el segundo
        segundo_numero=suma; //Nuestro segundo sera la suma total
        //Volvemos a empezar el ciclo
    }
}