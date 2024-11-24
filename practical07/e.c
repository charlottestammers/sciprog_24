#include <math.h>
#include <stdio.h>
#include <stdlib.h> //malloc() declared here

int factorial(int x);

int main(void)
{
	int order;
	printf("please enter the order you wish to use:\n");
	scanf("%d", &order);

	double *terms;
	terms = (double *)malloc(order * sizeof(double)); //dynamically allocates memory at runtime ( memory allocation)

	int i;
	for (i = 0; i < order; i++)
	{
		terms[i] = 1.0 / (double)factorial(i + 1);
	}

	double e;
	e = 1;
	for (i = 0; i < order; i++)
	{
		e = e + terms[i];
	}

	printf("e is estimated as %.10lf with difference %e\n", e, e - exp(1.0));

	free(terms); //free the allocated memory
	return 0;
}

int factorial(int x)
{
	if (x < 0)
	{
		printf("you must use a positive number\n");
		return(-1);
	}

	else if (x == 0)
	{
		return(1);
	}

	else
	{
		return (x * factorial(x - 1));
	}
}
