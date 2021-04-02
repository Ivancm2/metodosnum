#include <stdio.h>
#include "lista.h"
#include  "misfunciones.h"
#include <windows.h>
#include <math.h>
#include <stdlib.h>
void login(){
    FILE *archivo;
    char usuario[50],caracter, *linea;
    int i=0, usuarioCorrecto=0;
    while (usuarioCorrecto==0){
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
        linea=(char *)malloc(50);
        caracter=fgetc(archivo);
        while (caracter!=EOF){
            while (caracter!='\n'){
                linea[i]=caracter;
                i++;
                caracter=fgetc(archivo);
            }
            linea[i]='\0';
            if (strcmp(linea,usuario)==0){
                usuarioCorrecto=1;
                break;
            }
            free(linea);
            linea=(char*)malloc(50);
            caracter=fgetc(archivo);
            i=0;
            }
        if (usuarioCorrecto==1){
            printf("Bienvenido %s",usuario);
        }else{
            printf("Usuario incorrecto, presiona cualquier tecla para continuar\n");
            while (getchar()!='\n');
            getchar();
        }
    }
}
void registrar(){
    
}
int main(){
    char eleccion;
    
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
    while (getchar()!='\n');
    
    if (eleccion=='1'){
        login();
        //VALIDAR QUE EL USUARIO ESTE EN EL ARCHIVO.TXT
    }else if (eleccion=='2'){
        registrar();
    } 
    return 0;
}