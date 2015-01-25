//Without using bool.

/*#include <stdio.h>

int main()
{
 	long num;
 	int digit;
 	int digit_count[10] = {0};
 		
 	printf("Enter a number: ");
 	scanf("%ld",&num);
 	printf("Repeated digit(s): ");
 	
 	while(num > 0)
 	{
	 	digit = num%10;
		digit_count[digit]++;
		num /= 10;
    }
    
    for(digit = 0; digit < 10; digit++)
       if(digit_count[digit]>1)
    	  printf("%3d",digit);				 
}	       	 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
 	long num;
 	int digit;
 	bool digit_seen[10] = {false},digit_seen_again[10] = {false};
 	
 	printf("Enter a number: ");
 	scanf("%ld",&num);
 	printf("Repeated digit(s): ");
 	
 	while(num > 0)
 	{
	 	digit = num%10;
	 	
		if(digit_seen[digit] && !digit_seen_again[digit])
		{
		    printf("%3d",digit);
		    digit_seen_again[digit] = true;
		}
		else
           digit_seen[digit] = true;
		num /= 10;
    }
	return 0;
}
	       	  
