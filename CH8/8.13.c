#include <stdio.h>
#include <stdbool.h>

int main()
{
	char ch, last_name[20], initial;
	int i = 0;
	bool flag = false;
	
	printf("Enter a first & last name: ");
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && flag)
			break;
		if(ch != ' ' && !flag)
		{
			initial = ch;
			flag = true;
		}
			
	}
	
	while((ch = getchar()) != '\n')
		if(ch != ' ')
			last_name[i++] = ch;
	
	printf("You entered the name: ");
	int j = 0;
	while(j < i)
		printf("%c",last_name[j++]);
	printf(", %c.",initial);
	
	return 0;		
}
