#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Perro{
    int peso;
    int *edad;
    char *raza;
    char *nombre;
}Perro;
Perro crearPerro1(int peso, char *edad, char *raza, char *nombre){
    Perro creado;
    //Creamos las memorias y se las asignamos a los punteros
    creado.edad=(int *)malloc(sizeof(int));
    creado.raza=(char*)malloc(sizeof(char)*30);
    creado.nombre=(char*)malloc(sizeof(char)*30);

    creado.peso=peso;

    *creado.edad=*edad;

    strcpy(creado.raza,raza);
    strcpy(creado.nombre,nombre);
    return creado;
}
Perro *crearPerro2(int peso, int edad, char *raza, char *nombre){
    Perro *perrito;
    perrito=(Perro*)malloc(sizeof(Perro));
    perrito->peso=peso;
    perrito->edad=(int*)malloc(sizeof(int));
    *perrito->edad=edad;
    perrito->raza=(char*)malloc(sizeof(char)*30);
    strcpy(perrito->raza,raza);
    perrito->nombre=(char*)malloc(sizeof(char)*30);
    strcpy(perrito->nombre,*nombre);
    return perrito;
}
int main(){
    Perro *p;
    p=(struct Perro *)malloc(sizeof(Perro));
    //Si le queremos asignar un valor al peso del perro
    (*p).peso=50;
    p->peso=50;

    p->edad=(int*)malloc(sizeof(int));
    *p->edad=10;
    printf("%d\n",*p->edad);
    
    p->nombre=(char*)malloc(sizeof(char)*20);
    strcpy(p->nombre,"Balto");
    printf("%s\n",p->nombre);

    free(p->raza);
    free(p->edad);
    free(p->nombre);
    free(p);

    Perro *miperro;
    miperro=crearPerro2(20,50,"Snouser","Balto");


    
}