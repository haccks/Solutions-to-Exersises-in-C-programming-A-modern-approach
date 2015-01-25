#include <stdio.h>

int main()
{
 	int m,n,gcd,r,nom,dnom;
 	
 	printf("Enter a fraction: ");
 	scanf("%d/%d",&m,&n);
 	
 	nom = m;
 	dnom = n;
 	
 	printf("In lowest terms: ");
 	
 	while(n != 0)
 	{
	 	r = m%n;
		m = n;
		n = r;
    }
	gcd = m;	 	
 	printf("%d/%d",nom/gcd,dnom/gcd);
 	
}
