#include <stdio.h>
#include <ctype.h>

int main()
{
	const int letters_face[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	int ch, sum = 0;
	
	printf("Enter a word: ");
	while((ch = getchar()) != '\n')
		if(ch != ' ')
			sum += letters_face[toupper(ch) - 65];
		
	printf("Scrabble value: %d",sum);
	return 0;
}
