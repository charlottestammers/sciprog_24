#include <stdio.h>
#include <stdlib.h> //exit() function is defined in the <stdlib.c> header file

void fib(int *a, int *b); //if you want to change the values of input use pointers

int main(void)
{

	int n;

	int f0 = 0;
	int f1 = 1;

	printf("please input a positive integer n\n");
	scanf("%d",&n);
	if (n<1)
	{
		printf("n must be bigger than 1\n");
		exit(1);
	}

	printf("the fib series is:\n");
	printf("%d, %d ", f0, f1);

	int i;
	for (i = 2; i <= n; i++)
	{
		fib(&f1, &f0);
		printf("%d ", f1);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}

void fib(int *a, int *b) //void function will not return anything
{
	int next;
	next = *a + *b;

	*b = *a;
	*a = next;

}
