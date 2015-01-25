#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int gcd(int num, int denom);

int main()
{
	int num, denom;
	int rnum, rdenom;
	int *prnum = &rnum;
	int *prdenom = &rdenom;
	
	printf("Enter a fraction (p/q): ");
	scanf("%d/%d", &num, &denom);
	reduce(num, denom, prnum, prdenom);
	printf("In lowest terms: %d/%d", rnum, rdenom);
	
	return 0;
}

int gcd(int num, int denom)
{
	int hcf;
	int smallest = num < denom ? num : denom;
	
	for(int i = 1; i <= smallest; i++)
	{
		if(num%i == 0 && denom%i == 0)
			hcf = i;
	}
	//printf("%d is hcf",hcf);
	return hcf;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int hcf = gcd(numerator, denominator);
	
	*reduced_numerator = numerator/hcf;
	*reduced_denominator = denominator/hcf;
}

