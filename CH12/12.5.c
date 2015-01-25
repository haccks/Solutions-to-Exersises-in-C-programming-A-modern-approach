#include <stdio.h>
#define N 32

int main()
{
	int i = 0;
	int sentance[N];
	int period;
	int *ptr, *word_end, *word_begin;

	printf("Enter a sentence    : ");
	while((sentance[i] = getchar()) != '\n')
		i++;

	printf("Reversal of sentence: ");
	period = sentance[i - 1];
	ptr = &sentance[i-2];
	word_end = ptr; //End of the word

	while(ptr-- >= sentance)
	{
		if(ptr != sentance && *ptr == ' ')
		{
			word_begin = ptr+1; // Beginning of the word
			while(word_begin <= word_end)
				printf("%c", *word_begin++);
			printf("%c", *ptr);
			word_end = ptr - 1;
		}
		else if(ptr == sentance)
		{
			while(ptr <= word_end)
				printf("%c", *ptr++);
			break;
		}
	}
	printf("%c", period);
	return 0;
}

