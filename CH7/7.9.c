#include <stdio.h>

int main(void)
{
 	int h,m,t;
	char ch1,ch2;
	   
 	printf("Enter a 12-hour time(hh:mm am/pm): ");
 	scanf("%d:%d %c%c",&h,&m,&ch1,&ch2);
 	
 	if(h <= 12 && m <= 59)
 	{
 	 	 //if((ch1=='A'|| ch1=='a')||(ch1=='A'&&ch2=='M'||ch1=='a'&&ch2=='m')) 	  
    	 //   ;   
    	 if((ch1=='P'|| ch1=='p')||(ch1=='P'&&ch2=='M'||ch1=='p'&&ch2=='m'))    
		     h = h+12;
	        
		 printf("Equivalent 24-hour time: ");
    
    	 if(h==12||h==24)
			 printf("%d:%.2d",h-12,m);
		 else   
             printf("%d:%.2d",h,m);
    }
    else
    	printf("Wrong Entry!!!!");
    	
}
