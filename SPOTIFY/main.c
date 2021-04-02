#include <stdio.h>
#include "lista.h"
#include  "misfunciones.h"
#include <windows.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char eleccion, usuario[50],linea[50],caracter;
    FILE *archivo;
    system("cls");
    gotoxy(5,0);
    printf("Bienvenido a tu Spotify");
    gotoxy(10,5);
    printf("Aqui se creara el circulo");
    gotoxy(5,8);
    printf("1. LOGIN");
    gotoxy(5,9);
    printf("2. REGISTER\n");
    eleccion=getchar();
    if (eleccion=='1'){
        system("cls");
        gotoxy(5,0);
        printf("SELECCIONASTE LA OPCION LOGIN");
        gotoxy(10,5);
        printf("CREAR CIRCULO");
        gotoxy(5,8);
        printf("DAME TU USUARIO PARA LOGGEAR");
        gotoxy(5,9);
        printf("ESCRIBE R PARA REGRESAR\n");
        scanf("%s",usuario);
        archivo=fopen("usuarios.txt","r");
        int i=0, usuarioCorrecto=0;
        char *linea;
        linea=(char *)malloc(50);
        caracter=fgetc(archivo);
        while (caracter!=EOF){
            while (caracter!='\n'){
                linea[i]=caracter;
                i++;
                caracter=fgetc(archivo);
            }
            linea[i]='\0';
            printf("%s y %s\n",linea,usuario);
            if (linea==usuario){
                usuarioCorrecto=1;
                printf("Usuario Correcto");
                break;
            }
            free(linea);
            linea=(char*)malloc(50);
            caracter=fgetc(archivo);
            i=0;
        }
        if (usuarioCorrecto==1){
            printf("Bienvenido %s",usuario);
        }
        //VALIDAR QUE EL USUARIO ESTE EN EL ARCHIVO.TXT
    }    
    return 0;
}