#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
int main(){


    int numero, c;
    char car;
    //printf("Dame una vocal");
    //scanf("%c",&car);
    /*if (car=='a'){
        printf("la vocal a....\n");
    }else if (car=='e'){
        printf("la vocal e....\n");
    }else if (car=='i'){
        printf("la vocal i....\n");
    }else if (car=='o'){
        printf("la vocal o....\n");
    }else if (car=='u'){
        printf("la vocal u....\n");
    }else{
        printf("no me diste una vocal");
    }*/
    int d;
    c=5;
    d=(c==5);
    printf("%d",d);
    Sleep(5000);
    while(1){ //c<5 retorna o un 1 o un 0
        system("cls");
        printf("Bienvenido al restaurante: Mariscos el Guero");
        printf("Dame la opción a elegir\n");
        printf("1. Entrar a las bebidas\n");
        printf("2.Entrar a las comidas\n");
        printf("3. Entrar a los postres\n");
        printf("4. Visualizar nuestras sucursales\n");
        printf("5. Numeros de contacto\n");
        printf("Presiona la tecla 6 para salir\n");
        car=getch();
        if (car!='6'){
            switch(car){ //que valores tiene numero?
                case '1':
                    printf("entraste a las bebidas");
                    Sleep(2000);
                    break;
                case '2':
                    system("cls");
                    printf("entraste a las comidas");
                    
                    Sleep(2000);
                    break;
                case '3':
                    printf("entraste a las postres");
                    Sleep(2000);
                    break;
                case '4':
                    printf("Nuestras sucursales son");
                    Sleep(2000);
                    break;
                case '5':
                    printf("Contactanos 5437584");
                    Sleep(2000);
                    break;
            }
        }else if (car=='6'){
            printf("Saliste exitosamente");
            Sleep(2000);
            break;
        }
        
    }
    
    numero=5; //a la variable numero le asignamos el valor de 5
    //==, !=, >, <, <=, >=
    //1 es true y 0 es false


    return 0;
}