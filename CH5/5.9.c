#include <stdio.h>

int main()
{
 	int m1,d1,y1,m2,d2,y2;
 	
 	printf("Enter first date (mm/dd/yy): ");
 	scanf("%d/%d/%d",&m1,&d1,&y1);
 	printf("Enter second date (mm/dd/yy): ");
 	scanf("%d/%d/%d",&m2,&d2,&y2);
 
    if(m1<=12 && m2<=12 && d1<=31 && d2<=31)//In general!
    { 	
 		if(y2 > y1)
 		  	  printf("%d/%d/%.2d is earlier than %d/%d/%.2d",m1,d1,y1,m2,d2,y2);
	    else if(y1 == y2)
    	{
	 	 	 if(m2 > m1)
  	            printf("%d/%d/%.2d is earlier than %d/%d/%.2d",m1,d1,y1,m2,d2,y2);
  		     else if(m1 == m2)
  		     {
 	           if(d2 > d1)
 	              printf("%d/%d/%.2d is earlier than %d/%d/%.2d",m1,d1,y1,m2,d2,y2);
 	           else if(d1 = d2)
			      printf("Dates u have entered are same!!!"); 
			   else
			      printf("%d/%d/%.2d is earlier than %d/%d/%.2d",m2,d2,y2,m1,d1,y1);   
	         }    
	         else
     	       printf("%d/%d/%.2d is earlier than %d/%d/%.2d",m2,d2,y2,m1,d1,y1); 	   
        }
        else //if(y1 > y2)
              printf("%d/%d/%.2d is earlier than %d/%d/%.2d",m2,d2,y2,m1,d1,y1); 
    }
    else
 	 	printf("Wrong Entry???????");  
} 	  	  
