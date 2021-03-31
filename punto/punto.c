#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

typedef struct Punto{
    int x;
    int y;
}Punto;
float distancia(Punto p1,Punto p2){
    int dist;
    dist=pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2);
    return sqrt(dist);
}
float m(Punto p1, Punto p2){
    return (p2.y-p1.y)/(p2.x-p1.x);
}
typedef struct Paralelogramo{
    struct Punto Punto1,Punto2,Punto3,Punto4;
}Paralelogramo;
int esCuadrado(Paralelogramo par){
    float dist1, dist2, dist3, dist4;
    dist1=distancia(par.Punto1,par.Punto2);
    dist2=distancia(par.Punto1,par.Punto3);
    dist3=distancia(par.Punto2,par.Punto4);
    if (dist1==dist2 && dist1==dist3){
        return TRUE;
    }else{
        return FALSE;
    }
}

int verCuadrante(Punto p1){
    if (p1.x>0 && p1.y>0){
        return 1;
    }else if(p1.x<0 && p1.y>0){
        return 2;
    }else if (p1.x<0 && p1.y<0){
        return 3;
    }else{
        return 4;
    }
}

int main(){
    Punto Punto1, Punto2;
    Paralelogramo par;
    par.Punto1.x=5;
    par.Punto1.y=10;
    par.Punto2.x=8;
    par.Punto2.y=10;
    par.Punto3.x=5;
    par.Punto3.y=7;
    par.Punto4.x=8;
    par.Punto4.y=7;
    /*printf("Dime las coordenadas del punto1");
    if (esCuadrado(par)){
        printf("Acabamos de crear un cuadrado");
    }else{
        printf("Esto no es un cuadrado");
    }*/
    Punto ejemplo;
    printf("Dame un valor de x,y para ver su cuadrante");
    scanf("%d %d",&ejemplo.x,&ejemplo.y);
    int cuadrante;
    cuadrante=verCuadrante(ejemplo);
    printf("Esta en el cuadrante %d",cuadrante);
    /*Punto1.x=5; Punto1.y=10;
    Punto2.x=10; Punto2.y=20;
    printf("%f",distancia(Punto1,Punto2));
    printf("(%d,%d)",Punto1.x,Punto1.y);*/
    return 0;
}