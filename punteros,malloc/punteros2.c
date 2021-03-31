#include <stdio.h>

void swap(int *p1,int  *p2){
    int aux;
    aux=*p1;
    *p1=*p2;
    *p2=aux;
}
void factorial(int num,int *f){
    int i;
    *f=1;
    for (i=1;i<=num;i++){
        *f=*f*i;
    }
    printf("%d",*f);
}
int longitud(char *pt){
    int i;
    for (i=0;*pt!='\0';i++, pt++);
    return i;
}
int cadenapalindromo(char *p){
    char reversa[100],*puntero;
    puntero=reversa;
    int i;
    for (i=longitud(p);i>0;i--){

    }
}

int main(){
    char cadena[50],*pt;
    gets(cadena);
    
    //HACER UNA FUNCION QUE NOS DIGA SI UNA CADENA ES PALINDROMA
    return 0;
}