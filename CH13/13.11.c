#include <stdio.h>
#include <stdbool.h>

double compute_average_word_length(const char *sentence);

int main()
{
    char sentence[64];

 	printf("Enter a sentence: ");
 	gets(sentence);

    printf("Average word lenth: %.1f", compute_average_word_length(sentence));

	return 0;
}

double compute_average_word_length(const char *sentence)
{
 	int words = 0,letters = 0;
 	bool prevWasASpace = true;          //spaces at begining are ignored.
 	
	while(*sentence != '\0')
 	{
		if(*sentence != ' ')
		{
		 	  letters++;
		 	  if(prevWasASpace)
		 	     words++;
			  prevWasASpace = false;
        }
	    else if(*sentence == ' ')
           prevWasASpace = true;        //Extra spaces are ignored.
        sentence++;
    }

	return (double) letters/words;
}
