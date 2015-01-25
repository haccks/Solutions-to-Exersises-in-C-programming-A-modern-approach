#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
							 {0, 1, 1, 0, 0, 0, 0},
							 {1, 1, 0, 1, 1, 0, 1},
							 {1, 1, 1, 1, 0, 0, 1},
							 {0, 1, 1, 0, 0, 1, 1},
							 {1, 0, 1, 1, 0, 1, 1},
							 {1, 0, 1, 1, 1, 1, 1},
							 {1, 1, 1, 0, 0, 0, 0},
							 {1, 1, 1, 1, 1, 1, 1},
							 {1, 1, 1, 1, 0, 1, 1} };
							 
/* To store the characters for seven segment display of the number */							 
char digits[4][MAX_DIGITS*4];							 	
							
void clear_digits_array (void);
void process_digit (int digit, int position);
void print_digits_array (void);

int main()
{	
	int position = 0;
	int digit;
	
	clear_digits_array();
	printf("Enter a number: ");
	while ((digit = getchar()) != '\n' && position < MAX_DIGITS)
	{
		if(digit >= '0' && digit <= '9')
		{
			process_digit(digit - '0', position);
			position++;
		}
	}
	
	printf("\n");
	print_digits_array();
	
	return 0;	
}

/* Set all elements to space character */
void clear_digits_array (void)
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4*MAX_DIGITS; j++)
			digits[i][j] = ' ';		// '`' is used for testing purpose(' ' should be used)
	return;		
}

/* Store the characters into digits array at specified position */
void process_digit (int digit, int position)
{
    int i;
    int j = 4 * position;
    
    for(i = 0; i < 7; i++)
	{
        if (segments[digit][i] == 1)
            switch(i)
			{
                case 0: digits[0][j+1] = '_'; break;
                case 3: digits[2][j+1] = '_'; break;
                case 6: digits[1][j+1] = '_'; break;
                case 1: digits[1][j+2] = '|'; break;
                case 2: digits[2][j+2] = '|'; break;
                case 4: digits[2][j]   = '|'; break;
                case 5: digits[1][j]   = '|'; break;
                
            }
    }
}

/* Display each digit as seven segment */
void print_digits_array (void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4*MAX_DIGITS; j++)
			printf("%c", digits[i][j]);
		printf("\n");	
	}
	return;
}
