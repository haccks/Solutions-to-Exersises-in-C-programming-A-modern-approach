#include <stdio.h>
#include <ctype.h>

int main()
{
 	int ch_count = 0,i;
 	char ch,ch_array[99];
 	
 	printf("Enter message: ");
 	
 	while((ch = getchar()) != '\n')
 	{
	 	switch(ch = toupper(ch))
		{
		 	case 'A': ch_array[ch_count] = '4'; break;
			case 'B': ch_array[ch_count] = '8'; break;
			case 'E': ch_array[ch_count] = '3'; break;
			case 'I': ch_array[ch_count] = '1'; break;
			case 'O': ch_array[ch_count] = '0'; break;
			case 'S': ch_array[ch_count] = '5'; break;
			default : ch_array[ch_count] = ch;
		}
		ch_count++;
    }
    printf("In B1FF-speak: ");
       for(i = 0; i < ch_count; i++)
           printf("%c",ch_array[i]);
    printf("!!!!!!!!!!");
}			 	 	 	  	   	  
