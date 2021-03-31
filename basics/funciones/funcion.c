#include <stdio.h>

int funcioncuadratica(int a, int b, int c, int x){
    int resultado= a*(x^2)+b*x+c;
    return resultado;
}

int valorabsoluto(double x){
    if (x>0){
        return x;
    }else if(x<0){
        return -1*x;
    }
}
int main(){
    for (int i=1;i<=10;i=i+1){
        printf("%d\n", funcioncuadratica(6,4,5,i));

    }

    for (int i=0;i<20;i++){
        printf("%d",i);
        if (i==10){
            break;
        }
    }

    return 0;

}