#include <stdio.h>
#include <ctype.h>

int main()
{
 	int ch_count = 0,i;
 	char ch,ch_array[99];
 	
 	printf("Enter message: ");
 	
 	while((ch = getchar()) != '\n')
 	{
	 	ch_array[ch_count] = ch;
		ch_count++;
    }
    
    printf("In B1FF-speak: "); 
	for(i = 0; i < ch_count; i++)
	{ 	 	    
	 	switch(ch_array[i] = toupper(ch_array[i]))
		{
		 	case 'A': printf("4"); break;
			case 'B': printf("8"); break;
			case 'E': printf("3"); break;
			case 'I': printf("1"); break;
			case 'O': printf("0"); break;
			case 'S': printf("5"); break;
			default : printf("%c",ch_array[i]);
		}
		
    }
    printf("!!!!!!!!!!");
}			 	 	 	  	   	  
