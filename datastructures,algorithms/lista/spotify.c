#include <stdio.h>
#include "lista.h"
#include "../../misfunciones.h"

int main(){
    system("cls");
    lista *canciones;
    canciones=(lista*)malloc(sizeof(lista));
    Initialize(canciones);
    for (int i=0;i<50;i=i+2){
        gotoxy(i,0);
        printf("BIENVENIDO A TU SPOTIFY JUANITO");
        gotoxy(0,15);
        printf("DAME TU NOMBRE PARA EMPEZAR TU SPOTIFY");
        Sleep(100);
        system("cls");
        
    }
    

    



    gotoxy(0,30);
    printf(".");
    getchar();
    return 0;
}