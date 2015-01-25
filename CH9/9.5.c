#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main()
{
	int size;
	printf("This program creates a magic square of a specified size\n");
	printf("The size be an odd number between 1 and 99\n");
	
	printf("Enter the size of magic square: ");
	scanf("%d", &size);
	if(size%2 == 0 || size < 0 || size > 99)
	{
		printf("Wrong Entry!!!");
		return 0;
	}
	
	int square[size][size];
	for( int i = 0; i < size; i++)
		for(int j = 0; j < size; j++)
			square[i][j] = 0;
			
	create_magic_square(size, square);
	print_magic_square(size, square);
	
	return 0;	
}

void create_magic_square(int n, int magic_square[n][n])
{
	int row = 0, col = n/2;
	magic_square[row][col] = 1;
	while(magic_square[row][col] <= n*n)
	{
		int new_row = ((row - 1) + n) % n;
		int new_col = ((col + 1) + n) % n;
		if(magic_square[new_row][new_col] == 0)
		{
			magic_square[new_row][new_col] = magic_square[row][col] + 1;
			row = new_row;
			col = new_col;
		}
		else if(magic_square[new_row][new_col] != 0)
		{
			magic_square[row + 1][col] = magic_square[row][col] + 1;
			row = row + 1;
		}
	}
}

void print_magic_square(int n, int magic_square[n][n])
{
	for( int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%3d ", magic_square[i][j]);
		printf("\n\n");	
	}	
		
}
