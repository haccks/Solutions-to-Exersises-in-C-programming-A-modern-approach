#include <stdio.h>
#include <string.h>

int main()
{
	char *month[] = {
	                	"January", "February", "March",
					 	"April", "May", "June",
						"July","Agust", "September",
					 	"October", "November", "December"
					};
	int mm, dd, yy;
	char date[30];
	char day_year_string[10];
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yy);
	
	sprintf(day_year_string, " %.2d, %4d", dd, yy);
	printf("You entered the date %s", strcat(strcpy(date, month[mm-1]), day_year_string));
	return 0;
}

