#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double f(double x)
{
	double y;
	y = 5 * pow(x,5) - 2 * pow(x,2) + 6;
	return y;
}

int main()
{
    system ("cls");
	double x, y;
	                   
	for (x = -0.964; x <= -0.963; x = x +0.0001)
		printf("(%lf,%+lf)\n", x, f(x));
	return 0;
}

