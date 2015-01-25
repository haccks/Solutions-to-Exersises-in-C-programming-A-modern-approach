#include <stdio.h>

int main()
{
 	char ch;
 	float a1,a2; 
 	
 	printf("Enter an expression: ");
		
	scanf("%f",&a2);
	scanf("%c",&ch);
	
	while(ch != '\n')
	{
	 	a1 = a2;
		scanf("%f",&a2);
		 	 	
		switch(ch)
		{
  		   case '+': a2 = a1 + a2;
			 	     break;
 	       case '-': a2 = a1 - a2;
					 break;
 		   case '*': a2 = a1 * a2;
					 break;
 	       case '/': a2 = a1 / a2;
        
		}
		scanf("%c",&ch);
		
     }
	 printf("Value of expression: %.2f",a2);
	 return 0;
}					   		   		        		  
