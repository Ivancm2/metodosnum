#include <stdio.h>
#include "lista.h"
#include  "misfunciones.h"



int main(){

    system("cls");
    lista *canciones;
    canciones=(lista*)malloc(sizeof(lista));
    Initialize(canciones);
        for (int i=0;i<50;i=i+2){
        
        gotoxy(i,0);
        printf(GRN"BIENVENIDO A TU SPOTIFY");
        gotoxy(0,15);
        printf(GRN"DAME TU NOMBRE PARA EMPEZAR TU SPOTIFY");
        Sleep(600);
        system("cls");
        gotoxy(10,10);
        printf("*");
        gotoxy(12,11);
        printf("*");
        gotoxy(14,12);
        printf("*");
        
        
    }
  
    return 0;
}