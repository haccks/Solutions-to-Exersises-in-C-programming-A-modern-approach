#include <stdio.h>
#include <ctype.h>

int main()
{
	int letter_seen[26] = {0};
	int i = 0, j = 0, ch;
	
	printf("Enter first word: ");
	while((ch = getchar()) != '\n')
		if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
			letter_seen[toupper(ch) - 'A']++;
		
	printf("Enter second word: ");
	while((ch = getchar()) != '\n')
		if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
			letter_seen[toupper(ch) - 'A']--;
		
	for(i = 0; i < 26; i++)
		if(letter_seen[i] != 0)
			break;
	if(i == 26)
		printf("The words are anagrams.");
	else
		printf("The words are not anagrams.");			
}
