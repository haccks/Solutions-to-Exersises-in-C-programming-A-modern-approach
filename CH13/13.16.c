#include <stdio.h>
#include <string.h>
#define MSG_LEN 80

void reverse(char *message);

int main(void)
{
  char msg[MSG_LEN];

  printf("Enter a message: ");
  gets(msg);
  reverse(msg);
  printf("Reversal is: ");
  printf("%s", msg);

  return 0;
}

void reverse(char *message)
{
	char *start, *end, temp;

	start = message;
	end = message + strlen(message) - 1;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

}
