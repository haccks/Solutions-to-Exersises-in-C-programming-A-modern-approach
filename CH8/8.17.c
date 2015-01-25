#include <stdio.h>

int main()
{
	 const int n;
	 int row,col;
	
	printf("This program creates a magic square of a specified size\n");
	printf("The size must be an odd number between 1 and 99\n\n");
	
	printf("Enter size of magic square: ");
	scanf("%d",&n);
	if(n%2 == 0 || n < 0 || n > 99)
	{
		printf("Wrong Entry!!!");
		return 0;
	}
	
	int board[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			board[i][j] = 0;
	row = 0;
	col = n/2;
	board[row][col] = 1;                    //middle element of row 0 becomes 1.
	while(board[row][col] <= n*n)
	{
		int new_row = ((row - 1) + n) % n;
		int new_col = ((col + 1) + n) % n;
		if(board[new_row][new_col] == 0)
		{
			board[new_row][new_col] = board[row][col] + 1;
			row = new_row;	
			col = new_col;
		}
		else if(board[new_row][new_col] != 0)
		{
			board[row+1][col] = board[row][col] + 1;
			row = row+1;
		}
					
	}
	
	printf("Magic square with magic constant %d is: ",n*(n*n+1)/2);
	printf("\n\n");
	for(row = 0; row < n; row++)
	{	
		for(col = 0; col < n; col++)
			printf("%3d ",board[row][col]);
		printf("\n\n");	
	}
	
	return 0;
}
