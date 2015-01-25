/****Standard C input functions only start processing what you type in when you 
press the Enter key; IOW, input is line-oriented.
Every key you press adds a character to the keyboard buffer.
Then when the line is complete (ie, you press Enter), 
getchar() reads the first character in the buffer, 
which also removes it from the buffer.
Each successive call to getchar() reads and removes the next char, and so on. 
If you don't read every character that you had typed into the keyboard buffer, 
but instead enter another line of text, then the next call to getchar() after 
that will continue reading the characters left over from the previous line; 
you will usually witness this as the program blowing past your second input. 
BTW, the newline from the Enter key is also a character and is also stored in 
the keyboard buffer, so if you have new input to read in you first need to clear 
out the keyboard buffer.
****/
#include <stdio.h>
#include <ctype.h>

int main()
{   
 	int ch;
    int num = 0;
 	
 	printf("Enter phone number: ");
 	
 	while((ch = getchar()) != '\n')
 	{
	 	if(ch >= '0' && ch <= '9'|| ch == '-')
			  printf("%c",ch);
		else
		{
 			switch(toupper(ch))
			{
			 	case 'A':
				case 'B':
				case 'C': num = 2;
					 	  break;
				case 'D':
				case 'E':
				case 'F': num = 3;	 
				  	 	  break;
				case 'G':
				case 'H':
				case 'I': num = 4;
					 	  break;
				case 'J':
				case 'K': 
				case 'L': num = 5;
					 	  break;
				case 'M':
				case 'N':
				case 'O': num = 6;
					 	  break;
				case 'P':
				case 'R':
				case 'S': num = 7;	 	 
				  	 	  break;
				case 'T':
				case 'U':
				case 'V': num = 8;
					 	  break;
				case 'W':
				case 'X': 
				case 'Y': num = 9;
					 	  break;	 	  		   	 	 	 	  
	  	   }
			 		  
		  printf("%d",num);	
  	   }	
    }
    
	return 0;
} 	 	 			 	 	   	   	 
