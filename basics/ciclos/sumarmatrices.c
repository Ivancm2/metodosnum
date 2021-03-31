#include <stdio.h>
#include <conio.h>

int main(){
    //Hacer un algoritmo que sume dos matrices 4x4
    int matriz1[4][4],matriz2[4][4],matriz_suma[4][4];
    printf("Dame la primer matriz");
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            scanf("%d",&matriz1[i][j]);
        }
    }
    printf("Dame la segunda matriz");
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            scanf("%d",&matriz2[i][j]);
        }
    }
    //SUMAMOS LOS VALORES
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            matriz_suma[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
    printf("Imprimiendo la matriz\n");
    for (int i=0;i<4;i++){
        printf("| ");
        for (int j=0;j<4;j++){
            printf("%d |", matriz_suma[i][j]);
        }
        printf("\n");
    }

}