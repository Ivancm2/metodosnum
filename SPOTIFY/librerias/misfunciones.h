#include <stdio.h>
#include <windows.h>
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int sumar(int x, int y){
    return x+y;
}
int multiplicar(int x, int y){
    return x*y;
}
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
void copiarcadena(char *origen,char *destino){
    int i=0, j=0;
    for ( i=0;*(destino+i)!='\0';i++);
    for (j=0;*(origen+j)!='\0';j++){
        *(destino+i+j)=*(origen+j);
    }
    *(origen+j+1)='\0';
}
int longitud(char *ptr){
    int i=0;
    for (i=0;*(ptr+i)!='\0';i++);
    return i;
}
int soniguales(char *cad1,char *cad2){
    int bandera=1;
    for (int i=0;*(cad1+i)!='\0';i++){
        if (*(cad1+i)==*(cad2+i)){
            continue;
        }else{
            bandera=0;
            break;
        }
    }
    return bandera;
}