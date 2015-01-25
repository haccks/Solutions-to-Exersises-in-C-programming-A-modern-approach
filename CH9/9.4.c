#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26],int counts2[26]);

int main()
{
	int a[26] = {0}, b[26] = {0};
	
	printf("Enter first word: ");
	read_word(a);
	printf("Enter second word: ");
	read_word(b);
	
	bool flag = equal_array(a,b);
	printf("The words are ");
	if(flag)
		printf("anagrams");
	else
		printf("not anagrams");	
	
	return 0;
}

void read_word(int counts[26])
{
	int ch;
	while((ch = getchar()) != '\n')
	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
		counts[toupper(ch) - 'A']++;
}

bool equal_array(int counts1[26],int counts2[26])
{
	int i = 0;
	while(i < 26)
	{
		if(counts1[i] == counts2[i])
			i++;
		else
			break;	
	}
	
	return i == 26 ? true : false;	
}
