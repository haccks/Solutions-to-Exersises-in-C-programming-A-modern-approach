#include <stdio.h>
#include <stdbool.h>

int main()
{
 	long num;
 	int digit;
 	int digit_count[10] = {0};
 	
 	printf("Enter a number: ");
 	scanf("%ld",&num);
 	printf("Digits:      ");
 	for(digit = 0; digit < 10; digit++)
 	   printf("%3d",digit); 
 	
 	while(num > 0)
 	{
	 	digit = num%10;
		digit_count[digit]++;
		num /= 10;
    }
    
    printf("\nOccurences:  "); 
    for(digit = 0; digit < 10; digit++)
    	printf("%3d",digit_count[digit]);				 
}	       	  
