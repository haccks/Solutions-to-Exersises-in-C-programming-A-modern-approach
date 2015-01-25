#include <stdio.h>

void selection_sort(int a[], int n);

int main()
{
	int size;
	
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	int b[size], i = 0;
	printf("Enter %d integers to be sorted: ",size);
	while(i < size)
		scanf("%d", &b[i++]);
	selection_sort(b, size);
	
	printf("Sorted integers(by selection sort) are: ");
	for(int i = 0; i < size; i++)
		printf("%d ", b[i]);
			
	return 0;		
}

void selection_sort(int a[], int n)
{	
	if(n == 1)//no need to test for 0th element!
		return;
	else
	{
		int i = 0, c = 0;
		int largest = a[0];
		while(i < n)
		{
			if(largest < a[i])
			{
				c = i;
				largest = a[i];	
			}	
			i++;
		}
			
		--n;
		if(c != n) //if c==n, then no need of swapping.
		{
			int temp = a[n];
			a[n] = largest;
			a[c] = temp;
		}
		selection_sort(a, n);
	} 	
}
	
