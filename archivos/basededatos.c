#include <stdio.h>

int main(){
    FILE *archivo;
    char datos[100];
    printf("Dame tu mandado para meterlo a mi base de datos\n");
    gets(datos);
    archivo=fopen("mandado.txt","a");
    fputs(datos, archivo);
    fputc('\n',archivo);
    fclose(archivo);




    return 0;
}