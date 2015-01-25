#include <stdio.h>
#define N 100

void encrypt(char *message, int shift);

int main()
{
	char message[N];
	int shift;

	printf("Enter message to be encrypted: ");
	gets(message);
	printf("Enter shift amount: ");
	scanf("%d",&shift);
	
	encrypt(message, shift);
	
	printf("Encrypted message: ");
	printf("%s", message);

	return 0;
}

void encrypt(char *message, int shift)
{
	int i = 0;
	while(message[i])
	{
		if(message[i] >= 'A' && message[i] <= 'Z')
				message[i] = ((message[i] - 'A') + shift)%26 + 'A';
		else if(message[i] >= 'a' && message[i] <= 'z')
				message[i] = ((message[i] - 'a') + shift)%26 + 'a';
		i++;
	}

}
