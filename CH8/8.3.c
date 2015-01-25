#include <stdio.h>
#include <stdbool.h>

int main()
{
 	long num;
 	int digit;
 	bool digit_seen[10] = {false},digit_seen_again[10] = {false};
 	
 	printf("Enter numbers(0 or -ve for no more): ");
 	scanf("%ld",&num);
 	//printf("Repeated digit(s): ");
 	
 	while(num > 0)
 	{
	 	printf("Repeated digit(s): ");	  
  	    while(num>0)
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
        printf("\n\nEnter numbers(0 or -ve for no more): ");
 	    scanf("%ld",&num);
    }
}
