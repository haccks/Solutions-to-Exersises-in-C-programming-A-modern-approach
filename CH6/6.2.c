#include <stdio.h>

int main()
{
 	int m,n,r;
 	
 	printf("Enter two integers: ");
 	scanf("%d %d",&m,&n);
 	printf("Greatest Common divisor: ");
 	
    while(n != 0)
	{
	 	r = m%n;
		m = n;
		n = r;
    }	 		 
 	if(n == 0)
 		 printf("%d",m);
    return 0;
}
