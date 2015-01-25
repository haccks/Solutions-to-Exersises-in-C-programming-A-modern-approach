#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 32

void palindrome(int n, char *message);

int main(void)
{
	int i = 0, ch;
	char arr[SIZE];

	printf("Enter a message: ");
	while((ch = getchar()) != '\n')
	{
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			arr[i++] = tolower(ch);
	}
	palindrome(i, arr);

	return 0;
}

void palindrome(int n, char *message)
{
	char *head = message;
	char *tail = message + n - 1;
	
	while(head < tail)
	{
		if(*head != *tail)
		{
			printf("Not a palimdrome\n");
			exit (0);
		}
		head++;
		tail--;
	}
	printf("Palindrome\n");
}

