/* Instituto Politécnico Nacional
   Escuela Superior de Ingeniería Mecánica y Eléctrica - Zacatenco
   Ingeniería en Sistemas Automotrices
   Academia de Computación
   Materia  : Métodos Numéricos
   Grupo    : 2SV2
   Profesor : Ing. José Gerardo Romero Badillo
   Práctica : 02 - Solución de Funciones, método de Bisección
   Fecha    : 02-marzo-2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
        double y;
        y = 7 * pow(x, 7) - 4 * pow(x, 3) + 2 *pow (x,1) -0.5;
        return y;
}

int main()
{
        system ("cls");         
        double a, b, c, presicion;
        int i,max;
        printf("Ingrese el intervalo [a,b] ");
        scanf("%lf %lf", &a, &b);
        printf("[a,b] = [%lf,%lf]\n", a, b);
        printf("Ingresa la presicion ");
        scanf("%lf", &presicion);
         

        for (i = 1; i <= 100; i++) {
                c = (a + b) / 2.0;
        //      printf("El valor de y en c es f(c) = %lf\n", f(c));
                if (f(c)*f(a) > 0.0)
                        a = c;
                else
                        b = c;
                if (fabs(f(c)) < presicion)
                        break;
                printf("it. %4i -> [a,b] = [%16.14lf,%16.14lf], f(c)=%16.14lf\n", i, a, b, f(c));
                }

        return 0;
}

