#include <stdio.h>
#include <math.h>

double polynomial(double x);

int main()
{
	double x;
	
	printf("Enter a value of X: ");
	scanf("%lf",&x);
	
	printf("Value of the polynomial for x = %.2f:	 %f", x, polynomial(x));
	
}

double polynomial(double x)
{
	return 3*pow(x, 5) + 2*pow(x, 4) - 5*pow(x, 3) - x*x + 7*x - 6;
}
