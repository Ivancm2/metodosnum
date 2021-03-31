#include <stdio.h>

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
int main(){
    char cadena1[100], cadena2[100];
    gets(cadena1);
    gets(cadena2);
    //copiarcadena(cadena2,cadena1);
    //printf("%s\n",cadena1);
    //printf("%d",longitud(cadena1));

    printf("%d",soniguales(cadena1,cadena2));

    return 0;
}