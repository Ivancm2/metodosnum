#include <stdio.h>


int main(){
    FILE *archivolectura, *archivoescritura;
    char nombrelectura[30],nombreescritura[30];
    char caracter;
    char groserias[10][30];
    printf ("Dame el nombre de un archivo para leer lo que tiene\n");
    scanf("%s",nombrelectura);
    printf ("Dame el nombre de un archivo para escribir lo que tiene el primero con asterisco en vez de a\n");
    scanf("%s",nombreescritura);
    archivolectura=fopen(nombrelectura,"r");
    archivoescritura=fopen(nombreescritura,"w");
    while (caracter!=EOF){
        caracter=fgetc(archivolectura);
        if (caracter=='a'){
            fputc('*',archivoescritura);
        }else{
            fputc(caracter,archivoescritura);
        }
    }
    


    return 0;
}