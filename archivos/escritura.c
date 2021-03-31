#include <stdio.h>

int main(){
    FILE *archivo1;
    char texto[100], *ptr, nombrearchivo[30];
    ptr=texto;
    printf("Dame el nombre de un archivo para crearlo");
    scanf("%s",nombrearchivo);
    archivo1=fopen(nombrearchivo,"w");
    printf("Dame informacion para meterle\n");
    scanf("%s",texto);
    fputs(texto,archivo1);
    fclose(archivo1);


}