#include <stdio.h>

int main()
{
	char sentence[30][20];
	char *ptr;
	int i = 0;

	printf("Enter a sentence    : ");

	do
	{
		scanf("%19s", sentence[i]);
		ptr = sentence[i++];
		while(*ptr)
			ptr++;
	}while(*(ptr-1)!= '.');
	char period = *(ptr-1);
	*(ptr-1) = '\0';
	
	printf("Reversal of sentence: ");
	while(i--)
		printf("%s ", sentence[i]);
	printf("%c", period);
	
	return 0;
}

