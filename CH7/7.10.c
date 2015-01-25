#include <stdio.h>
#include <ctype.h>

int main()
{
 	char ch;
 	int i = 0;
 	
 	printf("Enter a sentence: ");
 	
 	while((ch = getchar()) != '\n')
 	{
		switch(tolower(ch))
		{
         	case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': i++;
		}	 
		
    }
	 printf("Your sentence contains %d vowels.",i);
	 return 0;
}		 	 	  	  

//Using scanf()

/*
int main()
{
 	char ch;
 	int i = 0;
 	
 	printf("Enter a sentence: ");
 	scanf("%c",&ch);
 	
 	while(ch != '\n')
 	{
		switch(tolower(ch))
		{
         	case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': i++;
		}	 
		scanf("%c",&ch);
    }
	 printf("Your sentence contains %d vowels.",i);
}		 	*/
