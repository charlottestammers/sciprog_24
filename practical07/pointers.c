#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(void)
{
	int size = 5;
	int *array;

	array = allocatearray(size);

	fillwithones(array, size);

	printarray(array, size);

	freepointer(array);

	return 0;
}

int *allocatearray(int n)
{
	int *temp;
	temp = (int *)malloc(n * sizeof(int));
	return temp;
}

void fillwithones(int *p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		p[i] = 1;
		//*(p + i) = 1; pointer arithmetic
	}
}

void printarray(int *p, int n)
{
	int i;
	printf("\n");
	for (i = 1; i < n; i++)
	{
		printf("%d\n", p[i]);
	}
	printf("\n");
}

void freepointer(int *p)
{
	free(p);
}
