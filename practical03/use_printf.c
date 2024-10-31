#include <stdio.h>

int main()
{
	int int1 = 10;
	int int2 = 200;
	float float1 = 1.11;
	float float2 = 2.2222;

	// default format
	printf("Two ints %d %d and two floats %f %f\n", int1, int2,float1, float2);

	// floats with 4 decimal places
	printf("Two ints %d %d and two floats %.4f %.4f\n", int1, int2,float1, float2);

	return 0;
}
