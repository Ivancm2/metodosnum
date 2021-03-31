#include <stdio.h>
#include <stdlib.h>



int main(){
    //Programa que me pide un numero de pesos, me da peso por peso y me imprime como resultado
    //el promedio de todos los pesos dados
    //EL programa aparte tiene la opcion de que yo le puedo meter las veces que yo quiera la cant de est
    // para volver a correrlo y explicar como funciona malloc correctamente
    long int num, seleccion=1;
    float sum=0, avg, *pesos;
    while (seleccion==1){ //Mientras la opcion que nos de sea 1, pedimos un numero de estudiantes
        printf("Dame un numero de estudiantes\n");
        scanf("%ld",&num);
        pesos=(float *)malloc(num*sizeof(float));
        /*Le asigno como direccion al puntero pesos la primera direccion de las creadas por malloc
        Malloc recibe una cant de bytes, por eso introducimos num*sizeof(float) para que asigne
        una cantidad num de memorias, luego hace un cast a float con (float * ) para decirle al puntero
        pesos que itere sobre punteros (osea que cuando ponemos pesos++, vaya por cada flotante :)
        */
        if (pesos==NULL){ //Si pesos sigue teniendo como direccion NULL, no asigno la memoria correctamente
            printf("No se le pudo asignar memoria");
            exit(0);
        }
        printf("Dame el peso de los estudiantes");//Si pudo asignar memoria
        for (int i=0;i<num;i++){ //Pedimos cada peso y lo guardamos en la direccion
            scanf("%f",pesos+i); 
        }
        for (int i=0;i<num;i++){ //Creamos la suma para hacer los promedios
            sum=sum+*(pesos+i); //Tiene que sumar LOS CONTENIDOS de lo que apunta, por eso el *
        }
        avg=sum/num; //Calculamos el promedio
        free(pesos);//IMPORTANTE! LIBERAMOS LA MEMORIA
        printf("El promedio de los pesos es %f", avg); //Imprimimos los pesos
        printf("\nQuieres darme otra cantidad de estudiantes?\n1-Si, Otra tecla para salir"); 
        scanf("%d",&seleccion);
        avg=0; //Reiniciamos las variables por si quieren hacer el programa otra vez
        sum=0;
    }
    /*Aqui ejemplificamos que no solo podemos crear con malloc arreglos de variables
    podemos crear variables sencillas!
    
    Ojo: no creamos una variable como tal, lo que hacemos es que creamos una direccion de memoria en el 
    HEAP de nuestra memoria ram y tenemos un 
    puntero que guarda como valor (apunta) a la direccion de memoria que creamos con malloc :)
    */
    pesos=(float *)malloc(sizeof(float));
    scanf("%f",pesos);
    printf("El numero es %f", *pesos);
    free(pesos);
    return 0;



}