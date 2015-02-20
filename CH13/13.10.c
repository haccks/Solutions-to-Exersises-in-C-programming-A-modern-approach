#include <stdio.h>
#include <stdbool.h>

void reverese_name(char *name);

int main()
{
 	char name[100];
 	
 	printf("Enter a first and last name: ");
 	gets(name);
	reverese_name(name);
	
	printf("%s", name);
	
	return 0;
}

void reverese_name(char *name)
{
	char initial = '\0';
	char *reverse = name;
	bool flag = 0;
	
	while(*name != '\0')
 	{
		//Extracting First initial and allowing extra spaces bfore first name.
  	 	if(!flag && *name != ' ')
  	 	{
		   initial = *name++;
		   flag = true;
                }
		//Exiting loop after first name.
		else if(*name++ == ' ' && flag)
		   	break;
        }
	
        while(*name != '\0')
	{
	 	if(*name != ' ')		//Allowing extra spaces b/w first and last name
   		   *reverse++ = *name;	  	// and after last name And printing last name.
   		name++;
	}
	*reverse++ = ',';
	*reverse++ = ' ';
	*reverse++ = initial;
	*reverse++ = '.';
	*reverse = '\0';
}
/* Second Method by modifying name string instead of using reverse.
#include <stdio.h>
#include <stdbool.h>

void reverese_name(char *name);

int main()
{
 	char name[100];

 	printf("Enter a first and last name: ");
 	gets(name);
	reverese_name(name);

	printf("%s", name);

	return 0;
}

void reverese_name(char *name)
{
	char initial = '\0';
	char *reverse = name;
	bool flag = 0;
	int i = 0, j = 0;

	while(*name != '\0')
 	{
		//Extracting First initial and allowing extra spaces bfore first name.
  	 	if(!flag && *name != ' ')
  	 	{
		   initial = *name++;
		   i++;
		   flag = true;
        }
		//Exiting loop after first name.
		else if(*name++ == ' ' && flag)
		   	break;
		else
			i++;
    }
    
    i++;
	name = reverse;
    while(name[i] != '\0')
	{
	 	if(name[i] != ' ')		//Allowing extra spaces b/w first and last name
   		   name[j++] = name[i];	  	// and after last name And printing last name.
   		i++;
	}
	name[j++] = ',';
	name[j++] = ' ';
	name[j++] = initial;
	name[j++] = '.';
	name[j] = '\0';
}*/
