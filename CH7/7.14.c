#include <stdio.h>
#include <math.h>

int main()
{
 	int x;
 	double y = 1,r,avg,error;
 	
 	printf("Enter a positive number: ");
 	scanf("%d",&x);
 	
 	do
 	{
	 	r = (float)x/y;
		avg = (float)(y + r)/2;
		error = fabs(avg - y);
		y = avg;
    }while(error > 0.00001);
    
	printf("Square root: %.5f",y);
	
}	 		
