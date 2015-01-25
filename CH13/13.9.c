#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main()
{
 	char sentence[32];

 	printf("Enter a sentence: ");
 	gets(sentence);

	printf("Your sentence contains %d vowels.",compute_vowel_count(sentence));
	return 0;
}

int compute_vowel_count(const char *sentence)
{
 	int count = 0;
	while(*sentence)
 	{
		switch(tolower(*sentence++))
		{
         	case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': count++;
		}
    }
    return count;
}

