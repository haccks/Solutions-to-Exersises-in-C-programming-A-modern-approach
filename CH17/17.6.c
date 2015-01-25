#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define WORD_LEN 20
#define MAX_WORD 20

int read_line(char str[], int n);
int com_string(const void *p, const void * q)
{
	return strcmp(*(const char**)p, *(const char**)q);
}

int main()
{
	char *word[MAX_WORD];
	int num_words = 0, i = 0;
	char *temp_word = malloc(WORD_LEN+1);

 	while(1)
	{
		if(num_words == MAX_WORD)
		{
			printf("----No more space is left----\n");
			break;
		}

		printf("Enter Word: ");
		read_line(temp_word, WORD_LEN);
		if(!temp_word[0])
			break;
			
		word[i] = malloc(strlen(temp_word)+1);
		if(word[i] == NULL)
		{
			printf("----No space is left----\n");
			break;
		}
		strcpy(word[i++], temp_word);
		num_words++;
	}
	qsort(word, num_words, sizeof(word[0]), com_string);
	printf("In sorted order: ");
	for(i = 0; i < num_words; i++)
		printf("%s ", word[i]);
		
	for(i = 0; i < num_words; i++)
		free(word[i]);
	free(temp_word);
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  //while (isspace(ch = getchar()))
  //  ;
  while ((ch = getchar())!= '\n' && ch != EOF) {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}
