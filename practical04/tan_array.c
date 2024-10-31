#include <stdio.h>
#include <math.h>

int main()
{
        int N = 12;
	float tanArr[N+1];

        float a = 0.0;
        float b_deg = 60.0;

        // Calculate tan(x) where x is in the range [0,60] every 5 degrees
        int i;
	float deg;
	for ( i = 0; i < N; i++ )
        {
                deg = i*5.0;
		tanArr[i]=tan((M_PI*deg)/180.0);
		printf("tanArr[%d] = %f\n", i, tanArr[i]);
        }

	// Sum tan(a) + tan(b)
	float area = tanArr[0] + tanArr[N-1];
	printf("f(x_0)+f(x_12) = %f\n", area);

	// Sum area
	for ( i = 1; i < N; i++ )
	{
		area = area + 2*tanArr[i];
	}
	printf("f(x_0) + 2*f(x_1) + 2*f(x_2) + ... + 2*f(x_11) + f(x_12) = %f\n", area);

	// Multiply area by (b-a)/2N in radians
	float mult_rad = ( (b_deg - a)/(2*N) ) * ( M_PI/180 );
        area = mult_rad*area;
        printf("The trapezoidal result is: %f\n", area);

        printf("The real result is: %f\n", logf(2.0));

return 0;
}
