#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double arctanh1(double x, double delta);

double arctanh2(double x);

int main(void)
{

	double delta;
	printf("please enter a positive real number delta\n");
	scanf("%lf", &delta);

	if (delta < 0)
	{
		printf("delta was negative\n");
		exit(1);
	}

    double x = -0.9;
    int length = 1000;
    double tan1[length];
    double tan2[length];
    int i = 0;

    while (x <= 0.9 && i < length)
    {
        i = 0;
	tan1[i] = arctanh1(x, delta);
        tan2[i] = arctanh2(x);
        printf("The difference at x = %.10lf is %.10lf\n", x, fabs(tan1[i] - tan2[i]));
        x += 0.01;
        i++;
    }

    return 0;
}

double arctanh1(double x, double delta)
{
    double sum = 0.0;
    double elem, val;
    int n = 0;

    do
    {
	val = 2 * n + 1;
        elem = pow(x, val) / val;
        sum += elem;
        n++;
    } while (fabs(elem) >= delta);

    return sum;
}

double arctanh2(double x)
{
    return 0.5 * (log(1 + x) - log(1 - x));
}

