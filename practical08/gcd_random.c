#include "gcd_random.h"

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
