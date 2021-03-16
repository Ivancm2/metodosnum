/* Instituto Politécnico Nacional
   Escuela Superior de Ingeniería Mecánica y Eléctrica - Zacatenco
   Ingeniería en Sistemas Automotrices
   Academia de Computación
   Materia  : Métodos Numéricos
   Grupo    : 2SV2
   Profesor : Ing. José Gerardo Romero Badillo
   Práctica : 02 - Solución de Funciones, método de Bisección
   Fecha    : 26-febrero-2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
        double y;
        y = 4 * pow(x, 7) - 5 * pow(x, 2) + 1.5;
        return y;
}

int main()
{
        system ("cls");         
        double a, b, c, error;
        int i;
        printf("Ingrese el intervalo [a,b] ");
        scanf("%lf %lf", &a, &b);
        printf("[a,b] = [%lf,%lf]\n", a, b);
        printf("Ingresa el error permitido ");
        scanf("%lf", &error);

        for (i = 1; i <= 100; i++) {
                c = (a + b) / 2.0;
        //      printf("El valor de y en c es f(c) = %lf\n", f(c));
                if (f(c)*f(a) > 0.0)
                        a = c;
                else
                        b = c;
                if (fabs(f(c)) < error)
                        break;
                printf("it. %4i -> [a,b] = [%16.14lf,%16.14lf], f(c)=%16.14lf\n", i, a, b, f(c));
                }

        return 0;
}

