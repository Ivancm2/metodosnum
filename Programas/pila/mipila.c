#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 50
int tamano=-1;
int pila[MAX];

int isEmpty(){
   return (tamano==-1) ? TRUE : FALSE;
}
void push(int numero){
    if (tamano==50){
        printf("No se puede meter a la pila, esta llena");
    }else{
        tamano++;
        pila[tamano]=numero;
        
    }
}
int pop(){
    int retorno;
    if (isEmpty()){
        printf("No se puede hacer pop porque esta vacia la pila");
    }else{
        retorno=pila[tamano];
        tamano--;
    }
    return retorno;
}
int top(){
    return pila[tamano];
}
int size(){
    return tamano+1;
}


int main(){
    int pila[50];
    int numero;
    push(35);
    printf("%d\n",top());
    push(93);
    printf("%d\n",top());
    numero=pop();
    printf("%d",top());
}