#include <stdio.h>
#define N 100

int main()
{
	char message[N];
	int i = 0, j = 0, shift;
	
	printf("Enter message to be encrypted: ");
	while((message[i] = getchar()) != '\n')
		i++;
	
	printf("Enter shift amount: ");
	scanf("%d",&shift);
	
	while(j < i)
	{
		if(message[j] >= 'A' && message[j] <= 'Z')
				message[j] = ((message[j] - 'A') + shift)%26 + 'A';
		else if(message[j] >= 'a' && message[j] <= 'z')
				message[j] = ((message[j] - 'a') + shift)%26 + 'a';	
		j++;	
	}
	j = 0;
	printf("Encrypted message: ");
	while(j < i)
		putchar(message[j++]);
		
	return 0;		
}
