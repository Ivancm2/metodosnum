//Un numero de armstrong es aquel que la suma de los digitos elevados a la potencia de la cantidad de
//digitos es igual al numero

#include <stdio.h>
#include <math.h>

float pow(float x, float y){
    exp(y*log(x));
}
int main(){
    float elevado;
    int digito, numero, divisor, cant=0;
    float suma=0;
    printf("Dame un numero");
    scanf("%d",&numero);
    divisor=numero;
    while (divisor!=0){
        divisor=divisor/10;
        cant++;
    }
    //153=1^3+5^3+3^3
    divisor=numero;
    while (divisor!=0){
        digito=divisor%10;
        elevado=pow(digito,cant);
        printf("%d    ", elevado);
        suma+=elevado;
        divisor=divisor/10;
    }
    printf("\n\n%d",suma);
    if (suma==numero){
        printf("es armstrong");
    }else{
        printf("no es armstrong");
    }
    

}
