#include <stdio.h>

long power(long x, long n)
{
/*	if(n == 0)
		return 1;
	else if( n%2 != 0)
		return x * power( x, (n-1) );
	else
	{
		x = power(x, n/2);
		return x * x;
	}*/
 	return n == 0 ? 1 : n%2 != 0 ? x*power( x, (n-1) ) : (x = power(x, n/2), x*x);
}

int main()
{
	long x, n;
	printf("Enter the value of x and n (x^n): ");
	scanf("%ld^%ld", &x, &n);
	
	printf("Value of %ld raised to the power %ld is: %ld", x, n, power(x, n));
	return 0;
}
