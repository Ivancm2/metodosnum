#include <stdio.h>
#include <stdlib.h>
#define filas 3
#define columnas 4

int main (){

system ("cls");
    int it;

    printf ("Dame un numero maximo de iteraciones");
    scanf ("%i", &it);

    double m[filas][columnas];
    for (int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf ("Dame el coeficiente en la posicion [%i][%i]", i+1,j+1);
            scanf ("%lf",&m[i][j]);
        }
    }
    system ("cls");
    printf ("Esta es tu matriz\n\n");
    for (int i=0; i<filas; i++){
        for(int j=0; j<columnas-1; j++){
            printf("x%i %lf ",j+1, m[i][j]);

        }
        printf ("=%lf",m[i][3]);
        printf("\n");
    }
    float x1=0, y2=0, z3=0;
    for (int i=1; i<=it; i++ ){
        printf ("It.- %i \n",i);
        x1=(m[0][3]-(y2*m[0][1]+z3*m[0][2]))/m[0][0];
        y2=(m[1][3]-(x1*m[1][0]+z3*m[1][2]))/m[1][1];
        z3=(m[2][3]-(x1*m[2][0]+y2*m[2][1]))/m[2][2];
        printf ("x1[%i] = %lf \n", i, x1);
        printf ("x2[%i] = %lf \n", i, y2);
        printf ("x3[%i] = %lf \n", i, z3);
    }
    printf ("Tu vector resultante es= \n");
    printf("\n%+lf \n%+lf \n%+lf",x1,y2,z3);


}

void quitarespacios (char *destino,char *origen){

}