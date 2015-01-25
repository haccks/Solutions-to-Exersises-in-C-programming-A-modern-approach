#include <stdio.h>
#define SIZE 50

int main()
{
	int sent[SIZE];
	int i = 0,period;
	
	printf("Enter a sentence    : ");
	while((sent[i] = getchar()) != '\n')//&&sent[i] != '.' &&sent[i] != '!'&&sent[i] != '?')
		i++;
	period = sent[i-1];	
	
	printf("Reversal of sentence: ");
	int a = i-1;
	while(--a >= 0) // decrementing 'a' to find first space char.
	{
		int k = a+1;//beginig of each word
		if(a != 0 && sent[a] == ' ')
		{	
			while(k < i-1)
				printf("%c",sent[k++]);
			printf("%c",sent[a]);//printing space.	
			i = a+1;	
		}
		else if(a == 0)
		{
			k = a;
			while(k < i-1)
				printf("%c",sent[k++]);
			break;	
		}
	}
	printf("%c",period);
	return 0;
}
