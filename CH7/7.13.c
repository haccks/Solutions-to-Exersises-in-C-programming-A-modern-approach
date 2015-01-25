#include <stdio.h>
#include <stdbool.h>

int main()
{
 	char ch;
 	float avg;
 	int words = 0,letters = 0;
 	bool prevWasASpace = true; //spaces at begining are ignored.
 	
 	printf("Enter a sentence: ");
 	
 	while((ch = getchar()) != '\n')
 	{
		if(ch != ' ')
		{
		 	  letters++;
		 	  if(prevWasASpace)
		 	     words++;
			  prevWasASpace = false;     	  
        }
	    else //if(ch == ' ')
           prevWasASpace = true;//Extra spaces are ignored. 
    }
	   printf("Average word lenth: %.1f",avg = (float) letters/words);
	
	return 0;
}	         	  
