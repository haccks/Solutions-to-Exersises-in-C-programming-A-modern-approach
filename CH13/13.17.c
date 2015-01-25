#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 32

bool is_palindrome(char *message);

int main(void)
{
	char message[SIZE];

	printf("Enter a message: ");
	gets(message);
	if(is_palindrome(message))
		printf("Palindrome\n");
	else
		printf("Not a palimdrome\n");

	return 0;
}

bool is_palindrome(char *message)
{
	char *head = message;
	char *tail = message + strlen(message) - 1;

 while(head < tail)
	{
		if(isalpha(*head) && isalpha(*tail))
		{
			if(toupper(*head) != toupper(*tail))
				return 0;
			head++;
			tail--;
		}
			
		else if( (!isalpha(*head)) && (!isalpha(*tail)) )
		{
			head++;
			tail--;
		}
		else if(!isalpha(*head))
			head++;
		else if(!isalpha(*tail))
			tail--;
	}

	return 1;
}

