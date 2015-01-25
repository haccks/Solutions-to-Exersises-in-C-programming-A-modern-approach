#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main()
{
	int i,win = 0,lose = 0;
	char ch;
	bool flag;
	srand((unsigned)time(NULL));
	
	do
	{
		flag = play_game();
		if(flag)
		{
			printf("You win!");
			win++;
		}
		else
		{
			printf("You lose!");
			lose++;
		}
		
		printf("\n\nPlay again(Y/N)? ");
		scanf(" %c", &ch);
	    //getchar(); //if there is no space in the specifier in scanf().
		printf("\n");
	}while(ch == 'Y' || ch == 'y');
	
	printf("\nWins: %d	Losses: %d",win,lose);
	
	return 0;
}

int roll_dice(void)
{
	return rand()%6 + rand()%6 + 2;
}

bool play_game(void)
{
	int sum = roll_dice();
	
	printf("You rolled: %d\n", sum);
	if(sum == 7 || sum == 11)
		return 1;
	else if(sum == 2 || sum == 3 || sum == 12)
		return 0;	
	else
	{
		int point = sum;
		printf("Your point is: %d\n", point);
		do
		{
			sum = roll_dice();
			printf("You rolled: %d\n", sum);
			if(sum == 7)
				return 0;			
		}while(point != sum);
		
		return 1;
	}					
}
