#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool are_anagrams(const char *word1, const char *word2);

int main()
{
	char word1[32], word2[32];

	printf("Enter first word: ");
	scanf("%31s", word1);
	printf("Enter second word: ");
	scanf("%31s", word2);
	
	if(are_anagrams(word1, word2))
		printf("The words are anagrams.");
	else
		printf("The words are not anagrams.");
}

bool are_anagrams(const char *word1, const char *word2)
{
	int letter_seen[26] = {0};
	
	while(*word1)
		if( (*word1 >= 'A' && *word1 <= 'Z') || (*word1 >= 'a' && *word1 <= 'z'))
			letter_seen[toupper(*word1++) - 'A']++;
	while(*word2)
		if( (*word2 >= 'A' && *word2 <= 'Z') || (*word2 >= 'a' && *word2 <= 'z'))
			letter_seen[toupper(*word2++) - 'A']--;
			
	for(int i = 0; i < 26; i++)
		if(letter_seen[i] != 0)
			return 0;
	return 1;
}
