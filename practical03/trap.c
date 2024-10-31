#include <stdio.h>
#include <math.h>

int main()
{
	int N = 12;
	float a = 0;
	float b_deg = 60;

	// Convert b=pi/3 to radians
	float b_rad;
	b_rad = (M_PI * b_deg)/180;
	printf("The value of b in radians is: %f\n", b_rad);

	// Sum tan(a) + tan(b) where a and b are in radians
	float sum = tan(a) + tan(b_rad);
	printf("f(x_0)+f(x_12) = %f\n", sum);

	int i;
	for ( i = 5; i < 60; i = i + 5 )
	{
		sum += 2*tan(i*M_PI/180);
	}

	printf("2*f(x_1) + 2*f(x_2) + ... + 2*f(x_11) = %f\n", sum);

	sum = ( (b_rad - a)/ (2*N) )*sum;
	printf("The trapezoidal result is: %f\n", sum);

	printf("The real result is: %f\n", logf(2));

	float abs_diff = fabs(sum - logf(2));
	float rel_diff = fabs(1 - sum/logf(2));
	printf("abs_diff = %f\n rel_diff = %f\n", abs_diff, rel_diff);

return 0;
}
