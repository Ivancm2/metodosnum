#include <stdio.h>  
#include <windows.h>  
#include <stdlib.h>

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
void rojo(){
    printf("\033[0;31m");
}
int main(){  
    system("cls");
    gotoxy(15,10);  
    printf("*");
    gotoxy(20,0);
    rojo();
    printf("BIENVENIDO AL JUEGO");
    return 0;  

}  