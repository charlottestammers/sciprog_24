/**
Iterative and recursive versions of Euclid's algorithm to calculate the gcd of two positive integers
**/
#include <stdio.h>

int iterativeGCD(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int recursiveGCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return recursiveGCD(b, a % b);
	}

}

int main()
{
	int a;
	int b;
	int error;

	printf("please enter two positive integers\n");
	error = scanf("%d %d", &a, &b);

	if (error != 2)
	{
		printf("please enter two integers\n");
		return(1);
	}
	if (a <= 0 || b<=0)
	{
		printf("please enter positive integers\n");
		return(1);
	}

	printf("iterativeGCD(%d, %d) = %d\n", a, b, iterativeGCD(a, b));

	printf("recursiveGCD(%d, %d) = %d\n", a, b, recursiveGCD(a, b));

	return 0;
}
