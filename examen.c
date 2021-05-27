#include <stdio.h>
#include <Windows.h>
int main(){
    int primer_alumno=31, cant_examenes=4, cant_reactivos=3, cant_alumnos=30,primer_reactivo=20, numalumno, primer_reactivo_alumno=0;
    printf("Dame tu numero de alumno\n"); scanf("%d", &numalumno);
    if (numalumno<primer_alumno || numalumno>primer_alumno+cant_alumnos-1){
        printf("El numero de alumno que me diste es incorrecto\n");
    }else{
        printf("Te tocan los reactivos: ");
        for (int alumno=primer_alumno, j=0, examen=1;alumno<primer_alumno+cant_alumnos;alumno++,examen++){
            for (int i=0;i<cant_reactivos;i++,j++){
                if (alumno==numalumno){
                    if (i==0) primer_reactivo_alumno=primer_reactivo+j;
                    printf(" %d",primer_reactivo+j);
                }
            }
            if (examen==cant_examenes){
                examen=0;j=0;
            }
        }
    }
    printf("\nDame el primer reactivo que te toco\n"); scanf("%d",&primer_reactivo);
    primer_reactivo==primer_reactivo_alumno ? printf("Eres el alumno %d", numalumno) : printf("Este no es tu primer reactivo");
}