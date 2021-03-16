/* Instituto Politécnico Nacional
   Escuela Superior de Ingeniería Mecánica y Eléctrica - Zacatenco
   Ingeniería en Sistemas Automotrices
   Academia de Computación
   Materia  : Métodos Numéricos
   Grupo    : 2SV2
   Profesor : Ing. José Gerardo Romero Badillo
   Práctica : 03 - Solución de Funciones, método de la Tangente
   Fecha    : 08-marzo-2021
*/

#include <stdio.h>
#include <math.h>

double f(double x)
{
  return 2 * pow(x, 3) + 3 * pow(x, 2) - 0.5;
}

double f1(double x)
{
    return 6 * pow(x, 2) + 6 * x;
}

int main()
{
    double x0, x1, precision;
    int i, max_iter;

    printf("Ingresa x0 ");
    scanf("%lf", &x0);

    printf("Ingresa la precision ");
    scanf("%lf", &precision);

    printf("Ingresa el maximo de iteraciones ");
    scanf("%i", &max_iter);

    for (i = 1; i <= 100; i++) {
        if (f1(x0) == 0) {
           printf("Division por cero!\n");
           break;
           }
        x1 = x0 - f(x0)/f1(x0);
        printf("x%i = %lf\n", i, x1);
        if(fabs(x1-x0) < precision || i >= max_iter)
            break;
        x0 = x1;
        }
    return 0;
}