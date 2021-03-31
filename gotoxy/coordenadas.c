#include <stdio.h>  
#include <windows.h>  
#include <stdlib.h>
#include <string.h>
#include "misfunciones.h"
void rojo(){
    printf("\033[0;31m");
}
int main(){  
    system("cls");
    rojo();
    for (int y=0; y<20; y++){
        gotoxy(0,y);
        printf("*");
         gotoxy(51,y);
        printf("*");
    }
    for (int x=0; x<=51; x++){
        gotoxy(x,0);
        printf("*");
         gotoxy(x,20);
        printf("*");
    }
    
    int l=strlen("BIENVENIDO AL JUEGO");
    int posicioninicial=(50-l);
    gotoxy(posicioninicial/2,1);
    printf("BIENVENIDO AL JUEGO");
    gotoxy(0,60);
    Sleep(5000);
    system("cls");
    for (int y=0; y<20; y++){
        gotoxy(1,y);
        printf("*");
         gotoxy(52,y);
        printf("*");
    }
    for (int x=1; x<=52; x++){
        gotoxy(x,0);
        printf("*");
         gotoxy(x,20);
        printf("*");
    }
    return 0;  

}  