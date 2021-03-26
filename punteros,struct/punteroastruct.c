#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Alumno{
    int edad;
    char nombre[50];
}Alumno;
int main(){
    //Crear memoria al puntero con malloc
    int *ptr2,*arreglo, cantidad_arreglo=10;
    ptr2=(int *)malloc(sizeof(int));
    arreglo=(int*)malloc(sizeof(int)*cantidad_arreglo);
    
    free(ptr2);
    free(arreglo);

    //Cuando teniamos un Alumno normal, sin punteros
    Alumno juan;
    juan.edad=15;
    strcpy(juan.nombre,"Juanito");
    
    //Crear un alumno usando malloc
    Alumno *p;
    p=(struct Alumno *)malloc(sizeof(Alumno)); //(struct Alumno*)malloc(54)
    (*p).edad=15;
    //Significa lo mismo que
    p->edad=15; //Al contenido de p en la posicion edad, asignale 15
    strcpy(p->nombre,"Pedro");
    printf("La edad es %d y su nombre es %s",p->edad,p->nombre);
    Alumno *p2;
    p2=(struct Alumno *)malloc(sizeof(Alumno));

}