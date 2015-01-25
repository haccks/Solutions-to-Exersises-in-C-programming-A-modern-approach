#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main()
{
 	int i,move,move_count,row,col;//,seed=4;
 	char ch = 'A',a[N][N];

 	for(row = 0; row < N; row++)
 	   for(col = 0; col < N; col++)
 	      a[row][col] = '.';

	//srand((unsigned)seed);
	srand(time(NULL));
	row = 0;//rand()%10;
	col = 0;//rand()%10;
	a[row][col] = ch;

	for(i = 0; i <= 25;)
	{
	    move = rand() % 4;
		printf("%2d	%c	%d\n",i+1,ch,move);

		if(move == 0)
		{                   				//down
		 	if(row+1 < N && a[row+1][col] == '.')
		 	{

			   a[++row][col] = ++ch;
			   i++;
	        }
	   	}
	    else if(move == 2)
		{              				//up
			if(row-1 >= 0 && a[row - 1][col] == '.')
			{
			    a[--row][col] = ++ch;
			    i++;
			}
		}

	    else if(move == 1)
		{             					//left
			if(col-1 >= 0 && a[row][col-1] =='.')
			{
			    a[row][--col] = ++ch;
			    i++;
			}
		}

	    else if(move == 3)
		{             					//right
			if(col+1 < N && a[row][col+1] == '.')
			{
			    a[row][++col] = ++ch;
			    i++;
			}
		}

		if((a[row+1][col]!='.'||row==9) && (a[row - 1][col]!='.'||row==0) &&
		    (a[row][col-1]!='.'||col==0 )&& (a[row][col+1]!='.'||col==9) || i==25)
	     	break;

    }

	for(row = 0; row < N; row++)
	{
	    for(col = 0; col < N; col++)
		   printf("%c ",a[row][col]);
		printf("\n");
	}
	return 0;
}

