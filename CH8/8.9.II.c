#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

int main()
{
	char ch, a[N][N];
	int i, move, row, col,seed=11;
	bool flag = true;
	
	for(row = 0; row < N; row++)
		for(col = 0; col < N; col++)
			a[row][col] = '.';
	
	//srand((unsigned)seed);
	srand(time(NULL));
	ch = 'A';
	row = 0;
	col = 0;
	
	for(i = 0; i <= 25;)
	{
		move = rand() % 4;
		printf("%2d	%c	%d\n",i+1,ch,move);//for testing only!
		a[row][col] = ch;
				
		if ((a[row][col + 1] != '.' || col == N - 1 )&& (a[row + 1][col] != '.' || row == N -1) && (a[row - 1][col] != '.' || row == 0) 
    		&& (a[row][col - 1] != '.' || col == 0) || ch == 'Z')
			break;	
		
		switch(move)
		{ 
			case 0: if(row+1 < N && a[row+1][col] == '.' )   //down
					{
						row++;
						i++;
						ch++;
						break;
					}
			case 1: if(col-1 >= 0 && a[row][col-1] == '.')  //left
					{
						col--;
						i++;
						ch++;
						break;
					} 
			case 2: if(row-1 >= 0 && a[row-1][col] == '.')  //up
					{
						row--;
						i++;
						ch++;
						break;
					}		
			case 3: if(col+1 < N && a[row][col+1] == '.' )  //right
					{
						col++;
						i++;
						ch++;
						break;
					}				
		}
		
	}   
		
	for(row = 0; row < N; row++)
	{
		for(col = 0; col < N; col++)
			printf("%c ",a[row][col]);
		printf("\n");
	}
	return (0);				
}	    		    	  		  
