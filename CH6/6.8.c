#include <stdio.h>

int main()
{
 	int n,d,i=0,j=1;
 	
 	printf("Enter number of days in month: ");
 	scanf("%d",&n);
 	printf("Enter starting day of week (1=sun,7=sat): ");
 	scanf("%d",&d);
 	
 	
	while(d-- > 1)
	{
		printf("__ ");//two spaces,because we are using "%2d" in printing date!
		i++;
	}
 	while(n > 0)
 	{
		printf("%2d ",j++);
		i++;
		if(i%7 == 0)
			printf("\n");   
		n--;
    }
    
}	
