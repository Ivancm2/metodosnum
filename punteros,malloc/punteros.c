#include <stdio.h>
#include <string.h>

typedef struct Apellido{
    char pat[30];
    char mat[30];
}Apellido;
typedef struct fisico{
    char colorpiel[50];
    char colorcabello[50];
}fisico;
typedef struct Persona{
    float peso, altura;
    char nombre[20];
    Apellido ap;
    fisico fis;
    int *tallazapato;
    char *comidafavorita;
    
}Persona;


int main(){
    Persona ejemplo;
    Persona *punteroapersona;
    punteroapersona=&ejemplo;
    printf("%d",&ejemplo);
    printf("\n%d",punteroapersona);
    printf("\n%d",sizeof(struct Persona));
    ejemplo.peso=58.5;
    ejemplo.altura=1.68;
    strcpy(ejemplo.nombre,"Juan");
    strcpy(ejemplo.ap.pat, "Martinez");
    strcpy(ejemplo.ap.mat,"Lopez");
    
    float *ptr, num;
    ptr=&num;
    *ptr=5;
    printf("%f\n",num);


    Persona juanito, *ptrajuanito;
    juanito.peso=61.3;
    ptrajuanito=&juanito;
    printf("%f\n",juanito.peso);
    (*ptrajuanito).peso=81.5;
    printf("%f\n",juanito.peso);
    strcpy((*ptrajuanito).nombre,"Juan");
    printf("%s\n",juanito.nombre);

    ptrajuanito->peso=90; //(*ptrajuanito).peso=90;
    printf("Su peso es %f",juanito.peso);
    strcpy(ptrajuanito->ap.pat,"Castro");
    printf("Su apellido es %s",juanito.ap.pat);
    strcpy(juanito.fis.colorcabello,"Gris");
    printf("Su color de cabello es %s",juanito.fis.colorcabello);

    





    Persona pepe;
    int numero;
    pepe.tallazapato= &numero;
    numero=8;
    *pepe.tallazapato=10;
    printf("\n%d",&numero);
    printf("\nPrueba %d",pepe.tallazapato);

    /*int *a;
    float b; ERROR NO SE PUEDE HACER PUNTEROS A OTROS TIPOS DE DATO
    a=&b;*/
    char comida[50];
    pepe.comidafavorita=comida; //comida==&comida[0]


    strcpy(pepe.comidafavorita,"tamales");
    printf("%s",pepe.comidafavorita);
    

}