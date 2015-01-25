#include <stdio.h>

int main()
{
 	char ch,initial;
 	int i = 0;
 	
 	printf("Enter a first and last name: ");
 	
 	while((ch = getchar()) != '\n')
 	{	
		//Extracting First initial and allowing extra spaces bfore first name.	    
  	 	if(i == 0 && ch != ' ')
  	 	{
		   initial = ch;
		   i++;
        }
		//Exiting loop after first name.    
		else if(ch == ' ' && i != 0)
		   break;
    }
    
	while((ch = getchar()) != '\n')
	{
	 	  
	 	if(ch != ' ')		//Allowing extra spaces b/w first and last name 
   		   putchar(ch);	  	// and after last name And printing last name.		        
	}
	
	printf(", %c.",initial);
	
	return 0;
}	 	  	         	  

//scanf VERSION!!!!!

/*
#include <stdio.h>

int main()
{
 	char ch,initial;
 	int i = 0;
 	
 	printf("Enter a first and last name: ");
 	scanf("%c",&ch);
 	
 	while(ch != '\n')
 	{	
		//Extracting First initial and allowing extra spaces bfore first name.	    
  	 	if(i == 0 && ch != ' ')
  	 	{
		   initial = ch;
		   i++;
        }
		//Exiting loop after first name.    
		else if(ch == ' ' && i != 0)
		   break;
		scanf("%c",&ch);   
    }
    
	while(ch != '\n')
	{
	 	  
	 	if(ch != ' ')		//Allowing extra spaces b/w first and last name 
   		   putchar(ch);	  	// and after last name And printing last name.
		scanf("%c",&ch);	  		        
	}
	
	printf(", %c.",initial);
	
}	 	  	  */
