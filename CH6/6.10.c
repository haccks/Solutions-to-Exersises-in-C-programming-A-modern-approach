#include <stdio.h>

int main()
{
 	int d,m,y,d1,m1,y1,temp1=0,temp=0;
 	
 	printf("Enter 0/0/0 for EOF!\n\n");
 	printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d",&m,&d,&y);
    m1 = m;
    d1 = d;
    y1 = y;
 	
 	while(d != 0 && m != 0 && y != 0)
 	{
	  	temp1 = y1*10000 + m1*100 + d1;
		  		  
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d",&m,&d,&y);
        
        temp = y*10000 + m*100 + d;
        
        if(temp1 > temp &&(d != 0 && m != 0 && y != 0))
  		{
		 	m1 = m;
			d1 = d;
			y1 = y;
		}	
		
     }
	 
	 printf("%d/%d/%.2d is the earliest date",m1,d1,y1);
}				 
			 		 
