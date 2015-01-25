#include <stdio.h>

#define M 5
#define N 5

int main()
{
 	int grades[M][N] = {0};
 	int row,col,row_sum[M] = {0},col_sum[N] = {0};
 	
 	for(row = 0; row < M ; row++)
 	{
	 	printf("Enter row %d: ",row+1);
		for(col = 0; col < N; col++)
		{
		 	scanf("%d",&grades[row][col]);
		 	
			row_sum[row] += grades[row][col];
			if(row == 0)
			   col_sum[col] = grades[row][col];//first elements of coulumns
			else   
			   col_sum[col] += grades[row][col];//adding next elements of col.
                                                //to first elements of col.
		}
		
    }
	printf("\nRow totals: ");
	   for(row = 0; row < M; row++)
	      printf("%3d",row_sum[row]);		   
	printf("\nCol totals: ");
	   for(col = 0; col < N; col++)
	      printf("%3d",col_sum[col]);
	      
}		 	 	
