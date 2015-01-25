#include <stdio.h>

#define M 5
#define N 5

int main()
{
 	int a[M][N] = {0},row_sum[M] = {0},col_sum[N] = {0};
 	int row,col,total,low,high;
 	
 	for(row = 0; row < M ; row++)
 	{
	 	printf("Enter grades for student %d: ",row+1);
		for(col = 0; col < N; col++)
		{
		 	scanf("%d",&a[row][col]);
		 	
			row_sum[row] += a[row][col];
			if(row == 0)
			   col_sum[col] = a[row][col];
			else   
			   col_sum[col] += a[row][col];
		}
		
    }
	printf("\nStudent   Total   Average");
	   for(row = 0; row < M; row++)
	   	  printf("\n%3d.     %3d     %4d",row+1,row_sum[row],row_sum[row]/N);	    		   
	printf("\nQuiz   Average   High   Low");
	   for(col = 0; col < N; col++)//fixing col for each iteration(loop)
	   {   
	   	   low = high = a[0][col];
	   	   for(row = 0; row <  M; row++)
		   {
		      if(high < a[row][col])
		         high = a[row][col];
			  if(low > a[row][col])
			     low = a[row][col];
           }	 	   	 	   		   
 	      printf("\n%3d.    %4d      %3d    %2d",col+1,col_sum[col]/M,high,low);	   		      	   
       }
	      
}		 	 	
