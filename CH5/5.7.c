#include <stdio.h>

int main()
{
 	int x,y,z,w,largest,smallest;
 	
 	printf("Enter four integers:\n");
 	scanf("%d %d %d %d",&x,&y,&z,&w);
 	
 	largest = smallest = x;
 	
 	if(largest < y)
  			   largest = y;
	else 
	 	 	   smallest = y;
					  
    if(largest < z)
	 		   largest = z;
    else if(smallest > z)
		 	   smallest = z;
	    
    if(largest < w)
			  largest = w;
    else if(smallest > w)
    	      smallest = w;

	printf("Largest: %d\nSmallest: %d",largest,smallest); 
}		   						   
