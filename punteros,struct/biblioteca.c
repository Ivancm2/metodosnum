#include <stdio.h>
#include <string.h>

typedef struct Books{
    char autor[30];
    char titulo[30];
    char genero[30];
    int numpags;
    int ID;
}Books;

typedef struct Persona{
    char nombre[30];
    int edad;
    char ciudad[50];
    char colorPelo[30];
}Persona;

typedef struct Bloque{
    int grosor;
    char color[50];

}Bloque;

struct Usuario{
    int id;
};
int main(){

    Books Libros[15],Libro1;
    strcpy(Libro1.autor,"Juan Perez");
    strcpy(Libro1.titulo,"Don Quijote");
    strcpy(Libro1.genero,"Suspenso");
    Libro1.numpags=150;
    Libro1.ID=123456789;
    printf("%s %s %s %d %d",Libro1.autor,Libro1.titulo,Libro1.genero,Libro1.numpags,Libro1.ID);


    Persona Ivan;
    strcpy(Ivan.nombre,"Ivan Castro");
    Ivan.edad=19;
    
    return 0;
}