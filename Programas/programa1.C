/*  Instituto Politécnico Nacional
    Escuela Superior de Ingeniería Mecánica y Eléctrica - Zacatenco
    Ingeniería en Sistemas Automotrices
    Academia de Computación.
    Materia  : Métodos Numéricos.
    Grupo    : 2SV2.
    Profesor : Ing. José Gerardo Romero Badillo.
    Práctica : 01 - Raíces de Ecuaciones - Método Gráfico.
    Fecha    : 24-febrero-2021.
*/
/*gcc nombredel programa.c
despues poner "a"
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double f(double x)
{
	double y;
	y = x - pow(237.0, 1.0 / 7.0);
	return y;
}

int main()
{
    system ("cls");
	double x, y;
	                   
	for (x = 2.1830; x <= 2.1840; x = x + 0.00001)
		printf("(%lf,%+lf)\n", x, f(x));
	return 0;
}
