#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
//Estamos creando una pila dinamica con el estilo de una LISTA DINAMICA
typedef struct nodo{
    int elemento;
    struct nodo *siguiente;
}nodo;
typedef struct Pila{
    int size;
    struct nodo *tope;
}Pila;

void Inicialize(Pila *p){
    p->tope=NULL;
    p->size=0;
}
int isEmpty(Pila *p){
    if (p->size==0){
        return TRUE;
    }
    return FALSE;
}
void Push(Pila *p ,int elem){
    nodo *nuevo;
    nuevo=(nodo*)malloc(sizeof(nodo));
    nuevo->elemento=elem;

    nuevo->siguiente=p->tope;
    p->tope=nuevo;  
    
    p->size++;        
}
int Pop(Pila *p){
    int elem;
    nodo *tmp;
    if (isEmpty(p)){
        printf("No se puede hacer pop a la pila porque esta vacia");
    }else{
        elem=p->tope->elemento;
        tmp=p->tope->siguiente;
        free(p->tope);
        p->tope=tmp;
        p->size--;
        return elem;
    }
}
int Top(Pila *p){
    return p->tope->elemento;
}
int size(Pila *p){
    return p->size;
}
int main(){
    Pila *mipila;
    int valor, numero, divisor,copianum, residuo, esPalindromo=TRUE;
    mipila=(Pila *)malloc(sizeof(Pila));
    printf("Dame un numero");
    scanf("%d",&numero);
    copianum=numero;
    divisor=numero;
    while (divisor!=0){
        residuo=divisor%10;
        Push(mipila,residuo);
        divisor=divisor/10;
    }
    divisor=copianum;
    while (isEmpty(mipila)==0){
        residuo=divisor%10;
        if (residuo==Top(mipila)){
            Pop(mipila);
        }
        divisor=divisor/10;
    }


    if (isEmpty(mipila)){
        printf("Es palindromo");
    }else{
        printf("No es palindromo");
    }
    


    
    



}