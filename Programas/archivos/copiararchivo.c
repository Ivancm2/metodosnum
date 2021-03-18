#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    FILE *origen,*destino;
    char direccion[50], nueva[50],contenido[50];
    printf("Dame la direccion del archivo que quieres copiar\n");
    gets(direccion);
    origen=fopen(direccion,"rb");
    printf("Dame la direccion del archivo con su nombre donde quieres copiarlo\n");
    gets(nueva);
    destino=fopen(nueva,"wb");
    //fwrite( cadena, sizeof(char), sizeof(cadena), fp );
    //fread(void *ptr, size_t size, size_t nobj, FILE *stream);
    int i=1;
    while (feof(origen)==0){
        printf("Copiando archivo parte %d de ?\n",i);
        fread(contenido,sizeof(char),sizeof(contenido),origen);
        fwrite(contenido,sizeof(char),sizeof(contenido),destino);
        i++;
    }
    fclose(origen);
    fclose(destino);
    return 0;
}