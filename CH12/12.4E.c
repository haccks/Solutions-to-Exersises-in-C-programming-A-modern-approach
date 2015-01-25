#include <stdio.h>
#include <stdbool.h>

bool search (const int a[], int n, int key);

int main()
{
	int temp[7][24], *p, i = 0;
	
	temp[0][0] = 1;
	for (p = &temp[0][0]; p <= &temp[6][23]; p++)
		*p = i++;
	int key = 32;
	//int r = search(&temp[0][0], 7*24, 32);
	
	search(&temp[0][0], 7*24, 32) ? printf("%d", key) : putchar('N');	
}

bool search (const int a[], int n, int key)
{
	int *p;
	for (p = a; p < a + n; p++)
		if(key == *p)
			return true;
	return 0;			
}
