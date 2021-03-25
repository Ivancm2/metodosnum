#include <stdio.h>

int lineal(int *ptr, int tamanio, int numabuscar){
    for (int i=0;i<tamanio;i++){
        if (numabuscar==*(ptr+i)){
            return i;
        }
    }
    return -1;
}
int binaria(int arreglo[],int tamano, int numabuscar){
    int izquierda=0, derecha=tamano-1, medio;
    while (izquierda<=derecha){
        medio=(izquierda+derecha)/2;
        if (arreglo[medio]==numabuscar){
            return medio;
        }
        if (numabuscar>arreglo[medio]){
            izquierda=medio+1;
        }
        if (numabuscar<arreglo[medio]){
            derecha=medio-1;
        }
    }
    return -1;
}

int main(){
    int arreglo[10]={1,-10,8,7,6,4,5,9,11,15}, num, *p;
    int tamano=sizeof(arreglo)/sizeof(int), posicion;
    p=arreglo;
    int ordenado[10]={1,2,5,7,9,11,15,18,20,21};
    printf("Dame un numero a buscar");
    scanf("%d",&num);
    posicion=lineal(p,tamano,num);
    printf("Esta en la posicion %d", posicion );
    posicion=binaria(ordenado,tamano,num);
    printf("Esta en la posicion %d", posicion );
    

}