#include <stdio.h>

int main()
{
 	int num,n,r;
 	char *ten_to_teen[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
	 						"Sixteen", "seventeen", "Eighteen", "Nineteen"};
	 						
	char *twenty_to_ties[] = {"Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Sevevty",
								"Eighty", "Ninety"};

	char *zero_to_nine[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
							"Eight", "Nine"};

 	printf("Enter a two-digit number: ");
 	scanf("%2d",&num);

 	n = num/10;
 	r = num%10;
 	
 	if(n > 1)
 	{
 		printf("%s", twenty_to_ties[n-2]);
 		if(r > 0)
 		{
 			printf("-");
 			printf("%s", zero_to_nine[r]);
 		}
 	}
 	else if(n == 1)
 	{
 		printf("%s", ten_to_teen[r]);
 	}
 	else
		printf("%s", zero_to_nine[r]);

    return 0;
}
